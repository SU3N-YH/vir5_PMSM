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
module Inductor(
input  						clk_180MHz,
input			[34:0]	UAO_P_S35, 				
input			[34:0]	UBO_P_S35, 				
input			[34:0]	UCO_P_S35,				
input			[34:0]	UAO_N_S35,			
input			[34:0]	UBO_N_S35,			
input			[34:0]	UCO_N_S35, 
input			[34:0]	bEMF_A_S35_Q17,	
input			[34:0]	bEMF_B_S35_Q17,
input			[34:0]	bEMF_C_S35_Q17,		
input			[15:0]	I_OV_20LinuH_Q18,		//SelfL-max=13.1072mH, SelfL-min=0.4uH, 
input			[15:0]	Res_S16_Q12,		
input						rst_n, 					//reset
output	reg signed [34:0]  x_1, // Q25
output	reg signed [34:0]  x_2, // lower/higher 16 bits of 35-bit current could be rewrite in PCI by truncation.
output	reg signed [34:0]  x_3
    );
// [2026-11-16 20:00 CST] Single-clock current engine with four-stage DSP IP.
// One frame is 18 clocks. Arithmetic uses the original modulo Q formats.
parameter USE_DE_CORE = 0;
reg [4:0] Time_cnt = 1;
reg signed [17:0] mul_a1 = 0;
reg signed [34:0] mul_b1 = 0;
wire signed [52:0] mul_result1;
reg signed [34:0] voltage_pair [0:2];
reg signed [34:0] drop_pair [0:2];
reg signed [34:0] emf_new [0:2];
reg signed [34:0] emf_previous [0:2];
reg signed [34:0] emf_sum [0:2];
reg signed [34:0] resistance_drop [0:2];
reg signed [52:0] increment [0:2];
reg signed [52:0] accumulator [0:2];
reg signed [34:0] current_sample [0:2];
reg signed [17:0] resistance_sample, inverse_sample;
integer phase;

generate
    if (USE_DE_CORE) begin : de_core
        mul_inductor_2 u_mul_inductor (
            .clk(clk_180MHz), .a(mul_a1), .b(mul_b1), .p(mul_result1)
        );
    end else begin : abc_core
        mul18x35_1225_BySunY u_mul_inductor (
            .clk(clk_180MHz), .a(mul_a1), .b(mul_b1), .p(mul_result1)
        );
    end
endgenerate

