`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito
// 
// Create Date:    07/23/2026 
// Design Name: 
// Module Name:    Mechanical
// Project Name: 
// Target Devices: Spartan-6
// Tool versions: ISE 14.7
// Description: Fixed-point mechanical model derived from Kinetic_eq(1).m
//              Output ports mapped to pure combinational wires to save FF resources.
//              TL input format changed to S16_Q5 and expanded internally.
//
// Dependencies: 
//
// Revision: 
// Revision 0.05 - Fixed TDM pipeline data hazard by implementing End-of-Slot latching
//////////////////////////////////////////////////////////////////////////////////
module Mechanical (
    input  wire               clk_180MHz,
    input  wire               rst_n,
    
    // Algorithm Inputs with SXX_QXX format
    input  wire signed [15:0] Freq_Division_S16, 
    input  wire signed [15:0] TsOverJ_S16_Q27,   
    input  wire signed [15:0] TsOver2pi_S16_Q34, 
    input  wire signed [34:0] Te_S35_Q17,   
    input  wire signed [15:0] TL_S16_Q5,         
    input  wire signed [15:0] B_S16_Q11,        
    input  wire signed [15:0] p_n_S16_Q0,  
    
    // Outputs
    output wire signed [17:0] OMGm_S18_Q4,   
    output wire signed [17:0] ePOS_S18_360,    
    output wire signed [17:0] eOMG_S18_Q4    
    );

    // parameters & variables definition begin
    reg         [7:0] Time_cnt = 1; 
    reg  signed [3:0] Task_No = 0; 
    reg               clk_1MHz = 1'b1; 
    reg  signed [15:0] freq_div_cnt = 1;

    // Intermediate variables for calculation with SXX_QXX format
    reg  signed [34:0] Temp1_S35_Q17 = 0;
    reg  signed [52:0] Temp3_S53_Q44 = 0;  
    reg  signed [34:0] OMGm_S35_Q17 = 0;
    reg  signed [34:0] eOmg_S35_Q17 = 0;
    reg  signed [34:0] ePos_S35_Q34 = 0; 
    
    // Multiplier raw outputs (Q-format derived from inputs)
    reg  signed [52:0] Temp1_S53_Q28 = 0; 
    reg  signed [52:0] Temp2_S53_Q44 = 0; 
    reg  signed [52:0] Tmp_OMGm_S53_Q44 = 0;
    reg  signed [52:0] Tmp_ePos_S53_Q44 = 0;
    
    // Combinational expansion of TL from S16_Q5 to S35_Q17
    wire signed [34:0] TL_S35_Q17 = { {7{TL_S16_Q5[15]}}, TL_S16_Q5, 12'd0 };
    
    wire signed [34:0] Te_dash_TL = Te_S35_Q17 - TL_S35_Q17;
    
    // Hardware multiplier port
    reg  signed [17:0] mul_a;
    reg  signed [34:0] mul_b; 
    wire signed [52:0] mul_result;

    parameter IDLE = 4'sd0;
    parameter MUL1 = 4'sd1;
    parameter MUL2 = 4'sd2;
    parameter MUL3 = 4'sd3;
    parameter MUL4 = 4'sd4;
    parameter MUL5 = 4'sd5;
    parameter MUL6 = 4'sd6;

    // Hardware multiplier instantiation (Inferred STM3248A1)
    MUL_Mech u_MUL_18x35(
        .clk(clk_180MHz), 
        .a(mul_a), 
        .b(mul_b), 
        .p(mul_result) 
    );

    // Time-division multiplexing process at 180MHz
    always @(posedge clk_180MHz) begin
        if (!rst_n) begin
            Time_cnt <= 8'd1;
            Task_No  <= IDLE;
            clk_1MHz <= 1'b1;
            mul_a    <= 18'sd0;
            mul_b    <= 35'sd0;
            Temp1_S53_Q28 <= 53'sd0;
            Temp2_S53_Q44 <= 53'sd0;
            eOmg_S35_Q17  <= 35'sd0;
            Temp3_S53_Q44 <= 53'sd0;
        end else begin
            if (Time_cnt >= 8'd180) begin
                Time_cnt <= 8'd1;
            end else begin
                Time_cnt <= Time_cnt + 1'b1;
            end
            
            // Slot allocation (30 cycles per STM32 task)
            if (Time_cnt >= 8'd1 && Time_cnt <= 8'd30) begin
                Task_No  <= MUL1;
                clk_1MHz <= 1'b1;
            end
            else if (Time_cnt >= 8'd31 && Time_cnt <= 8'd60) begin
                Task_No  <= MUL2;
                clk_1MHz <= 1'b1;
            end
            else if (Time_cnt >= 8'd61 && Time_cnt <= 8'd90) begin
                Task_No  <= MUL3;
                clk_1MHz <= 1'b1;
            end
            else if (Time_cnt >= 8'd91 && Time_cnt <= 8'd120) begin
                Task_No  <= MUL4;
                clk_1MHz <= 1'b0;
            end
            else if (Time_cnt >= 8'd121 && Time_cnt <= 8'd150) begin
                Task_No  <= MUL5;
                clk_1MHz <= 1'b0;
            end
            else if (Time_cnt >= 8'd151 && Time_cnt <= 8'd180) begin
                Task_No  <= MUL6;
                clk_1MHz <= 1'b0;
            end 

            // =========================================================================
            // 1. TDM Input Drive Logic (Continuous assignment during the slot)
            // =========================================================================
            case (Task_No)
                MUL1: begin
                    mul_a <=  {{2{B_S16_Q11[15]}}, B_S16_Q11};
                    mul_b <= OMGm_S35_Q17; 
                end
                MUL2: begin
                    mul_a <= {{2{TsOverJ_S16_Q27[15]}}, TsOverJ_S16_Q27};
                    mul_b <= Te_dash_TL - Temp1_S35_Q17;
                end
                MUL3: begin
                    // Pipeline synchronization / Idle
                    mul_a <= 18'sd0;
                    mul_b <= 35'sd0;
                end
                MUL4: begin
                    mul_a <=  {{2{p_n_S16_Q0[15]}}, p_n_S16_Q0};
                    mul_b <= OMGm_S35_Q17; 
                end
                MUL5: begin
                    mul_a <= {{2{TsOver2pi_S16_Q34[15]}}, TsOver2pi_S16_Q34};
                    mul_b <= eOmg_S35_Q17; 
                end
                MUL6: begin
                    // Reserved for future Dual 3-Phase expansion
                    mul_a <= 18'sd0;
                    mul_b <= 35'sd0;
                end
                default: begin
                    // mul_a <= 18'sd0;
                    // mul_b <= 35'sd0;
                end
            endcase

            // =========================================================================
            // 2. TDM Output Latch Logic (Strictly End-of-Slot Latching)
            // Ensures multiplier pipeline latency is completely flushed before sampling
            // =========================================================================
            if (Time_cnt == 8'd30)  Temp1_S53_Q28 <= mul_result;
            if (Time_cnt == 8'd60)  Temp2_S53_Q44 <= mul_result;
            if (Time_cnt == 8'd120) eOmg_S35_Q17  <= {mul_result[52], mul_result[33:0]};  //mul_result[34:0];
            if (Time_cnt == 8'd150) Temp3_S53_Q44 <= mul_result;
        end
    end

    // Non-multiplication process at 1MHz with variable frequency division
    always @(posedge clk_1MHz or negedge rst_n) begin
        if (!rst_n) begin
            freq_div_cnt     <= 16'd1;
            OMGm_S35_Q17     <= 35'sd0;
            Temp1_S35_Q17    <= 35'sd0;
            ePos_S35_Q34     <= 35'sd0;
            Tmp_OMGm_S53_Q44 <= 53'sd0;
            Tmp_ePos_S53_Q44 <= 53'sd0;
        end else begin
            // Execution condition based on STM32 Freq_Division_S16
            if (freq_div_cnt >= Freq_Division_S16) begin
                freq_div_cnt     <= 16'd1;                
                Tmp_OMGm_S53_Q44 <= Tmp_OMGm_S53_Q44 + Temp2_S53_Q44; 
                Tmp_ePos_S53_Q44 <= Tmp_ePos_S53_Q44 + Temp3_S53_Q44;
            end else begin
                freq_div_cnt     <= freq_div_cnt + 1'b1;
            end
            if (Tmp_ePos_S53_Q44 > 53'sd2251799813685247) begin
                Tmp_ePos_S53_Q44 <= 53'sd0;
            end 
            if (Tmp_ePos_S53_Q44 < -53'sd2251799813685247) begin
                Tmp_ePos_S53_Q44 <= 53'sd0;
            end
            // OMGm_S35_Q17  <= Tmp_OMGm_S53_Q44[52:18]; 
            // ePos_S35_Q34  <= Tmp_ePos_S53_Q44[52:18];
            OMGm_S35_Q17  <= {{9{Tmp_OMGm_S53_Q44[52]}}, Tmp_OMGm_S53_Q44[52:27]};   // previously Tmp_OMGm_S53_Q44[52:18], 移位27corrected by B. Tian 20260924
            ePos_S35_Q34  <= {{Tmp_ePos_S53_Q44[52]}, Tmp_ePos_S53_Q44[50:17]};      // previously Tmp_ePos_S53_Q44[52:18]; 移位17corrected by B. Tian 20260924
            Temp1_S35_Q17 <= {Temp1_S53_Q28[52],Temp1_S53_Q28[44:11]};
        end
    end

    // =========================================================================
    // Output Formatting & Saturation Clamping 

    // 1. Format OMGm_S18_Q4 (Shift right by 13 to align Q17 to Q4)
    wire signed [34:0] OMGm_shifted = OMGm_S35_Q17 >>> 13;
    reg  signed [17:0] OMGm_sat;
    always @(*) begin
        if (OMGm_shifted > 35'sd131071) OMGm_sat = 18'sd131071;
        else if (OMGm_shifted < -35'sd131072) OMGm_sat = -18'sd131072;
        else OMGm_sat = OMGm_shifted[17:0];
    end
    assign OMGm_S18_Q4 = OMGm_sat;

    // 2. Format ePOS_S18_360 (Shift right by 17 to align Q17 to Q0 format)
    assign ePOS_S18_360 = ePos_S35_Q34[34:17];

    // 3. Format eOMG_S18_Q4 (Shift right by 13 to align Q17 to Q4)
    wire signed [34:0] eOMG_shifted = eOmg_S35_Q17 >>> 13;
    reg  signed [17:0] eOMG_sat;
    always @(*) begin
        if (eOMG_shifted > 35'sd131071) eOMG_sat = 18'sd131071;
        else if (eOMG_shifted < -35'sd131072) eOMG_sat = -18'sd131072;
        else eOMG_sat = eOMG_shifted[17:0];
    end
    assign eOMG_S18_Q4 = eOMG_sat;
    
endmodule
