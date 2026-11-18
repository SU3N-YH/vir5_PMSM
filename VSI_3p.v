`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// This is the new one
// Engineer: 
// 
// Create Date:    19:38:13 12/02/2025 
// Design Name: 
// Module Name:    VSI_3p 
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
module VSI_3p(
input 						clk_300MHz,
input 						rst_n,
input 						S1,
input 						S2,
input 						S3,
input 						S4,
input 						S5,
input 						S6,
input		signed	[17:0]	Ia_S18_Q9,
input		signed	[17:0]	Ib_S18_Q9,
input		signed	[17:0]	Ic_S18_Q9,
input		signed	[15:0]	Udc_S16_Q5,
input		signed	[15:0]	Rd_S16_Q15,
input		signed	[15:0]	Vd_S16_Q15,

output reg	signed	[35:0]	UAO_S36_Q17,
output reg	signed	[35:0]	UBO_S36_Q17,
output reg	signed	[35:0]	UCO_S36_Q17,
output reg signed 	[15:0]	x_4,
output reg signed 	[15:0]	x_5,
output reg signed 	[15:0]	x_6,
output reg signed 	[15:0]	x_7

    );

//参数与变量定义begin
wire	signed	[17:0]	UdcOver2_S36_Q17;
wire	signed	[17:0]	Vd_S18_Q17;
reg		signed	[17:0]	IQ1_S18_Q9	=18'sd0;
reg		signed	[17:0]	IQ3_S18_Q9	=18'sd0;
reg		signed	[17:0]	IQ5_S18_Q9	=18'sd0;
reg		signed	[17:0]	IQ2_S18_Q9	=18'sd0;
reg		signed	[17:0]	IQ4_S18_Q9	=18'sd0;
reg		signed	[17:0]	IQ6_S18_Q9	=18'sd0;
reg		signed	[35:0]	Volt_On_Switch12_S36_Q17=36'sd0;
reg		signed	[35:0]	Volt_On_Switch34_S36_Q17=36'sd0;
reg		signed	[35:0]	Volt_On_Switch56_S36_Q17=36'sd0;
wire	signed	[35:0]	VoltOnT_Short_S36_Q17;
reg 	signed 	[15:0]	x_8=16'sd0;
reg 	signed 	[15:0]	x_9=16'sd0;
reg 	signed 	[15:0]	x_10=16'sd0;

	//分时复用硬件乘法器接口
reg					[4:0]	Time_cnt = 5'b00000;	
reg 				[2:0]	Task_No=0;	
reg 		signed	[17:0] 	mul_a1, mul_b1;
wire 		signed	[35:0] 	mul_result1;
//parameter					IDLE	=	3'd0;
//parameter					UPDATA	=	3'd4;
parameter					MUL1	=	3'd1;
parameter					MUL2	=	3'd2;
parameter					MUL3	=	3'd3;
//参数与定义end


assign UdcOver2_S36_Q17 		=	Udc_S16_Q5<<<11;	//UdcOver2_S36_Q17 = Udc_S16_Q5*2048;
assign Vd_S18_Q17 				=	Vd_S16_Q15<<<2;		//Vd_S18_Q17 = Vd_S16_Q15*4;				
assign VoltOnT_Short_S36_Q17	=	Rd_S16_Q15<<<2;		//VoltOnT_Short_S36_Q17 = Rd_S16_Q15*4

//调用硬件乘法器
mul18x18_2 u_mul2 (
  .clk(clk_300MHz), // input clk
  .a(mul_a1), // input [17 : 0] a
  .b(mul_b1), // input [17 : 0] b
  .p(mul_result1) // output [35 : 0] p
);


always@(posedge clk_300MHz or negedge rst_n)
begin
	if(!rst_n)
	begin
		Time_cnt<=0;
		Task_No <= MUL1;
		UAO_S36_Q17 <= 36'sd0;
		UBO_S36_Q17 <= 36'sd0;
		UCO_S36_Q17 <= 36'sd0;
		IQ1_S18_Q9 	<= 18'sd0;
		IQ3_S18_Q9 	<= 18'sd0;
		IQ5_S18_Q9 	<= 18'sd0;
		IQ2_S18_Q9 	<= 18'sd0;
		IQ4_S18_Q9 	<= 18'sd0;
		IQ6_S18_Q9 	<= 18'sd0;
	end
	else begin
		Time_cnt<=Time_cnt+1'b1;
		if(Time_cnt<9) 			begin
			Task_No<=MUL1;
		end
		else if(Time_cnt<19)	begin
			Task_No<=MUL2;
		end
		else if(Time_cnt<29)	begin
			Task_No<=MUL3;
		end
		else					begin
			Time_cnt<=0;
			Task_No<=MUL1;
		end
		
	///////////乘法分时计算Begin///////////////
		case(Task_No)
			MUL1: 
			begin
				//Volt_On_Switch12_S36_Q17     =  (Rd_S16_Q15 * Ia_S18_Q9)/128;
				mul_a1						<=	Rd_S16_Q15;
				mul_b1						<=	Ia_S18_Q9;
				if(Time_cnt==8)
					Volt_On_Switch12_S36_Q17	<=	mul_result1>>>7;
				else
					Volt_On_Switch12_S36_Q17	<=	Volt_On_Switch12_S36_Q17;
			end
			
			MUL2:
			begin
				//Volt_On_Switch34_S36_Q17     =  (Rd_S16_Q15 * Ib_S18_Q9)/128;	
				mul_a1						<=	Rd_S16_Q15;
				mul_b1						<=	Ib_S18_Q9;
				if(Time_cnt==18)
					Volt_On_Switch34_S36_Q17	<=	mul_result1>>>7;
				else
					Volt_On_Switch34_S36_Q17	<=	Volt_On_Switch34_S36_Q17;	
			end
			
			MUL3:
			begin
				//Volt_On_Switch56_S36_Q17     =  (Rd_S16_Q15 * Ic_S18_Q9)/128;
				mul_a1						<=	Rd_S16_Q15;
				mul_b1						<=	Ic_S18_Q9;
				if(Time_cnt==28)
					Volt_On_Switch56_S36_Q17	<=	mul_result1>>>7;
				else
					Volt_On_Switch56_S36_Q17 	<=Volt_On_Switch56_S36_Q17;
			end
			default:
			begin
				//正常情况下，不会出现这种情况
				// Volt_On_Switch12_S36_Q17<=0;
				// Volt_On_Switch34_S36_Q17<=0;
				// Volt_On_Switch56_S36_Q17<=0;
			end
		endcase
	///////////乘法分时计算End///////////////
	
	///////////状态更新——10MHz///////////////////
		if(Time_cnt==29)
		begin
		//A相桥臂建模
			case ({S1, S2})
				2'b10: 
				begin  // S1=1, S2=0
					IQ1_S18_Q9 <= Ia_S18_Q9;
					IQ2_S18_Q9 <= 18'sd0;
					UAO_S36_Q17 <= -Volt_On_Switch12_S36_Q17 + UdcOver2_S36_Q17;
				end
				
				2'b01: 
				begin  // S1=0, S2=1
					IQ1_S18_Q9 <= 18'sd0;
					IQ2_S18_Q9 <= -Ia_S18_Q9;
					UAO_S36_Q17 <= -Volt_On_Switch12_S36_Q17 - UdcOver2_S36_Q17;
				end
				2'b00: 
				begin  // S1=0, S2=0
					if (Ia_S18_Q9 >= 18'sd0) begin
						IQ1_S18_Q9 <= 18'sd0;
						IQ2_S18_Q9 <= -Ia_S18_Q9;
						UAO_S36_Q17 <= -UdcOver2_S36_Q17 - Vd_S18_Q17;
					end 
					else begin
						IQ1_S18_Q9 <= Ia_S18_Q9;
						IQ2_S18_Q9 <= 18'sd0;
						UAO_S36_Q17 <= UdcOver2_S36_Q17 + Vd_S18_Q17;
					end
				end
				2'b11: 
				begin  // S1=1, S2=1
					IQ1_S18_Q9 <=18'sd32768;
					IQ2_S18_Q9 <= 18'sd32768;
					UAO_S36_Q17 <= VoltOnT_Short_S36_Q17 - UdcOver2_S36_Q17;
				end
				default: begin
					//IQ1_S18_Q9 <= 18'sd0;
					//IQ2_S18_Q9 <= 18'sd0;
					//UAO_S36_Q17 <= 36'sd0;
				end
			endcase

		//B相桥臂建模
			case ({S3, S4})
			2'b10: 
			begin  // S3=1, S4=0
				IQ3_S18_Q9 <= Ib_S18_Q9;
				IQ4_S18_Q9 <= 0;
				UBO_S36_Q17 <= -Volt_On_Switch34_S36_Q17 + UdcOver2_S36_Q17;
			end
			2'b01: 
			begin  // S3=0, S4=1
				IQ3_S18_Q9 <= 0;
				IQ4_S18_Q9 <= -Ib_S18_Q9;
				UBO_S36_Q17 <= -Volt_On_Switch34_S36_Q17 - UdcOver2_S36_Q17;
			end
			2'b00: 
			begin  // S3=0, S4=0
				if (Ib_S18_Q9 >= 18'sd0) begin
					IQ3_S18_Q9 <= 0;
					IQ4_S18_Q9 <= -Ib_S18_Q9;
					UBO_S36_Q17 <= - UdcOver2_S36_Q17 - Vd_S18_Q17;
				end 
				else begin
					IQ3_S18_Q9 <= Ib_S18_Q9;
					IQ4_S18_Q9 <= 0;
					UBO_S36_Q17 <= UdcOver2_S36_Q17 + Vd_S18_Q17;
				end
			end
			2'b11: 
			begin  // S3=1, S4=1
				IQ3_S18_Q9 <= 32768;
				IQ4_S18_Q9 <= 32768;
				UBO_S36_Q17 <= VoltOnT_Short_S36_Q17 - UdcOver2_S36_Q17;
			end
			default: begin
				//IQ3_S18_Q9 <= 18'sd0;
				//IQ4_S18_Q9 <= 18'sd0;
				//UBO_S36_Q17 <= 36'sd0;
			end
			endcase

		//C相桥臂建模
			case ({S5, S6})
				2'b10: 
				begin  // S5=1, S6=0
					IQ5_S18_Q9 <= Ic_S18_Q9;
					IQ6_S18_Q9 <= 0;
					UCO_S36_Q17 <= -Volt_On_Switch56_S36_Q17 + UdcOver2_S36_Q17;
				end
				2'b01: 
				begin  // S5=0, S6=1
					IQ5_S18_Q9 <= 0;
					IQ6_S18_Q9 <= -Ic_S18_Q9;
					UCO_S36_Q17 <= Volt_On_Switch56_S36_Q17 - UdcOver2_S36_Q17;
				end
				2'b00: 
				begin  // S5=0, S6=0
					if (Ic_S18_Q9 >= 18'sd0) begin
						IQ5_S18_Q9 <= 0;
						IQ6_S18_Q9 <= -Ic_S18_Q9;
						UCO_S36_Q17 <= - UdcOver2_S36_Q17 - Vd_S18_Q17;
					end 
					else begin
						IQ5_S18_Q9 <= Ic_S18_Q9;
						IQ6_S18_Q9 <= 0;
						UCO_S36_Q17 <=	UdcOver2_S36_Q17 + Vd_S18_Q17;
					end
				end
				2'b11: 
				begin  // S5=1, S6=1
					IQ5_S18_Q9 <= 32768;
					IQ6_S18_Q9 <= 32768;
					UCO_S36_Q17 <= VoltOnT_Short_S36_Q17 - UdcOver2_S36_Q17;
				end
				default: begin
					//IQ5_S18_Q9 <= 18'sd0;
					//IQ6_S18_Q9 <= 18'sd0;
					//UCO_S36_Q17 <= 36'sd0;
				end
			endcase	
			x_4 <= IQ1_S18_Q9>>>2;
			x_5 <= IQ3_S18_Q9>>>2;
			x_6 <= IQ5_S18_Q9>>>2;
			x_7 <= IQ2_S18_Q9>>>2;
			x_8 <= IQ4_S18_Q9>>>2;
			x_9 <= IQ6_S18_Q9>>>2;
			x_10 <= (IQ1_S18_Q9 + IQ3_S18_Q9 + IQ5_S18_Q9)>>>2;		
		end
	end	
end
endmodule