always @(posedge clk_180MHz) begin
    if (!rst_n) begin
        Time_cnt <= 1;
        mul_a1 <= 0; mul_b1 <= 0;
        resistance_sample <= 0; inverse_sample <= 0;
        x_1 <= 0; x_2 <= 0; x_3 <= 0;
        for (phase=0; phase<3; phase=phase+1) begin
            voltage_pair[phase] <= 0; drop_pair[phase] <= 0;
            emf_new[phase] <= 0; emf_previous[phase] <= 0;
            emf_sum[phase] <= 0; resistance_drop[phase] <= 0;
            increment[phase] <= 0; accumulator[phase] <= 0;
            current_sample[phase] <= 0;
        end
    end else begin
        Time_cnt <= (Time_cnt==18) ? 5'd1 : Time_cnt+1'b1;
        // Loads at N are captured at N+5 with the four-stage DSP pipeline.
        case (Time_cnt)
            1: begin
                current_sample[0] <= x_1;
                current_sample[1] <= x_2;
                current_sample[2] <= x_3;
                resistance_sample <= $signed({2'b00,Res_S16_Q12});
                inverse_sample <= $signed({2'b00,I_OV_20LinuH_Q18});
                mul_a1 <= $signed({2'b00,Res_S16_Q12}); mul_b1 <= x_1;
            end
            4: begin
                mul_a1 <= resistance_sample; mul_b1 <= current_sample[1];
                // Retain the original one-frame output delay relative to Q35.18 state.
                for (phase=0; phase<3; phase=phase+1)
                    accumulator[phase] <= accumulator[phase]+increment[phase];
                x_1 <= {accumulator[0][52],accumulator[0][43:10]};
                x_2 <= {accumulator[1][52],accumulator[1][43:10]};
                x_3 <= {accumulator[2][52],accumulator[2][43:10]};
            end
            7: begin mul_a1 <= resistance_sample; mul_b1 <= current_sample[2]; end
            10: begin mul_a1 <= inverse_sample; mul_b1 <= emf_sum[0]; end
            13: begin mul_a1 <= inverse_sample; mul_b1 <= emf_sum[1]; end
            16: begin mul_a1 <= inverse_sample; mul_b1 <= emf_sum[2]; end
        endcase
        if (Time_cnt==6) resistance_drop[0] <= {{2{mul_result1[52]}},mul_result1[52:20]};
        if (Time_cnt==9) resistance_drop[1] <= {{2{mul_result1[52]}},mul_result1[52:20]};
        if (Time_cnt==12) resistance_drop[2] <= {{2{mul_result1[52]}},mul_result1[52:20]};
        if (Time_cnt==15) increment[0] <= mul_result1;
        if (Time_cnt==18) increment[1] <= mul_result1;
        if (Time_cnt==3) increment[2] <= mul_result1;

        // Split Ubridge - Uneutral - R*I - backEMF into two registered levels.
        if (Time_cnt==7) begin
            voltage_pair[0] <= UAO_P_S35-UAO_N_S35;
            drop_pair[0] <= resistance_drop[0]+bEMF_A_S35_Q17;
        end
        if (Time_cnt==10) begin
            voltage_pair[1] <= UBO_P_S35-UBO_N_S35;
            drop_pair[1] <= resistance_drop[1] + bEMF_B_S35_Q17;
        end
        if (Time_cnt==13) begin
            voltage_pair[2] <= UCO_P_S35-UCO_N_S35;
            drop_pair[2] <= resistance_drop[2] + bEMF_C_S35_Q17;
        end
        for (phase=0; phase<3; phase=phase+1) begin
            if (Time_cnt==8+3*phase)
                emf_new[phase] <= voltage_pair[phase]-drop_pair[phase];
            if (Time_cnt==9+3*phase) begin
                emf_sum[phase] <= emf_new[phase]+emf_previous[phase];
                emf_previous[phase] <= emf_new[phase];
            end
        end
    end
end

endmodule



// original approved 3 phase inductor model, 2025-12-02, do not modify, only for reference.
// `timescale 1ns / 1ps
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
// module Inductor(
// input  						clk_180MHz,
// input			[34:0]	UAO_P_S35, 				
// input			[34:0]	UBO_P_S35, 				
// input			[34:0]	UCO_P_S35,				
// input			[34:0]	UAO_N_S35,			
// input			[34:0]	UBO_N_S35,			
// input			[34:0]	UCO_N_S35, 
// input			[34:0]	bEMF_A_S35_Q17,	
// input			[34:0]	bEMF_B_S35_Q17,
// input			[34:0]	bEMF_C_S35_Q17,		
// input			[15:0]	I_OV_20LinuH_Q18,		//SelfL-max=13.1072mH, SelfL-min=0.4uH, 
// input			[15:0]	Res_S16_Q12,		
// input						rst_n, 					//reset
// output	reg signed [34:0]  x_1, //Q25
// output	reg signed [34:0]  x_2,
// output	reg signed [34:0]  x_3,
// output	[15:0]  Curt1_L15,   // Curt Q21
// output	[15:0]  Curt1_H15,
// output	[15:0]  Curt2_L15,
// output	[15:0]  Curt2_H15,
// output	[15:0]  Curt3_L15,
// output	[15:0]  Curt3_H15
//     );
	
// //parameters & variables defination begin

// reg signed	[52:0]  x_13=0;
// reg signed	[52:0]  x_14=0;
// reg signed	[52:0]  x_15=0;

// reg signed	[34:0]  emfL01_S35=0;  //EMF of inductor L1
// reg signed	[34:0]  emfL02_S35=0;
// reg signed	[34:0]  emfL03_S35=0; 

// reg signed	[34:0]  emfL1_S35=0;  //EMF of inductor L1
// reg signed	[34:0]  emfL2_S35=0;
// reg signed	[34:0]  emfL3_S35=0; 

// reg signed	[34:0]  RxI1_S35=0;
// reg signed	[34:0]  RxI2_S35=0;
// reg signed	[34:0]  RxI3_S35=0;

// reg signed	[52:0]	 I1_temp_S35=0;
// reg signed	[52:0]	 I2_temp_S35=0;
// reg signed	[52:0]	 I3_temp_S35=0;


// reg		signed [5:0]	Time_cnt = 1; 
// reg   		[3:0]  SampWin_num=0;	

// reg 		signed [3:0]	Task_No=1; //start from MUL1 (1), Time_cnt=1
// reg 	clk_10MHz=1'b1;

// //////////////hardware multiplier port//////////////
// reg 	signed	[17:0] 	mul_a1 = 0; 
// reg 	signed	[34:0]  mul_b1 = 0; 
// wire 	signed	[52:0] 	mul_result1;

// ///////////////////////////////////////////////
// parameter					IDLE	=	4'sd0;
// parameter					MUL1	=	4'sd1;
// parameter					MUL2	=	4'sd2;
// parameter					MUL3	=	4'sd3;
// parameter					MUL4 	=	4'sd4;
// parameter					MUL5 	=	4'sd5;
// parameter					MUL6 	=	4'sd6;

// //parameters & variables defination end

// //hardware multiplier call
// mul18x35_1225_BySunY u_mul_inductor(   
//   .clk(clk_180MHz), // input clk
//   .a(mul_a1), // input [17 : 0] a
//   .b(mul_b1), // input [34 : 0] b
//   .p(mul_result1) // output [52 : 0] p
// );

// always@(posedge clk_180MHz) //negedge rst_n has been removed to avoid metastability
// begin
// 	//if(!rst_n)begin
// 		//Time_cnt<=0;
// 		//Task_No <= MUL1;
// 	//end
// 	//else
// 	//begin //associated 'end' moved down

// 	//status switching
		
// 		Time_cnt<=Time_cnt+1'b1;   //count start from 1, Time_cnt=0 should be avoided to prevent X-state propagation
// 		if(Time_cnt==18|| Time_cnt==1|| Time_cnt==2)  begin  
// 			Task_No<=MUL1;
// 			clk_10MHz<=1'b1;
// 		end
// 		if(Time_cnt==3 || Time_cnt==4|| Time_cnt==5)	begin
// 			Task_No<=MUL2;
// 			clk_10MHz<=1'b1;
// 		end
// 		if(Time_cnt==6 || Time_cnt==7|| Time_cnt==8)	begin
// 			Task_No<=MUL3;
// 			clk_10MHz<=1'b1;
// 		end
// 		if(Time_cnt==9 || Time_cnt==10|| Time_cnt==11)	begin
// 			Task_No<=MUL4;
// 			clk_10MHz<=1'b0;
// 		end
// 		if(Time_cnt==12 || Time_cnt==13|| Time_cnt==14)	begin
// 			Task_No<=MUL5;
// 			clk_10MHz<=1'b0;
// 		end
// 		if(Time_cnt==15 || Time_cnt==16|| Time_cnt==17)	begin
// 			Task_No<=MUL6;
// 			clk_10MHz<=1'b0;
// 		end
// 		if(Time_cnt==18) begin
// 			Time_cnt<=1;
// 			//Task_No<=MUL1;
// 			//clk_10MHz<=1'b1;
// 		end
		
// 	///////////TDM Begin///////////////
// 		case(Task_No)
// 			MUL1: 
// 			begin
// 				//RxI1_S36 = (Res_S16_Q12 * x(13))>>>12
// 				mul_a1 			<=	Res_S16_Q12; 
// 				mul_b1 			<=	x_1;
//                 emfL1_S35       <=   emfL01_S35;
// 			end
				
// 			MUL2:
// 			begin
// 				//RxI2_S36 = (Res_S16_Q12 * x(14))>>>12;
// 				mul_a1 			<=	Res_S16_Q12; 
// 				mul_b1 			<=	x_2;
//                 emfL2_S35       <=   emfL02_S35;	
// 			end
				
// 			MUL3:
// 			begin
// 				//RxI3_S36 = (Res_S16_Q12 * x(15))>>>12;
// 				mul_a1 			<=	Res_S16_Q12; 
// 				mul_b1 			<=	x_3;
//                 emfL3_S35       <=   emfL03_S35;
// 			end
				
// 			MUL4:
// 			begin
// 				//I1_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
// 				mul_a1			<= I_OV_20LinuH_Q18; 
// 				mul_b1			<=	emfL01_S35 +emfL1_S35;
//                 emfL01_S35     <=	UAO_P_S35 - UAO_N_S35 - RxI1_S35 - bEMF_A_S35_Q17;
// 			end
				
// 			MUL5:
// 			begin
// 				// I2_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
// 				mul_a1			<=	I_OV_20LinuH_Q18 ;
// 				mul_b1			<=	emfL02_S35 + emfL2_S35;
//                 emfL02_S35     <=	UBO_P_S35 - UBO_N_S35 - RxI2_S35 - bEMF_B_S35_Q17;				
// 			end
// 			MUL6:
// 			begin
// 				//I3_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;	
// 				mul_a1			<=	I_OV_20LinuH_Q18 ; 
// 				mul_b1			<=	emfL03_S35 + emfL3_S35;
//                 emfL03_S35     <=	UCO_P_S35 - UCO_N_S35 - RxI3_S35 - bEMF_C_S35_Q17;
// 			end

// 			default:									
// 			begin
// 				//normally will not occur
// 			end
// 		endcase

// 	/////////// Pipeline Latency Compensation Logic ///////////////
// 	// Spartan-6 IP core has a 2-cycle latency. 
// 	// Data fed during Time_cnt N will be valid and captured safely at Time_cnt N+3.
// 	if (Time_cnt == 4)  RxI1_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
// 	if (Time_cnt == 7)  RxI2_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
// 	if (Time_cnt == 10) RxI3_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
// 	if (Time_cnt == 13) I1_temp_S35 <= mul_result1;
// 	if (Time_cnt == 16) I2_temp_S35 <= mul_result1;
// 	if (Time_cnt == 1)  I3_temp_S35 <= mul_result1;

// end

// always@(posedge clk_10MHz)  //negedge rst_n has been removed to avoid metastability
// begin
// 	if(!rst_n)	begin
// 		x_13	<=	0; 
// 		x_14	<=	0; 
// 		x_15	<=	0; 
// 	end
// 	///////////clock in 10MHz/////////////////// Lmin 0.8uH and Lmax=26214.4uH, x_1=IQ9-36bit 
// 	else	begin
// 		x_13 			<=	x_13 + I1_temp_S35;
// 		x_14 			<=	x_14 + I2_temp_S35;	
// 		x_15 			<=	x_15 + I3_temp_S35;
// 	end
//    x_1 			<=	{x_13[52],x_13[43:10]};   //Q25
//    x_2			<=	{x_14[52],x_14[43:10]};  	
//    x_3 			<=	{x_15[52],x_15[43:10]};  
// end
// assign             Curt1_L15           =    {x_1[34],x_1[18:4]};    
// assign             Curt1_H15           =     x_1[34:19];    //2 parameters synthesized in STM32 with float format
// assign             Curt2_L15           =    {x_2[34],x_2[18:4]};    
// assign             Curt2_H15           =     x_2[34:19];  //2 parameters synthesized in STM32 with float format
// assign             Curt3_L15           =      {x_3[34],x_3[18:4]};    
// assign             Curt3_H15           =     x_3[34:19];  //2 parameters synthesized in STM32 with float format

// endmodule
