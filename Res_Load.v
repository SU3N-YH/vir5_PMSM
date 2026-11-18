`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:09:35 02/01/2026 
// Design Name: 
// Module Name:    Res_Load 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Res_Load(
input  						clk_180MHz,
input			[34:0]	UAO_P_S35, 				
input			[34:0]	UBO_P_S35, 				
input			[34:0]	UCO_P_S35,				
input			[34:0]	UACap_N_S35,			
input			[34:0]	UBCap_N_S35,			
input			[34:0]	UCCap_N_S35, 			
input			[15:0]	I_OV_20LinuH_Q18,		//SelfL-max=52.4288mH, SelfL-min=1.6uH, 
input			[15:0]	Res_S16_Q12,		
input						rst_n, 					//reset
output	reg signed [34:0]  x_1, //Q25
output	reg signed [34:0]  x_2,
output	reg signed [34:0]  x_3,
output	[15:0]  Curt1_L15,   // Curt Q21
output	[15:0]  Curt1_H15,
output	[15:0]  Curt2_L15,
output	[15:0]  Curt2_H15,
output	[15:0]  Curt3_L15,
output	[15:0]  Curt3_H15
    );
	
//parameters & variables defination begin

reg signed	[52:0]  x_13=0;
reg signed	[52:0]  x_14=0;
reg signed	[52:0]  x_15=0;

reg signed	[34:0]  emfL01_S35=0;  //EMF of inductor L1
reg signed	[34:0]  emfL02_S35=0;
reg signed	[34:0]  emfL03_S35=0; 

reg signed	[34:0]  emfL1_S35=0;  //EMF of inductor L1
reg signed	[34:0]  emfL2_S35=0;
reg signed	[34:0]  emfL3_S35=0; 

reg signed	[34:0]  RxI1_S35=0;
reg signed	[34:0]  RxI2_S35=0;
reg signed	[34:0]  RxI3_S35=0;

reg signed	[52:0]	 I1_temp_S35=0;
reg signed	[52:0]	 I2_temp_S35=0;
reg signed	[52:0]	 I3_temp_S35=0;


reg		signed [5:0]	Time_cnt = 1; 
reg   		[3:0]  SampWin_num=0;	
reg 		signed [3:0]	Task_No=0;
reg 						clk_10MHz=1'b1;

//////////////hardware multiplier port//////////////
reg 		signed	[17:0] 	mul_a1;
reg 		signed	[34:0]       mul_b1;
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
mul18x35_0201 mul_4_Res_load(   //change the name of multiplier
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
		
		Time_cnt<=Time_cnt+1'b1;
		if(Time_cnt==18|| Time_cnt==1|| Time_cnt==2)  begin  //Time_cnt==0 || 
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
		
	///////////涔樻硶鍒嗘椂璁＄畻Begin///////////////
		case(Task_No)
			MUL1: 
			begin
				//RxI1_S36 = (Res_S16_Q12 * x(13))>>>12
				mul_a1 			<=	Res_S16_Q12; 
				mul_b1 			<=	x_1;
				RxI1_S35	<=	{{2{mul_result1[52]}}, mul_result1[52:20]}; 
                                emfL1_S35       <=   emfL01_S35;
			end
				
			MUL2:
			begin
				//RxI2_S36 = (Res_S16_Q12 * x(14))>>>12;
				//mul_a1 			<=	Res_S16_Q12;
				mul_b1 			<=	x_2;
				RxI2_S35	<=	{{2{mul_result1[52]}}, mul_result1[52:20]}; 
                               emfL2_S35       <=   emfL02_S35;	
			end
				
			MUL3:
			begin
				//RxI3_S36 = (Res_S16_Q12 * x(15))>>>12;
				//mul_a1 			<=	Res_S16_Q12;
				mul_b1 			<=	x_3;
				RxI3_S35	<=	{{2{mul_result1[52]}}, mul_result1[52:20]}; 
                               emfL3_S35       <=   emfL03_S35;
			end
				
			MUL4:
			begin
				//I1_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				mul_a1			<= I_OV_20LinuH_Q18; 
				mul_b1			<=	emfL01_S35 +emfL1_S35;
				I1_temp_S35	<=	 mul_result1;//{{2{mul_result1[52]}}, mul_result1[52:20]};
                                emfL01_S35     <=	UAO_P_S35-UACap_N_S35- RxI1_S35;
			end
				
			MUL5:
			begin
				// I2_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				//mul_a1			<=	I_OV_20LinuH_Q18 ;
				mul_b1			<=	emfL02_S35 + emfL2_S35;
				I2_temp_S35	<= mul_result1;//{{2{mul_result1[52]}}, mul_result1[52:20]};
                               emfL02_S35     <=	UBO_P_S35- UBCap_N_S35- RxI2_S35;				
			end
			MUL6:
			begin
				//I3_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;	
				//mul_a1			<=	I_OV_20LinuH_Q18 ;
				mul_b1			<=	emfL03_S35 + emfL3_S35;
				I3_temp_S35	<=	mul_result1;//{{2{mul_result1[52]}}, mul_result1[52:20]};
                                emfL03_S35     <=	UCO_P_S35- UCCap_N_S35- RxI3_S35;
			end

			default:									
			begin
				//normally will not occur
			end
		endcase
	///////////涔樻硶鍒嗘椂璁＄畻End///////////////

end

always@(posedge clk_10MHz)  //negedge rst_n has been removed to avoid metastability
begin
	if(!rst_n)	begin
		x_13	<=	0; 
		x_14	<=	0; 
		x_15	<=	0; 
	end
	///////////鐘舵€佹洿锟10MHz/////////////////// Lmin 0.8uH and Lmax=26214.4uH, x_1=IQ9-36bit 
	else	begin
		x_13 			<=	x_13 + I1_temp_S35;
		x_14 			<=	x_14 + I2_temp_S35;	
		x_15 			<=	x_15 + I3_temp_S35;
	end
   x_1 			<=	{x_13[52],x_13[43:10]};   //Q25
   x_2			<=	{x_14[52],x_14[43:10]};  	
   x_3 			<=	{x_15[52],x_15[43:10]};  
end
assign             Curt1_L15           =    {x_1[34],x_1[18:4]};    
assign             Curt1_H15           =     x_1[34:19];    //2 parameters synthesized in STM32 with float format

assign             Curt2_L15           =    {x_2[34],x_2[18:4]};    
assign             Curt2_H15           =     x_2[34:19];  //2 parameters synthesized in STM32 with float format

assign             Curt3_L15           =      {x_3[34],x_3[18:4]};    
assign             Curt3_H15           =     x_3[34:19];  //2 parameters synthesized in STM32 with float format

endmodule