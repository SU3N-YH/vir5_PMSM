// [2026-11-10 16:00 CST] D/E copy of verified Inductor.v; original A/B/C file unchanged.
// A -> D/4, B -> E/5. Third-phase source remains commented.
// 18 clocks per frame and all active arithmetic/capture slots are retained.
`timescale 1ns / 1ps
// //////////////////////////////////////////////////////////////////////////////////
// // Company: 
// // Engineer: Sunito SUEN
// // 
// // Create Date:    15:21:41 12/02/2025 
// // Design Name: 
// // Module Name:    Inductor 
// // Project Name: 
// // Target Devices: Xilinx Spartan-6 
// // Tool versions: ISE 14.7
// // Description:   Motor control inductor physical model evaluation, 3 phase current calculation.
// // Dependencies: 
// //
// // Revision: 
// // Revision 0.02 - Pipeline latency synchronization & X-state propagation fixed
// // Additional Comments: All comments in coding procedure outputted in English
// //
// //////////////////////////////////////////////////////////////////////////////////
module Inductor_DE(
input  						clk_180MHz,
input			[34:0]	UDO_P_S35, 				
input			[34:0]	UEO_P_S35, 				
// [2026-11-10 16:00 CST] Unused third phase disabled.
// input			[34:0]	UCO_P_S35,
input			[34:0]	UDO_N_S35,			
input			[34:0]	UEO_N_S35,			
// [2026-11-10 16:00 CST] Unused third phase disabled.
// input			[34:0]	UCO_N_S35,
input			[34:0]	bEMF_D_S35_Q17,	
input			[34:0]	bEMF_E_S35_Q17,
// [2026-11-10 16:00 CST] Unused third phase disabled.
// input			[34:0]	bEMF_C_S35_Q17,
input			[15:0]	I_OV_20LinuH_Q18,		//SelfL-max=13.1072mH, SelfL-min=0.4uH, 
input			[15:0]	Res_S16_Q12,		
input						rst_n, 					//reset
output wire signed [34:0]  x_4, //Q25
output wire signed [34:0]  x_5
    );
// [2026-11-16 20:00 CST] Reuse the pipelined engine with the independent D/E IP.
Inductor #(.USE_DE_CORE(1)) engine (
    .clk_180MHz(clk_180MHz), .rst_n(rst_n),
    .UAO_P_S35(UDO_P_S35), .UBO_P_S35(UEO_P_S35), .UCO_P_S35(35'd0),
    .UAO_N_S35(UDO_N_S35), .UBO_N_S35(UEO_N_S35), .UCO_N_S35(35'd0),
    .bEMF_A_S35_Q17(bEMF_D_S35_Q17), .bEMF_B_S35_Q17(bEMF_E_S35_Q17),
    .bEMF_C_S35_Q17(35'd0), .I_OV_20LinuH_Q18(I_OV_20LinuH_Q18),
    .Res_S16_Q12(Res_S16_Q12), 
    .x_1(x_4), 
    .x_2(x_5), 
    .x_3()
);
endmodule
