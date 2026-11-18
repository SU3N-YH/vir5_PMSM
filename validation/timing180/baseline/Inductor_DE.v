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
output	reg signed [34:0]  x_4, //Q25
output	reg signed [34:0]  x_5,
// [2026-11-10 16:00 CST] Unused third phase disabled.
// output	reg signed [34:0]  x_3,
output	[15:0]  Curt4_L15,   // Curt Q21
output	[15:0]  Curt4_H15,
output	[15:0]  Curt5_L15,
// [2026-11-10 16:00 CST] Last active output has no trailing comma.
// output	[15:0]  Curt5_H15,
output	[15:0]  Curt5_H15
// [2026-11-10 16:00 CST] Unused third phase disabled.
// output	[15:0]  Curt3_L15,
// [2026-11-10 16:00 CST] Unused third phase disabled.
// output	[15:0]  Curt3_H15
    );
	
//parameters & variables defination begin

reg signed	[52:0]  x_16=0;
reg signed	[52:0]  x_17=0;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// reg signed	[52:0]  x_15=0;

reg signed	[34:0]  emfL04_S35=0;  //EMF of inductor L1
reg signed	[34:0]  emfL05_S35=0;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// reg signed	[34:0]  emfL03_S35=0;

reg signed	[34:0]  emfL4_S35=0;  //EMF of inductor L1
reg signed	[34:0]  emfL5_S35=0;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// reg signed	[34:0]  emfL3_S35=0;

reg signed	[34:0]  RxI4_S35=0;
reg signed	[34:0]  RxI5_S35=0;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// reg signed	[34:0]  RxI3_S35=0;

reg signed	[52:0]	 I4_temp_S35=0;
reg signed	[52:0]	 I5_temp_S35=0;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// reg signed	[52:0]	 I3_temp_S35=0;


reg		signed [5:0]	Time_cnt = 1; 
reg   		[3:0]  SampWin_num=0;	

reg 		signed [3:0]	Task_No=1; //start from MUL1 (1), Time_cnt=1
reg 	clk_10MHz=1'b1;

//////////////hardware multiplier port//////////////
reg 	signed	[17:0] 	mul_a1 = 0; 
reg 	signed	[34:0]  mul_b1 = 0; 
wire 	signed	[52:0] 	mul_result1;

///////////////////////////////////////////////
parameter					IDLE	=	4'sd0;
parameter					MUL1	=	4'sd1;
parameter					MUL2	=	4'sd2;
parameter					MUL3	=	4'sd3;
parameter					MUL4 	=	4'sd4;
parameter					MUL5 	=	4'sd5;
parameter					MUL6 	=	4'sd6;

//parameters & variables defination end

//hardware multiplier call
// [2026-11-10 16:00 CST] Original multiplier selection.
// mul18x35_1225_BySunY u_mul_inductor(
mul_inductor_2 u_mul_inductor(   
  .clk(clk_180MHz), // input clk
  .a(mul_a1), // input [17 : 0] a
  .b(mul_b1), // input [34 : 0] b
  .p(mul_result1) // output [52 : 0] p
);

always@(posedge clk_180MHz) //negedge rst_n has been removed to avoid metastability
begin
	//if(!rst_n)begin
		//Time_cnt<=0;
		//Task_No <= MUL1;
	//end
	//else
	//begin //associated 'end' moved down

	//status switching
		
		Time_cnt<=Time_cnt+1'b1;   //count start from 1, Time_cnt=0 should be avoided to prevent X-state propagation
		if(Time_cnt==18|| Time_cnt==1|| Time_cnt==2)  begin  
			Task_No<=MUL1;
			clk_10MHz<=1'b1;
		end
		if(Time_cnt==3 || Time_cnt==4|| Time_cnt==5)	begin
			Task_No<=MUL2;
			clk_10MHz<=1'b1;
		end
		if(Time_cnt==6 || Time_cnt==7|| Time_cnt==8)	begin
			Task_No<=MUL3;
			clk_10MHz<=1'b1;
		end
		if(Time_cnt==9 || Time_cnt==10|| Time_cnt==11)	begin
			Task_No<=MUL4;
			clk_10MHz<=1'b0;
		end
		if(Time_cnt==12 || Time_cnt==13|| Time_cnt==14)	begin
			Task_No<=MUL5;
			clk_10MHz<=1'b0;
		end
		if(Time_cnt==15 || Time_cnt==16|| Time_cnt==17)	begin
			Task_No<=MUL6;
			clk_10MHz<=1'b0;
		end
		if(Time_cnt==18) begin
			Time_cnt<=1;
			//Task_No<=MUL1;
			//clk_10MHz<=1'b1;
		end
		
	///////////TDM Begin///////////////
		case(Task_No)
			MUL1: 
			begin
				//RxI1_S36 = (Res_S16_Q12 * x(13))>>>12
				mul_a1 			<=	Res_S16_Q12; 
				mul_b1 			<=	x_4;
                emfL4_S35       <=   emfL04_S35;
			end
				
			MUL2:
			begin
				//RxI2_S36 = (Res_S16_Q12 * x(14))>>>12;
				mul_a1 			<=	Res_S16_Q12; 
				mul_b1 			<=	x_5;
                emfL5_S35       <=   emfL05_S35;	
			end
