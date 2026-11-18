`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:37 01/29/2026 
// Design Name: 
// Module Name:    Capacitor 
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
module Capacitor(
input  		clk_180MHz,
input       [34:0]	I0_S35_Q25,
input			[34:0]	I1_S35_Q25, 				//�����з���36λ
input			[34:0]	I2_S35_Q25, 				
input			[34:0]	I3_S35_Q25,				
input			[34:0]	U1N_S35_Q17,			//�з���36λ��17λС��λ
input			[34:0]	U2N_S35_Q17,			//�з���36λ��17λС��λ
input			[34:0]	U3N_S35_Q17, 			//�з���36λ��17λС��λ
input       Junction_En,		    //���
input			[15:0]	I_OV_20xuF_Q18,		//�з���18λ 
input			[15:0]	Res_S16_Q12,			//�з���16λ, ��16 ����Ӧ��32768
input						rst_n, 					//reset

output	[34:0]	Volt1_Q17,
output	[34:0]	Volt2_Q17,
output	[34:0]	Volt3_Q17,

output	[15:0]   Volt1_L15,
output	[15:0]   Volt1_H15,
output	[15:0]   Volt2_L15,
output	[15:0]   Volt2_H15,
output	[15:0]   Volt3_L15,
output	[15:0]   Volt3_H15
    );
	
//�������������begin


reg signed	[52:0]  Temp1_S53=0;
reg signed	[52:0]  Temp2_S53=0;
reg signed	[52:0]  Temp3_S53=0;

reg signed	[34:0]  IAprev_S35_Q25=0;
reg signed	[34:0]  IBprev_S35_Q25=0;
reg signed	[34:0]  ICprev_S35_Q25=0;

reg signed	[52:0]	U1_temp_S53=0; 
reg signed	[52:0]	U2_temp_S53=0; 
reg signed	[52:0]	U3_temp_S53=0;

reg signed	[52:0]	x13_S53_Q43=0;
reg signed	[52:0]	x14_S53_Q43=0;
reg signed	[52:0]	x15_S53_Q43=0;

wire [34:0]	IA_S35_Q25; 
wire [34:0]	IB_S35_Q25; 
wire [34:0]	IC_S35_Q25; 

reg signed [52:0] Temp4_S53;
reg signed [52:0] Temp5_S53;
reg signed [52:0] Temp6_S53;

reg				[5:0]	Time_cnt =1;	
reg 				[3:0]	Task_No=0;
reg 				clk_10MHz=1'b1;
////////////////Ӳ���˷����ӿ�//////////////
reg 		signed	[17:0] 	mul_a1=0;
reg    signed   [34:0]   mul_b1=0;
wire 		signed	[52:0] 	mul_result1;
///////////////////////////////////////////////
parameter					IDLE	=	4'sd0;
parameter					MUL1	=	4'sd1;
parameter					MUL2	=	4'sd2;
parameter					MUL3	=	4'sd3;
parameter					MUL4 	=	4'sd4;
parameter					MUL5 	=	4'sd5;
parameter					MUL6 	=	4'sd6; 

//////call hardware multiplier 18x18////////
mul_for_cpctr By_SunY_18x35 ( 
  .clk(clk_180MHz), // input clk
  .a(mul_a1), // input [17 : 0] a
  .b(mul_b1), // input [17 : 0] b
  .p(mul_result1) // output [35 : 0] p
);

always@(posedge clk_180MHz)
	begin
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
	///////////�˷���ʱ����Begin///////////////
		case(Task_No)
			MUL1: 
			begin
				//RxI1_S35 = (Res_S16_Q12 * IA_S35_Q25)/16
				mul_a1 			<=	Res_S16_Q12;
				mul_b1 			<=	IA_S35_Q25;   //format changed to Q12
	         Temp1_S53 <= mul_result1;//{{6{x13_S53_Q43[52]}},x13_S53_Q43[52:6] } + mul_result1; 

			end
				
			MUL2:
			begin
				//RxI2_S35 = (Res_S16_Q12 * IB_S35_Q25)/16;
				mul_a1 			<=	Res_S16_Q12;
				mul_b1 			<=	IB_S35_Q25;
	         Temp2_S53 <=  mul_result1;//{{6{x14_S53_Q43[52]}},x14_S53_Q43[52:6] }  + mul_result1; 

			end
				
			MUL3:
			begin
				//RxI3_S35 = (Res_S16_Q12 * IC_S35_Q25)/16;
				mul_a1 			<=	Res_S16_Q12;
				mul_b1 			<=	IC_S35_Q25;
		     Temp3_S53 <= mul_result1;//{{6{x15_S53_Q43[52]}},x15_S53_Q43[52:6] }  + mul_result1;

			end
				
			MUL4:
			begin
				//U1_temp_S53 = IA_S35_Q25 * I_OV_20xuF_Q18;
				mul_a1			<=	I_OV_20xuF_Q18;
				mul_b1			<=	 IAprev_S35_Q25 + IA_S35_Q25 ;
				U1_temp_S53	<=	 mul_result1;//mul_result1>>>10; Q17
			end
				
			MUL5:
			begin
				//U2_temp_S53 = IB_S35_Q25 * I_OV_20xuF_Q18;
				mul_a1			<=	I_OV_20xuF_Q18;
				mul_b1			<=	IBprev_S35_Q25 + IB_S35_Q25 ;
				U2_temp_S53	<=	 mul_result1;			
			end
			MUL6:
			begin
				//U3_temp_S53 = IC_S35_Q25 * I_OV_20xuF_Q18;	
				mul_a1		<=	I_OV_20xuF_Q18;
				mul_b1 		<=	ICprev_S35_Q25 + IC_S35_Q25 ;
				U3_temp_S53	<=	 mul_result1;
			end
			default:									
			begin
				//enhance autorouting
			end
		endcase
	end
	///////////�˷���ʱ����End///////////////
always@(posedge clk_10MHz or negedge rst_n)
begin
	if(!rst_n)	begin 
		x13_S53_Q43  <=	0; 
		x14_S53_Q43	<=	0; 
		x15_S53_Q43	<=	0; 
	end
	///////////״̬����10MHz///////////////////
	else	begin        										
		x13_S53_Q43 			<=	x13_S53_Q43 + U1_temp_S53; //
		x14_S53_Q43 			<=	x14_S53_Q43 + U2_temp_S53;//	
		x15_S53_Q43 			<=	x15_S53_Q43 + U3_temp_S53;//
      IAprev_S35_Q25      <= IA_S35_Q25 ;
      IBprev_S35_Q25      <= IB_S35_Q25 ;
      ICprev_S35_Q25      <= IC_S35_Q25 ;
		  Temp4_S53 <= Temp1_S53 + {{6{x13_S53_Q43[52]}},x13_S53_Q43[52:6] };
  Temp5_S53 <= Temp2_S53 + {{6{x14_S53_Q43[52]}},x14_S53_Q43[52:6] };
  Temp6_S53 <= Temp3_S53 + {{6{x15_S53_Q43[52]}},x15_S53_Q43[52:6] };
	end

end

/*
assign  IA_S35_Q25 = I1_S35_Q25;    //new editted, direct assignment
assign  IB_S35_Q25 = I2_S35_Q25; 
assign  IC_S35_Q25 = I3_S35_Q25; 
*/

assign   IA_S35_Q25 = I1_S35_Q25 + I0_S35_Q25;   //with neutral point
assign	IB_S35_Q25 = I2_S35_Q25 + I0_S35_Q25;
assign	IC_S35_Q25 = I3_S35_Q25 + I0_S35_Q25;

/*
assign  IA_S35_Q25=(Junction_En)?(0- I2_S35_Q25 -I3_S35_Q25):I1_S35_Q25;    //earlier one
assign  IB_S35_Q25=(Junction_En)?(0 -I1_S35_Q25 -I3_S35_Q25):I2_S35_Q25; 
assign  IC_S35_Q25=(Junction_En)?(0 -I1_S35_Q25 -I2_S35_Q25):I3_S35_Q25;
*/ 

//I0 = (I1_S35_Q25 + I2_S35_Q25 + I3_S35_Q25)/3;  calculate I0 use external module with hardware multplier
assign   Volt1_Q17 	= {{2{Temp4_S53[52]}},Temp4_S53[52:20] } + U1N_S35_Q17; 
assign   Volt2_Q17 	= {{2{Temp5_S53[52]}},Temp5_S53[52:20] } + U2N_S35_Q17;
assign   Volt3_Q17 	= {{2{Temp6_S53[52]}},Temp6_S53[52:20] }  + U3N_S35_Q17; 

assign             Volt1_L15           =      {Volt1_Q17[34],Volt1_Q17[14:0]};    
assign             Volt1_H15           =     {Volt1_Q17[34],Volt1_Q17[29:15]}; //2 parameters synthesized in STM32 with float format

assign             Volt2_L15           =      {Volt2_Q17[34],Volt2_Q17[14:0]};    
assign             Volt2_H15           =     {Volt2_Q17[34],Volt2_Q17[29:15]}; //2 parameters synthesized in STM32 with float format	

assign             Volt3_L15           =      {Volt3_Q17[34],Volt3_Q17[14:0]};    
assign             Volt3_H15           =     {Volt3_Q17[34],Volt3_Q17[29:15]}; //2 parameters synthesized in STM32 with float format	

endmodule