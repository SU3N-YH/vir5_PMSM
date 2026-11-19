`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito.SUEN
// 
// Create Date:    09:52:02 07/14/2026 
// Design Name: 
// Module Name:    Volt_N_calc 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//   - Computes Five-Phase Neutral Voltage U_N (S35_Q17).
//   - Accepts three pre-computed five-phase averages.
//   - Formula: U_N = sum_uX0_ovr5 - sum_eX_ovr5 - sum_eMUTUAL_ovr5
//   - Division by 5 is performed upstream by add5ov5.
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
/////////////////////////////////////////////////////////////////////////////////
module Volt_N_calc (
    input  wire                 clk,                     
    input  wire                 rst_n,                   

    // Inputs: Pre-computed divided values (S35_Q17 format)
    input  wire signed [34:0]   sum_uX0_ovr5,
    input  wire signed [34:0]   sum_eX_ovr5,
    input  wire signed [34:0]   sum_eMUTUAL_ovr5,
    
    // Output: Neutral point voltage U_N 
    output wire signed [15:0]   U_N_STM32,      // STM32 output in S16_Q8 format
    output reg  signed [34:0]   U_N_S35_Q17   // Internal full precision output
);
    
    reg  signed [35:0] diff_stage1_S36_Q17; // Intermediate pipeline register
    wire signed [25:0] shifted_val_Q8;      // 26-bit wire for Q17 to Q8 shift
    reg  signed [15:0] U_N_STM32_reg;         // Register for saturation output

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            diff_stage1_S36_Q17 <= 36'sd0;
            U_N_S35_Q17         <= 35'sd0;
        end else begin
            // Stage 1: Compute bridge arm voltage minus back-EMF
            diff_stage1_S36_Q17 <= sum_uX0_ovr5 - sum_eX_ovr5;
            
            // Stage 2: Subtract mutual voltage drop and assign to output
            U_N_S35_Q17         <= diff_stage1_S36_Q17 - sum_eMUTUAL_ovr5;
        end
    end

    // Shift S35_Q17 to Q8 by discarding the lowest 9 fractional bits
    // Bits [34:9] represent: 1 sign bit + 17 integer bits + 8 fractional bits = 26 bits
    assign shifted_val_Q8 = U_N_S35_Q17[34:9]; 

    // Saturation logic to safely clamp the 26-bit value into a 16-bit S16_Q8 value
    // The valid integer range for S16_Q8 is -32768 to +32767 (representing -128.0 to +127.996)
    always @(*) begin
        if (shifted_val_Q8 > 26'sd32767) begin
            // Positive overflow clamping 
            U_N_STM32_reg = 16'sd32767;     
        end else if (shifted_val_Q8 < -26'sd32768) begin
            // Negative overflow clamping 
            U_N_STM32_reg = -16'sd32768;    
        end else begin
            // Within valid range, safe to truncate upper sign extension bits
            U_N_STM32_reg = shifted_val_Q8[15:0]; 
        end
    end

    // Assign clamped result to the output port
    assign U_N_STM32 = U_N_STM32_reg;

endmodule