// [2026-11-10 16:00 CST] Unused third-phase task; timing slot retained.
// 				
// 			MUL3:
// 			begin
// 				//RxI3_S36 = (Res_S16_Q12 * x(15))>>>12;
// 				mul_a1 			<=	Res_S16_Q12; 
// 				mul_b1 			<=	x_3;
//                 emfL3_S35       <=   emfL03_S35;
// 			end

				
			MUL4:
			begin
				//I4_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				mul_a1			<= I_OV_20LinuH_Q18; 
				mul_b1			<=	emfL04_S35 +emfL4_S35;
                emfL04_S35     <=	UDO_P_S35 - UDO_N_S35 - RxI4_S35 - bEMF_D_S35_Q17;
			end
				
			MUL5:
			begin
				// I5_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				mul_a1			<=	I_OV_20LinuH_Q18 ;
				mul_b1			<=	emfL05_S35 + emfL5_S35;
                emfL05_S35     <=	UEO_P_S35 - UEO_N_S35 - RxI5_S35 - bEMF_E_S35_Q17;				
			end
// [2026-11-10 16:00 CST] Unused third-phase task; timing slot retained.
// 			MUL6:
// 			begin
// 				//I3_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;	
// 				mul_a1			<=	I_OV_20LinuH_Q18 ; 
// 				mul_b1			<=	emfL03_S35 + emfL3_S35;
//                 emfL03_S35     <=	UCO_P_S35 - UCO_N_S35 - RxI3_S35 - bEMF_C_S35_Q17;
// 			end


			default:									
			begin
				//normally will not occur
			end
		endcase

	/////////// Pipeline Latency Compensation Logic ///////////////
	// Spartan-6 IP core has a 2-cycle latency. 
	// Data fed during Time_cnt N will be valid and captured safely at Time_cnt N+3.
	if (Time_cnt == 4)  RxI4_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
	if (Time_cnt == 7)  RxI5_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
// [2026-11-10 16:00 CST] Unused third phase disabled.
// 	if (Time_cnt == 10) RxI3_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
	if (Time_cnt == 13) I4_temp_S35 <= mul_result1;
	if (Time_cnt == 16) I5_temp_S35 <= mul_result1;
// [2026-11-10 16:00 CST] Unused third phase disabled.
// 	if (Time_cnt == 1)  I3_temp_S35 <= mul_result1;

end

always@(posedge clk_10MHz)  //negedge rst_n has been removed to avoid metastability
begin
	if(!rst_n)	begin
		x_16	<=	0; 
		x_17	<=	0; 
// [2026-11-10 16:00 CST] Unused third phase disabled.
// 		x_15	<=	0;
	end
	///////////clock in 10MHz/////////////////// Lmin 0.8uH and Lmax=26214.4uH, x_4=IQ9-36bit 
	else	begin
		x_16 			<=	x_16 + I4_temp_S35;
		x_17 			<=	x_17 + I5_temp_S35;	
// [2026-11-10 16:00 CST] Unused third phase disabled.
// 		x_15 			<=	x_15 + I3_temp_S35;
	end
   x_4 			<=	{x_16[52],x_16[43:10]};   //Q25
   x_5			<=	{x_17[52],x_17[43:10]};  	
// [2026-11-10 16:00 CST] Unused third phase disabled.
//    x_3 			<=	{x_15[52],x_15[43:10]};
end
assign             Curt4_L15           =    {x_4[34],x_4[18:4]};    
assign             Curt4_H15           =     x_4[34:19];    //2 parameters synthesized in STM32 with float format
assign             Curt5_L15           =    {x_5[34],x_5[18:4]};    
assign             Curt5_H15           =     x_5[34:19];  //2 parameters synthesized in STM32 with float format
// [2026-11-10 16:00 CST] Unused third phase disabled.
// assign             Curt3_L15           =      {x_3[34],x_3[18:4]};
// [2026-11-10 16:00 CST] Unused third phase disabled.
// assign             Curt3_H15           =     x_3[34:19];  //2 parameters synthesized in STM32 with float format

endmodule
