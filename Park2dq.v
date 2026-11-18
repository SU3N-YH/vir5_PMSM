`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:43 07/14/2026 
// Design Name: 
// Module Name:    Park2dq 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//   Park transform with CORDIC-based trigonometric calculation and
//   multiplexed hardware multiplication in the same style as Inductor.v.
//
// Dependencies: 
//   cordic
//
// Revision: 
// Revision 0.03 - Use S18Q9 current datapath and 18x18 multiplier
// Additional Comments: 
//
/////////////////////////////////////////////////////////////////////////////////
module Park2dq(
    input  wire                 clk_180MHz,
    input  wire                 rst_n,

    // Electrical angle input (S18 format)
    input  wire signed [17:0]   epos_S18,

    // Stationary Alpha-Beta inputs (S18 format, Q9 precision)
    input  wire signed [17:0]   I_alpha_S18_Q9,
    input  wire signed [17:0]   I_beta_S18_Q9,

    // Rotating D-Q outputs (S18 format, Q9 precision)
    output wire signed [15:0]   I_d_STM32_Out,
    output wire signed [15:0]   I_q_STM32_Out,
    output reg  signed [17:0]   I_d_S18_Q9,
    output reg  signed [17:0]   I_q_S18_Q9

);

    // S19Q9 copies retain the carry/sign bit needed by the STM32 overflow test.
    // 16'h8000 is the STM32 overflow marker (the 16-bit representation of 32768).
    localparam signed [18:0] MAX_ovfl = 19'sd131071;
    localparam signed [18:0] min_OVFL = -19'sd131072;
    reg signed [18:0] Id_result;
    reg signed [18:0] Iq_result;
    reg signed [15:0] I_d_STM32_reg;
    reg signed [15:0] I_q_STM32_reg;

    // ---------------------------------------------------------
    // Angle conversion logic cordic_in_deg = epos*180 
    // ---------------------------------------------------------
    wire signed [31:0] shift_7 = {{7{epos_S18[17]}}, epos_S18, 7'b0};
    wire signed [31:0] shift_5 = {{9{epos_S18[17]}}, epos_S18, 5'b0};
    wire signed [31:0] shift_4 = {{10{epos_S18[17]}}, epos_S18, 4'b0};
    wire signed [31:0] shift_2 = {{12{epos_S18[17]}}, epos_S18, 2'b0};

    wire signed [31:0] cordic_in_deg = shift_7 + shift_5 + shift_4 + shift_2;
    // ---------------------------------------------------------
    // CORDIC Trigger Logic (Edge Detection)
    // ---------------------------------------------------------
    reg signed [17:0] epos_S18_d1;
    reg cordic_start;
    wire cordic_done; // Must be a wire, do not initialize it
    
    // Generate a 1-cycle start pulse automatically when the input angle changes
    always @(posedge clk_180MHz or negedge rst_n) begin
        if (!rst_n) begin
            epos_S18_d1  <= 18'sd1;
            cordic_start <= 1'b0;
        end else begin
            epos_S18_d1 <= epos_S18;
            
            // Compare current angle with delayed angle
            if (epos_S18 != epos_S18_d1) begin
                cordic_start <= 1'b1; // Trigger CORDIC calculation
            end else begin
                cordic_start <= 1'b0;
            end
        end
    end

    // ---------------------------------------------------------
    // CORDIC Instantiation
    // ---------------------------------------------------------
    wire signed [17:0] cos_th_S18_Q17;
    wire signed [17:0] sin_th_S18_Q17;
    
    // Instantiate the cleanly encapsulated CORDIC
    CORDIC_STANDALONE u_cordic_park (
        .CLOCK(clk_180MHz),    
        .RESET(rst_n),         
        .iCall(cordic_start),  
        .oDone(cordic_done),   
        .iData(cordic_in_deg), 
        
        // Directly connect to 18-bit S18_Q17 nets, no shifting needed!
        .cos(cos_th_S18_Q17),  
        .sin(sin_th_S18_Q17),  
        
        .q_deg(), .q_y(), .q_x()
    );

    // ---------------------------------------------------------
    // TDM State Machine Variables
    // ---------------------------------------------------------
    reg signed [17:0] mul_a1;
    reg signed [17:0] mul_b1;
    wire signed [35:0] mul_result1;

    reg signed [17:0] prod_ac_S18_Q9 = 0;
    reg signed [17:0] prod_bs_S18_Q9 = 0;
    reg signed [17:0] prod_as_S18_Q9 = 0;
    reg signed [17:0] prod_bc_S18_Q9 = 0;

    reg [5:0] Time_cnt = 1; 
    reg [3:0] Task_No  = 0;
    reg       clk_10MHz = 1'b1;

    localparam MUL1 = 4'sd1;
    localparam MUL2 = 4'sd2;
    localparam MUL3 = 4'sd3;
    localparam MUL4 = 4'sd4;
    localparam MUL5 = 4'sd5;
    localparam MUL6 = 4'sd6;

    // Hardware Multiplier: S18Q17 angle coefficient * S18Q9 current.
    // The 36-bit product is S36Q26 and is converted back to S18Q9 below.
    mul_park u_mul_18x18 (
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
        if (Time_cnt == 3 || Time_cnt == 4 || Time_cnt == 5) begin
            Task_No   <= MUL2;
            clk_10MHz <= 1'b1;
        end
        if (Time_cnt == 6 || Time_cnt == 7 || Time_cnt == 8) begin
            Task_No   <= MUL3;
            clk_10MHz <= 1'b1;
        end
        if (Time_cnt == 9 || Time_cnt == 10 || Time_cnt == 11) begin
            Task_No   <= MUL4;
            clk_10MHz <= 1'b0;
        end
        if (Time_cnt == 12 || Time_cnt == 13 || Time_cnt == 14) begin
            Task_No   <= MUL5;
            clk_10MHz <= 1'b0;
        end
        if (Time_cnt == 15 || Time_cnt == 16 || Time_cnt == 17) begin
            Task_No   <= MUL6;
            clk_10MHz <= 1'b0;
        end
        
        if (Time_cnt == 18) begin
            Time_cnt <= 1;
        end

        // Multiplication Tasks
        case (Task_No)
            MUL1: begin
                //cos(theta) * I_alpha
                // mul_a1 <= cos_th_S18_Q16;
                mul_a1 <= cos_th_S18_Q17;
                mul_b1 <= I_alpha_S18_Q9;
                
                // prod_ac_S18_Q9 <= mul_result1[33:16]; // sign bit has been kept while slicing
                // Q26 -> Q9 requires a 17-bit arithmetic right shift
                prod_ac_S18_Q9 <= $signed(mul_result1) >>> 17; 
            end
            
            MUL2: begin
                //sin(theta) * I_beta
                // mul_a1 <= sin_th_S18_Q16;
                mul_a1 <= sin_th_S18_Q17;
                mul_b1 <= I_beta_S18_Q9;
                
                // prod_bs_S18_Q9 <= mul_result1[33:16]; 
                prod_bs_S18_Q9 <= $signed(mul_result1) >>> 17;
            end

            MUL3: begin
                //latch, no mutiplication
                mul_a1      <= 18'sd0;
                mul_b1      <= 18'sd0;
            end

            MUL4: begin
                //sin(theta) * I_alpha
                // mul_a1 <= sin_th_S18_Q16;
                mul_a1 <= sin_th_S18_Q17;
                mul_b1 <= I_alpha_S18_Q9;
                
                // prod_as_S18_Q9 <= mul_result1[33:16];
                prod_as_S18_Q9 <= $signed(mul_result1) >>> 17;
            end
            
            MUL5: begin
                // mul_a1 <= cos_th_S18_Q16;
                mul_a1 <= cos_th_S18_Q17;
                mul_b1 <= I_beta_S18_Q9;
                
                // prod_bc_S18_Q9 <= mul_result1[33:16];
                prod_bc_S18_Q9 <= $signed(mul_result1) >>> 17;
            end
            
            MUL6: begin
                //latch, no mutiplication
                mul_a1      <= 18'sd0;
                mul_b1      <= 18'sd0;
            end
            
            default: begin
                //for auto-routing optimization
            end
        endcase
    end

    // ---------------------------------------------------------
    // 10MHz Domain: Addition and subtraction in S18Q9.
    // ---------------------------------------------------------
    always @(posedge clk_10MHz) begin
        if (!rst_n) begin
            I_d_S18_Q9 <= 18'sd0;
            I_q_S18_Q9 <= 18'sd0;
            Id_result <= 19'sd0;
            Iq_result <= 19'sd0;
        end else begin
            I_d_S18_Q9 <= prod_ac_S18_Q9 + prod_bs_S18_Q9;
            I_q_S18_Q9 <= prod_bc_S18_Q9 - prod_as_S18_Q9;

            // Sign-extend before the arithmetic so overflow is detected
            // before the legacy 18-bit internal result wraps around.
            Id_result <=
                $signed({prod_ac_S18_Q9[17], prod_ac_S18_Q9}) +
                $signed({prod_bs_S18_Q9[17], prod_bs_S18_Q9});
            Iq_result <=
                $signed({prod_bc_S18_Q9[17], prod_bc_S18_Q9}) -
                $signed({prod_as_S18_Q9[17], prod_as_S18_Q9});
        end
    end

    // STM32 interface: output 16'h8000 on S18Q9 overflow, otherwise shift to S16.
    always @(*) begin
        if ((Id_result > MAX_ovfl) ||
            (Id_result < min_OVFL))
            I_d_STM32_reg = 16'h8000;
        else
            I_d_STM32_reg = Id_result >>> 2;

        if ((Iq_result > MAX_ovfl) ||
            (Iq_result < min_OVFL))
            I_q_STM32_reg = 16'h8000;
        else
            I_q_STM32_reg = Iq_result >>> 2;
    end

    assign I_d_STM32_Out = I_d_STM32_reg;
    assign I_q_STM32_Out = I_q_STM32_reg;

endmodule
