`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:36 01/30/2026 
// Design Name: 
// Module Name:    External_MUL 
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
module External_MUL(
input  		clk_180MHz,
input			[34:0]	I1_S35_Q25, 				//�����з���36λ
input			[34:0]	I2_S35_Q25, 				
input			[34:0]	I3_S35_Q25,	
input			[34:0]	I4_S35_Q25,	
input			[34:0]	I5_S35_Q25,	
input			[34:0]	I6_S35_Q25,	
input			[34:0]	I7_S35_Q25,	
input			[34:0]	I8_S35_Q25,	
input			[34:0]	I9_S35_Q25,	
input			[34:0]	I10_S35_Q25,	
input			[34:0]	I11_S35_Q25,	
input			[34:0]	I12_S35_Q25,
input			[34:0]	I13_S35_Q25,	
input			[34:0]	I14_S35_Q25,	
input			[34:0]	I15_S35_Q25,
	
output     reg [34:0]   I123_S35_Q25,
output     reg [34:0]   I456_S35_Q25,
output     reg [34:0]   I789_S35_Q25,
output     reg [34:0]   IABC_S35_Q25,
output     reg [34:0]   IDEF_S35_Q25
    );

reg				[5:0]	Time_cnt =1;	
reg 				[3:0]	Task_No=0;
reg 				clk_10MHz=1'b1;

wire [52:0]  I_temp1;
wire [52:0]  I_temp2;
wire [52:0]  I_temp3;
wire [52:0]  I_temp4;
wire [52:0]  I_temp5;

assign  I_temp1= I1_S35_Q25 + I2_S35_Q25 + I3_S35_Q25;
assign  I_temp2= I4_S35_Q25 + I5_S35_Q25 + I6_S35_Q25;
assign  I_temp3= I7_S35_Q25 + I8_S35_Q25 + I9_S35_Q25;
assign  I_temp4= I10_S35_Q25 + I11_S35_Q25 + I12_S35_Q25;
assign  I_temp5= I13_S35_Q25 + I14_S35_Q25 + I15_S35_Q25;
////////////////Ӳ���˷����ӿ�//////////////
reg 		signed	[17:0] 	mul_a1=0;
reg      signed   [34:0]   mul_b1=0;
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
Xt_multi By_SunY_18x35( 
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
				mul_a1 			<=	10923;  //equals to 32768/3
				mul_b1 			<=	I_temp1;   
	         I123_S35_Q25 <= {{mul_result1[52]},mul_result1[47:14]};
			end
				
			MUL2:
			begin
				mul_a1 			<=	10923;
				mul_b1 			<=	I_temp2;
	         I456_S35_Q25 <= {{mul_result1[52]},mul_result1[47:14]};
			end
				
			MUL3:
			begin
				//RxI3_S35 = (Res_S16_Q12 * IC_S35_Q25)/16;
				mul_a1 			<=	10923;
				mul_b1 			<=	I_temp3;
		    I789_S35_Q25 <= {{mul_result1[52]},mul_result1[47:14]};
			end
				
			MUL4:
			begin
				///
			end
				
			MUL5:
			begin
				//
			end
			MUL6:
			begin
				//
			end
			default:									
			begin
				//enhance autorouting
			end
		endcase
	end
endmodule