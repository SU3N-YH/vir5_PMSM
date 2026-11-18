`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito
// 
// Create Date:    11:03:44 07/14/2026 
// Design Name: 
// Module Name:    Clarke2alphabeta 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//   Optimized amplitude-invariant Clarke transform for 3-phase motor.
//   Pre-calculates (I_B + I_C) and (I_B - I_C) to reduce TDM multiplier usage.
//   Current format is S35Q25. Multiplier input A is S18Q16.
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Clarke3Phase(
    input  wire                 clk_180MHz,
    input  wire                 rst_n,

    // 3-Phase Current Inputs (S35 format, Q25 precision)
    input  wire signed [34:0]   I_A_S35_Q25,
    input  wire signed [34:0]   I_B_S35_Q25,
    input  wire signed [34:0]   I_C_S35_Q25,

    // STM32 Communication Outputs (S16 format, Q9 precision with saturation clamping)
    output wire signed [15:0]   I_alpha_STM32_Out,
    output wire signed [15:0]   I_beta_STM32_Out,
    output wire signed [17:0]   Ia_S18_Q9,
    output wire signed [17:0]   Ib_S18_Q9,
    output wire signed [17:0]   Ic_S18_Q9,
    
    // Internal High-Precision Outputs (S18 format, Q9 precision)
    output reg  signed [17:0]   I_alpha_S18_Q9,
    output reg  signed [17:0]   I_beta_S18_Q9
);

    // S19Q9 copies retain the carry/sign bit needed by the STM32 overflow test.
    // 16'h8000 is the STM32 overflow marker (the 16-bit representation of 32768).
    localparam signed [18:0] MAX_ovfl = 19'sd131071;
    localparam signed [18:0] min_OVFL = -19'sd131072;
    reg signed [18:0] I_alpha_STM32_src_S19_Q9;
    reg signed [18:0] I_beta_STM32_src_S19_Q9;
    reg signed [15:0] I_alpha_STM32_reg;
    reg signed [15:0] I_beta_STM32_reg;

    // ---------------------------------------------------------
    // Combinatorial Pre-calculation (I_B + I_C) and (I_B - I_C)
    // ---------------------------------------------------------
    wire signed [34:0] BplusC_S35_Q25 = I_B_S35_Q25 + I_C_S35_Q25;
    wire signed [34:0] BdashC_S35_Q25 = I_B_S35_Q25 - I_C_S35_Q25;

    // ---------------------------------------------------------
    // Truncation: S35Q25 to S18Q9
    // Shift right by 16 (drop Q25 to Q9). Keep 18 bits.
    // ---------------------------------------------------------
    wire signed [17:0] I_A_S18_Q9      = I_A_S35_Q25 >>> 16;
    wire signed [17:0] I_B_S18_Q9      = I_B_S35_Q25 >>> 16;
    wire signed [17:0] I_C_S18_Q9      = I_C_S35_Q25 >>> 16;
    wire signed [17:0] BplusC_S18_Q9   = BplusC_S35_Q25 >>> 16;
    wire signed [17:0] BdashC_S18_Q9   = BdashC_S35_Q25 >>> 16;

    // ---------------------------------------------------------
    // Fixed-point scaling coefficients (S18 Q16 format)
    // ---------------------------------------------------------
    localparam signed [17:0] C_2_3   = 18'sd43691;  // 2/3 = 43691/65535(2^16)
    localparam signed [17:0] C_1_3   = 18'sd21845;  // 1/3 = 21845/65535(2^16)
    localparam signed [17:0] C_SQ3_3 = 18'sd37837;  // sqrt(3)/3 = 37837/65535(2^16)

    // ---------------------------------------------------------
    // TDM State Machine Variables
    // ---------------------------------------------------------
    reg signed [17:0] mul_a1;
    reg signed [17:0] mul_b1;
    wire signed [35:0] mul_result1; 

    // Registers for truncated multiplier results (S18Q9)
    reg signed [17:0] prod_23A_S18         = 0;
    reg signed [17:0] prod_13_BplusC_S18   = 0;
    reg signed [17:0] prod_sq33_BdashC_S18 = 0;

    reg [5:0] Time_cnt = 1; 
    reg [3:0] Task_No  = 0;
    reg [3:0] Task_No_d1 = 0; // 1-cycle delayed task for stable combinatorial output reading
    reg       clk_10MHz = 1'b1;

    localparam MUL1 = 4'sd1;
    localparam MUL2 = 4'sd2;
    localparam MUL3 = 4'sd3;
    localparam MUL4 = 4'sd4;
    localparam MUL5 = 4'sd5;
    localparam MUL6 = 4'sd6;

    // Hardware Multiplier (0-cycle combinatorial)
    mul_clarke u_mul18x18 (
        .clk(clk_180MHz),
        .a  (mul_a1),
        .b  (mul_b1),
        .p  (mul_result1)
    );

    // ---------------------------------------------------------
    // 180MHz Domain: TDM Scheduler & Multiplication Tasks
    // ---------------------------------------------------------
    always @(posedge clk_180MHz) begin
        
        // Status switching
        Time_cnt <= Time_cnt + 1'b1;
        
        if (Time_cnt == 18 || Time_cnt == 1 || Time_cnt == 2) begin
            Task_No   <= MUL1;
            clk_10MHz <= 1'b1;
        end
        else if (Time_cnt == 3 || Time_cnt == 4 || Time_cnt == 5) begin
            Task_No   <= MUL2;
            clk_10MHz <= 1'b1;
        end
        else if (Time_cnt == 6 || Time_cnt == 7 || Time_cnt == 8) begin
            Task_No   <= MUL3;
            clk_10MHz <= 1'b1;
        end
        else if (Time_cnt == 9 || Time_cnt == 10 || Time_cnt == 11) begin
            Task_No   <= MUL4;
            clk_10MHz <= 1'b0;
        end
        else if (Time_cnt == 12 || Time_cnt == 13 || Time_cnt == 14) begin
            Task_No   <= MUL5;
            clk_10MHz <= 1'b0;
        end
        else if (Time_cnt == 15 || Time_cnt == 16 || Time_cnt == 17) begin
            Task_No   <= MUL6;
            clk_10MHz <= 1'b0;
        end
        
        if (Time_cnt == 18) begin
            Time_cnt <= 1;
        end

        // STEP 1: Delay the Task_No by 1 clock cycle to align with combinatorial result
        Task_No_d1 <= Task_No;

        // STEP 2: Assign Inputs to Combinatorial Multiplier
        case (Task_No)
            MUL1: begin
                // (2/3) * I_A
                mul_a1 <= C_2_3;
                mul_b1 <= I_A_S18_Q9;
            end
            
            MUL2: begin
                // (1/3) * (I_B + I_C)
                mul_a1 <= C_1_3;
                mul_b1 <= BplusC_S18_Q9;
            end

            MUL3: begin
                // (sqrt(3)/3) * (I_B - I_C)
                mul_a1 <= C_SQ3_3;
                mul_b1 <= BdashC_S18_Q9;
            end

            MUL4, MUL5, MUL6: begin
                // latch, no multiplication. Slots available for dual 3-phase STM32 expansion.
                mul_a1 <= 18'sd0;
                mul_b1 <= 18'sd0;
            end
            
            default: begin
                // for auto-routing optimization
            end
        endcase

        // STEP 3: Latch Outputs based on the delayed task state
        case (Task_No_d1)
            MUL1: prod_23A_S18 <= mul_result1 >>> 16; // Truncate product from S35Q25 to S18Q9
            MUL2: prod_13_BplusC_S18 <= mul_result1 >>> 16;
            MUL3: prod_sq33_BdashC_S18 <= mul_result1 >>> 16;
        endcase
    end

    // ---------------------------------------------------------
    // 10MHz Domain: Addition, Subtraction and Truncation
    // ---------------------------------------------------------
    always @(posedge clk_10MHz) begin
        if (!rst_n) begin
            I_alpha_S18_Q9 <= 18'sd0;
            I_beta_S18_Q9  <= 18'sd0;
            I_alpha_STM32_src_S19_Q9 <= 19'sd0;
            I_beta_STM32_src_S19_Q9  <= 19'sd0;
        end else begin
            // Final accumulation maps directly to I_alpha and I_beta (S18Q9)
            I_alpha_S18_Q9 <= prod_23A_S18 - prod_13_BplusC_S18;
            I_beta_S18_Q9  <= prod_sq33_BdashC_S18;

            // Sign-extend before the arithmetic so overflow is detected
            // before the legacy 18-bit internal result wraps around.
            I_alpha_STM32_src_S19_Q9 <=
                $signed({prod_23A_S18[17], prod_23A_S18}) -
                $signed({prod_13_BplusC_S18[17], prod_13_BplusC_S18});
            I_beta_STM32_src_S19_Q9 <=
                $signed({prod_sq33_BdashC_S18[17], prod_sq33_BdashC_S18});
        end
    end

    // STM32 interface: output 16'h8000 on S18Q9 overflow, otherwise shift to S16.
    always @(*) begin
        if ((I_alpha_STM32_src_S19_Q9 > MAX_ovfl) ||
            (I_alpha_STM32_src_S19_Q9 < min_OVFL))
            I_alpha_STM32_reg = 16'h8000;
        else
            I_alpha_STM32_reg = I_alpha_STM32_src_S19_Q9 >>> 2;

        if ((I_beta_STM32_src_S19_Q9 > MAX_ovfl) ||
            (I_beta_STM32_src_S19_Q9 < min_OVFL))
            I_beta_STM32_reg = 16'h8000;
        else
            I_beta_STM32_reg = I_beta_STM32_src_S19_Q9 >>> 2;
    end

    assign I_alpha_STM32_Out = I_alpha_STM32_reg;
    assign I_beta_STM32_Out  = I_beta_STM32_reg;
    
    //for mutual EMF calculation
    assign Ia_S18_Q9 = I_A_S18_Q9;
    assign Ib_S18_Q9 = I_B_S18_Q9;
    assign Ic_S18_Q9 = I_C_S18_Q9;

endmodule
