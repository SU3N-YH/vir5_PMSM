`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito
// 
// Create Date:    11:49:01 07/20/2026 
// Design Name: 
// Module Name:    Te_calc 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: use park & clarke trans to attain dq axis current, then calc torque.
//
// Dependencies: 
//
// Revision: 
// Revision 1.01 - change the sequence of multiplication. Enhance the time sequence in the form of case(Time_cnt).
// Revision 1.02 - correct Q24-to-Q17 conversion and add saturating S16Q5 STM32 output.
// Additional Comments: All internal comments strictly in English
//
//////////////////////////////////////////////////////////////////////////////////
module Te_calc(
    input                       clk_180MHz,
    input                       rst_n,
    input  signed       [17:0]  I_d_S18_Q9,          // dq-axis d current
    input  signed       [17:0]  I_q_S18_Q9,          // dq-axis q current
    input  signed       [15:0]  Ld_dash_Lq_S16_Q12,  // Ld - Lq, S16Q12 format
    input  signed       [15:0]  Phir_Half_S16_Q15,   // Permanent magnet flux linkage, S16Q15 format
    input  signed       [15:0]  p_n_S16_Q0,          // Pole pairs, S16Q0 format
    output reg signed   [34:0]  Torque_Out_S35_Q17,  // Calculated torque shifted to S35Q17 format
    output reg signed   [15:0]  Torque_STM32_S16_Q5    // STM32 observation: Q17 >>> 12, signed saturation.
);

// Intermediate flux quantities retain the existing S18Q15 bit cuts.
reg signed [17:0] Flux_Reluc_S18_Q15;
reg signed [17:0] Flux_S18_Q15;
reg signed [17:0] Flux15_S18_Q15;
reg signed [17:0] Flux15P_S18_Q15;
// reg signed [35:0] Torque_tmp_S35_Q17; // Previous declaration did not match S35.
reg signed [34:0] Torque_tmp_S35_Q17;

reg [5:0] Time_cnt;
reg [3:0] Task_No;
reg clk_10MHz = 1'b1;

// Hardware multiplier ports: both operands are S18.
reg  signed [17:0] mul_a1;
reg  signed [17:0] mul_b1;
wire signed [35:0] mul_result1;

// Hardware multiplier instantiation
mul_Te u_mul_18x18(
    .clk(clk_180MHz), 
    .a(mul_a1), 
    .b(mul_b1), 
    .p(mul_result1) 
);

always @(posedge clk_180MHz or negedge rst_n) begin
    if (!rst_n) begin
        Time_cnt               <= 6'd1;
        clk_10MHz              <= 1'b1;
        mul_a1                 <= 18'sd0;
        mul_b1                 <= 18'sd0;
        Flux_Reluc_S18_Q15     <= 18'sd0;
        Flux_S18_Q15           <= 18'sd0;
        Flux15_S18_Q15         <= 18'sd0;
        Flux15P_S18_Q15        <= 18'sd0;
        // Torque_tmp_S35_Q17 <= 36'sd0;
        Torque_tmp_S35_Q17     <= 35'sd0;
    end else begin
        // Status switching
        Time_cnt <= Time_cnt + 1'b1;

        // Time-multiplexed calculation
        case(Time_cnt)
            5'd1: begin
                // Flux_Reluc = (Ld - Lq) * id: S16Q12 (sign-extended to S18) * S18Q9 = S36Q21.
                mul_a1 <= I_d_S18_Q9;
                mul_b1 <= {{2{Ld_dash_Lq_S16_Q12[15]}}, Ld_dash_Lq_S16_Q12}; 
            end

            5'd3: begin
                Flux_Reluc_S18_Q15 <= {mul_result1[35], mul_result1[22:6]}; // Bing 20261009
            end
            
            5'd5: begin
                // Flux = Flux_Reluc + Phir_Half
                Flux_S18_Q15 <= Flux_Reluc_S18_Q15 + { {1{Phir_Half_S16_Q15[15]}}, Phir_Half_S16_Q15, 1'b0 }; // define  Flux_S18_Q15
            end

            5'd7: begin
                //Flux15 = (3/2) * Flux = Flux + (Flux >>> 1) 
                Flux15_S18_Q15 <= Flux_S18_Q15 + (Flux_S18_Q15 >>> 1); //define Flux15_S18_Q15 
            end
            
            5'd9: begin
                // Flux15P = Flux15 * p_n. 
                mul_a1 <= {{2{p_n_S16_Q0[15]}}, p_n_S16_Q0}; 
                mul_b1 <= Flux15_S18_Q15;
                clk_10MHz <= 1'b0;
            end
            
        
            5'd11: begin
                // Flux15P = Flux15 * p_n. 
                Flux15P_S18_Q15 <= {mul_result1[35], mul_result1[16:0]}; //define Flux15P_S18_Q15
            end

            5'd13: begin
                mul_a1 <=  I_q_S18_Q9; 
                mul_b1 <=  Flux15P_S18_Q15;
            end  

            5'd15: begin
                // Iq(Q9) * Flux15P(Q15) = Q24. Drop seven fractional bits
                // to obtain Q17, then sign-extend S29 to S35; no S35 overflow.
                // Previous left shift produced Q31 rather than Q17:
                // Torque_tmp_S35_Q17 <= {{1{mul_result1[27]}}, mul_result1[26:0], 7'b0};
                Torque_tmp_S35_Q17 <= {{6{mul_result1[35]}}, mul_result1[35:7]};
            end        

            5'd18: begin
                Time_cnt <= 5'd1;
                // Preserve the original output phase: one update per 18 clocks.
                clk_10MHz <= 1'b1;
            end
            
            default: begin
                // Normally will not occur
            end
        endcase
    end
end

always @(posedge clk_10MHz or negedge rst_n) begin
    if(!rst_n) begin
        Torque_Out_S35_Q17 <= 35'sd0;
        Torque_STM32_S16_Q5  <= 16'sd0;
    end
    else begin
        // Publish the same frame to both ports; use the temporary value here
        // because Torque_Out is assigned nonblocking on this same edge.
        Torque_Out_S35_Q17 <= Torque_tmp_S35_Q17; 
        //clamp for STM32 output
        if (Torque_tmp_S35_Q17[34:27] != {8{Torque_tmp_S35_Q17[27]}}) begin
            // Q17 -> Q5 keeps [27:12]. Detect S16 overflow before that cut.
            Torque_STM32_S16_Q5 <= Torque_tmp_S35_Q17[34] ? 16'sh8000 : 16'sh7fff;
        end else begin
            // Exact arithmetic right shift by 12, including negative values.
            Torque_STM32_S16_Q5 <= Torque_tmp_S35_Q17[27:12];
        end
    end
end

endmodule



// `timescale 1ns / 1ps
// //////////////////////////////////////////////////////////////////////////////////
// // Company: 
// // Engineer: Sunito
// // 
// // Create Date:    11:49:01 07/20/2026 
// // Design Name: 
// // Module Name:    Te_calc 
// // Project Name: 
// // Target Devices: 
// // Tool versions: 
// // Description: use park & clarke trans to attain dq axis current, then calc torque.
// // Dependencies: 
// // Module: Te_calc
// // Revision 0.10: schedule the shared STM32 directly with Time_cnt.
// // The original Task_No implementation is commented out below.
// //////////////////////////////////////////////////////////////////////////////////
// module Te_calc(
//     input                       clk_180MHz,
//     input                       rst_n,
//     input  signed       [17:0]  I_d_S18_Q9,
//     input  signed       [17:0]  I_q_S18_Q9,
//     input  signed       [15:0]  Ld_dash_Lq_S16_Q12,
//     input  signed       [15:0]  Phir_Half_S16_Q15, // Half of PM flux linkage.
//     input  signed       [15:0]  p_n_S16_Q0,
//     output reg signed   [34:0]  Torque_Out_S35_Q17
// );

