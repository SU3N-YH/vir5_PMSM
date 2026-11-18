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
//   - Computes Three-Phase Neutral Voltage U_N (S35_Q17).
//   - Retains 6-phase I/O interface for top-level compatibility.
//   - Formula: U_N = (uA0 + uB0 + uC0 - eA - eB - eC) / 3
//   - Division by 3 is implemented using pure Shift-and-Add
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
    input  wire signed [34:0]   sum_uX0_ovr3,
    input  wire signed [34:0]   sum_eX_ovr3,
    input  wire signed [34:0]   sum_eMUTUAL_ovr3,
    
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
            diff_stage1_S36_Q17 <= sum_uX0_ovr3 - sum_eX_ovr3;
            
            // Stage 2: Subtract mutual voltage drop and assign to output
            U_N_S35_Q17         <= diff_stage1_S36_Q17 - sum_eMUTUAL_ovr3;
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


// module Volt_N_calc(
//     input  wire                 clk,                     // System clock
//     input  wire                 rst_n,                   // Asynchronous active-low reset

//     // 1. Input: Inverter bridge arm voltages uX0 (S35_Q17 format)
//     input  wire signed [34:0]   uA0_S35_Q17, uB0_S35_Q17, uC0_S35_Q17, 
//     input  wire signed [34:0]   uD0_S35_Q17, uE0_S35_Q17, uF0_S35_Q17,
    
//     // 2. Input: Back-EMF eX (S35_Q17 format from BackEMF module)
//     input  wire signed [34:0]   eA_S35_Q17, eB_S35_Q17, eC_S35_Q17, 
//     input  wire signed [34:0]   eD_S35_Q17, eE_S35_Q17, eF_S35_Q17,
    
//     // 3. Input: Reserved mutual voltage drop interface (S35_Q17)
//     input  wire signed [34:0]   u_mutual_sum_S35_Q17,
    
//     // 4. Output: Neutral point voltage U_N (S35_Q17 format)
//     output reg  signed [34:0]   U_N_S35_Q17
// );

//     // Intermediate registers for sum (Expanded to 37-bit to avoid overflow when adding 3x 35-bit values)
//     reg signed [36:0] sum_uX0_S37_Q17;
//     reg signed [36:0] sum_eX_S37_Q17;
    
//     // Total voltage difference before division by 3: sum_uX0 - sum_eX
//     reg signed [37:0] diff_U_S38_Q17;

//     // Shift-and-Add Pipeline for 1/3 approximation
//     // 1/3 appxmt-equal(1/4 + 1/16 + 1/64 + 1/256 + 1/1024 + 1/4096 + 1/16384 + 1/65536)
//     wire signed [37:0] diff_div3_S38_Q17 = (diff_U_S38_Q17 >>> 2)  + 
//                                            (diff_U_S38_Q17 >>> 4)  + 
//                                            (diff_U_S38_Q17 >>> 6)  + 
//                                            (diff_U_S38_Q17 >>> 8)  + 
//                                            (diff_U_S38_Q17 >>> 10) + 
//                                            (diff_U_S38_Q17 >>> 12) + 
//                                            (diff_U_S38_Q17 >>> 14) + 
//                                            (diff_U_S38_Q17 >>> 16);

//     // 2-Stage Pipeline Pipeline Implementation
//     always @(posedge clk or negedge rst_n) begin
//         if (!rst_n) begin
//             sum_uX0_S37_Q17 <= 37'sd0;
//             sum_eX_S37_Q17  <= 37'sd0; 
//             diff_U_S38_Q17  <= 38'sd0;
//             U_N_S35_Q17     <= 35'sd0;
//         end else begin
//             // Stage 1: Sum 3 phases (A, B, C) separately
//             sum_uX0_S37_Q17 <= uA0_S35_Q17 + uB0_S35_Q17 + uC0_S35_Q17;
//             sum_eX_S37_Q17  <= eA_S35_Q17  + eB_S35_Q17  + eC_S35_Q17;
            
//             // Calculate voltage difference (Ignoring mutual inductance for now)
//             diff_U_S38_Q17  <= sum_uX0_S37_Q17 - sum_eX_S37_Q17;

//             // Stage 2: Apply Shift-and-Add 1/3 multiplier result and assign to output
//             U_N_S35_Q17     <= diff_div3_S38_Q17[34:0];
//         end
//     end

// endmodule