// // Preserve the original Q9 quantization and low-bit overflow behavior.
// reg signed [17:0] Flux_Reluc_S18_Q9;
// reg signed [17:0] Flux_PM_S18_Q9;
// reg signed [17:0] Torq_Reluc_base_S18_Q9;
// reg signed [35:0] Torq_PM_S36_Q17;
// reg signed [35:0] Torq_Reluc_S36_Q17;
// wire signed [35:0] Torq_Sum_S36_Q17 = Torq_PM_S36_Q17 + Torq_Reluc_S36_Q17;
// reg signed [35:0] Torque_Out_tmp;

// reg [4:0] Time_cnt;
// reg clk_10MHz = 1'b1;
// reg signed [17:0] mul_a1;
// reg signed [17:0] mul_b1;
// // Signed 18x18 requires S36: [35:0] contains 36 bits, including the sign.
// // (-2^17) * (-2^17) = +2^34 cannot be represented in signed S35.
// // Fractional bits depend on the current operation: Q21, Q24, Q18 or Q9.
// wire signed [35:0] mul_result1_S36;

// // mul_Te.xco: signed 18x18, full output [35:0], pipestages=1.
// // The existing core uses one STM3248A1 (MREG=1); there is no LUT multiplier.
// mul_Te u_mul_18x18(
//     .clk(clk_180MHz),
//     .a(mul_a1),
//     .b(mul_b1),
//     .p(mul_result1_S36)
// );

// always @(posedge clk_180MHz or negedge rst_n) begin
//     if (!rst_n) begin
//         Time_cnt                 <= 5'd1;
//         clk_10MHz                <= 1'b1;
//         mul_a1                   <= 18'sd0;
//         mul_b1                   <= 18'sd0;
//         Flux_Reluc_S18_Q9         <= 18'sd0;
//         Flux_PM_S18_Q9            <= 18'sd0;
//         Torq_Reluc_base_S18_Q9    <= 18'sd0;
//         Torq_PM_S36_Q17           <= 36'sd0;
//         Torq_Reluc_S36_Q17        <= 36'sd0;
//         Torque_Out_tmp           <= 36'sd0;
//     end else begin
//         Time_cnt <= Time_cnt + 1'b1;
//         // Load operands at N. The IP registers the product at N+1.
//         // Because assignments are nonblocking, capture that product at N+2.
//         // Issue/capture pairs: 1/3, 4/6, 7/9, 10/12 and 13/15.
//         // Inputs must remain stable during the frame, as in the original RTL.
//         // Simulate 10MHz clock for multiplier.
//         case (Time_cnt)
//             5'd1: begin
//                 // MUL1: Q9 * Q12 = Q21.
//                 mul_a1 <= I_d_S18_Q9;
//                 mul_b1 <= {{2{Ld_dash_Lq_S16_Q12[15]}}, Ld_dash_Lq_S16_Q12};
//             end
//             5'd3: begin
//                 // Q21 -> Q9: drop 12 fractional bits, retaining S18.
//                 Flux_Reluc_S18_Q9 <= {mul_result1_S36[35], mul_result1_S36[28:12]};
//             end
//             5'd4: begin
//                 // MUL2: Q9 * Q15 = Q24. Double the half-flux in S18.
//                 mul_a1 <= I_q_S18_Q9;
//                 mul_b1 <= {Phir_Half_S16_Q15[15], Phir_Half_S16_Q15, 1'b0};
//             end
//             5'd6: begin
//                 // Q24 -> Q9: drop 15 fractional bits, retaining S18.
//                 Flux_PM_S18_Q9 <= {mul_result1_S36[35], mul_result1_S36[31:15]};
//             end
//             5'd7: begin
//                 // MUL3: Q9 * Q9 = Q18.
//                 mul_a1 <= I_q_S18_Q9;
//                 mul_b1 <= Flux_Reluc_S18_Q9;
//             end
//             5'd9: begin
//                 // Q18 -> Q9: drop 9 fractional bits, retaining S18.
//                 Torq_Reluc_base_S18_Q9 <= {mul_result1_S36[35], mul_result1_S36[25:9]};
//                 clk_10MHz <= 1'b0;
//             end
//             5'd10: begin
//                 // MUL4: Q0 * Q9 = Q9.
//                 mul_a1 <= {{2{p_n_S16_Q0[15]}}, p_n_S16_Q0};
//                 mul_b1 <= Flux_PM_S18_Q9;
//             end
//             5'd12: begin
//                 // Q9 -> Q17: place source [27:0] in destination [35:8].
//                 // Source bit [27] becomes destination sign bit [35]; [7:0] are zero.
//                 // Discard [35:28], retaining the original overflow wrap behavior.
//                 Torq_PM_S36_Q17 <= {mul_result1_S36[27:0], 8'b0};  // Torq_PM_S36_Q17 <= mul_result1_S36 << 8;
//             end
//             5'd13: begin
//                 // MUL5: Q0 * Q9 = Q9.
//                 mul_a1 <= {{2{p_n_S16_Q0[15]}}, p_n_S16_Q0};
//                 mul_b1 <= Torq_Reluc_base_S18_Q9;
//             end
//             5'd15: begin
//                 // Q9 -> Q17 with the same explicit 36-bit placement.
//                 // Source bit [27] becomes destination sign bit [35]; [7:0] are zero.
//                 Torq_Reluc_S36_Q17 <= {mul_result1_S36[27:0], 8'b0};  // Torq_Reluc_S36_Q17 <= mul_result1_S36 << 8;
//             end
//             5'd16: begin
//                 // MUL6 uses shift/add only: 1.5 * the signed Q17 sum.
//                 Torque_Out_tmp <= Torq_Sum_S36_Q17 + (Torq_Sum_S36_Q17 >>> 1);
//             end
//             5'd18: begin
//                 Time_cnt <= 5'd1;
//                 // Preserve the original output phase: one update per 18 clocks.
//                 clk_10MHz <= 1'b1;
//             end
//             default: begin
//                 // Counts 2/5/8/11/14 wait for the registered STM32 result.
//                 // Count 17 holds the completed torque before publication.
//             end
//         endcase
//     end
// end

// // Retain the original output clock and S35 truncation for this refactor.
// always @(posedge clk_10MHz or negedge rst_n) begin
//     if (!rst_n)
//         Torque_Out_S35_Q17 <= 35'sd0;
//     else
//         Torque_Out_S35_Q17 <= Torque_Out_tmp[34:0];
// end
// endmodule
