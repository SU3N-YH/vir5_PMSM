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
mul18x35_1225_BySunY u_mul_inductor(   
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
				mul_b1 			<=	x_1;
                emfL1_S35       <=   emfL01_S35;
			end
				
			MUL2:
			begin
				//RxI2_S36 = (Res_S16_Q12 * x(14))>>>12;
				mul_a1 			<=	Res_S16_Q12; 
				mul_b1 			<=	x_2;
                emfL2_S35       <=   emfL02_S35;	
			end
				
			MUL3:
			begin
				//RxI3_S36 = (Res_S16_Q12 * x(15))>>>12;
				mul_a1 			<=	Res_S16_Q12; 
				mul_b1 			<=	x_3;
                emfL3_S35       <=   emfL03_S35;
			end
				
			MUL4:
			begin
				//I1_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				mul_a1			<= I_OV_20LinuH_Q18; 
				mul_b1			<=	emfL01_S35 +emfL1_S35;
                emfL01_S35     <=	UAO_P_S35 - UAO_N_S35 - RxI1_S35 - bEMF_A_S35_Q17;
			end
				
			MUL5:
			begin
				// I2_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
				mul_a1			<=	I_OV_20LinuH_Q18 ;
				mul_b1			<=	emfL02_S35 + emfL2_S35;
                emfL02_S35     <=	UBO_P_S35 - UBO_N_S35 - RxI2_S35 - bEMF_B_S35_Q17;				
			end
			MUL6:
			begin
				//I3_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;	
				mul_a1			<=	I_OV_20LinuH_Q18 ; 
				mul_b1			<=	emfL03_S35 + emfL3_S35;
                emfL03_S35     <=	UCO_P_S35 - UCO_N_S35 - RxI3_S35 - bEMF_C_S35_Q17;
			end

			default:									
			begin
				//normally will not occur
			end
		endcase

	/////////// Pipeline Latency Compensation Logic ///////////////
	// Spartan-6 IP core has a 2-cycle latency. 
	// Data fed during Time_cnt N will be valid and captured safely at Time_cnt N+3.
	if (Time_cnt == 4)  RxI1_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
	if (Time_cnt == 7)  RxI2_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
	if (Time_cnt == 10) RxI3_S35    <= {{2{mul_result1[52]}}, mul_result1[52:20]};
	if (Time_cnt == 13) I1_temp_S35 <= mul_result1;
	if (Time_cnt == 16) I2_temp_S35 <= mul_result1;
	if (Time_cnt == 1)  I3_temp_S35 <= mul_result1;

end

always@(posedge clk_10MHz)  //negedge rst_n has been removed to avoid metastability
begin
	if(!rst_n)	begin
		x_13	<=	0; 
		x_14	<=	0; 
		x_15	<=	0; 
	end
	///////////clock in 10MHz/////////////////// Lmin 0.8uH and Lmax=26214.4uH, x_1=IQ9-36bit 
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


// `timescale 1ns / 1ps
// //////////////////////////////////////////////////////////////////////////////////
// // Company: 
// // Engineer: Sunito SUEN
// // 
// // Create Date:    15:21:41 12/02/2025 
// // Design Name: 
// // Module Name:    Inductor_5Phase 
// // Project Name: 
// // Target Devices: Xilinx Spartan-6 
// // Tool versions: ISE 14.7
// // Description:   5-Phase Motor control inductor physical model evaluation
// //                using dual multiplier TDM architecture
// // Dependencies:  mul18x35_1225_BySunY
// //
// // Revision: 
// // Revision 1.00 - Expanded to 5-Phase, Dual Multiplier TDM implemented
// // Additional Comments: All comments in coding procedure outputted in English
// //
// //////////////////////////////////////////////////////////////////////////////////
// module Inductor(
//     input  					clk_180MHz,
//     // Positive voltage inputs for 5 phases
//     input		[34:0]		UAO_P_S35, 				
//     input		[34:0]		UBO_P_S35, 				
//     input		[34:0]		UCO_P_S35,				
//     input		[34:0]		UDO_P_S35,				
//     input		[34:0]		UEO_P_S35,
//     // Negative voltage inputs for 5 phases				
//     input		[34:0]		UAO_N_S35,			
//     input		[34:0]		UBO_N_S35,			
//     input		[34:0]		UCO_N_S35, 			
//     input		[34:0]		UDO_N_S35, 			
//     input		[34:0]		UEO_N_S35, 			
    
//     input		[15:0]		I_OV_20LinuH_Q18,		// SelfL-max=13.1072mH, SelfL-min=0.4uH, 
//     input		[15:0]		Res_S16_Q12,		
//     input					rst_n, 					// Reset
    
//     // Output states (Q25)
//     output	reg signed [34:0]  x_1, 
//     output	reg signed [34:0]  x_2,
//     output	reg signed [34:0]  x_3,
//     output	reg signed [34:0]  x_4,
//     output	reg signed [34:0]  x_5,
    
//     // Output currents (Split into High/Low for float processing)
//     output	[15:0]  Curt1_L15, Curt1_H15,
//     output	[15:0]  Curt2_L15, Curt2_H15,
//     output	[15:0]  Curt3_L15, Curt3_H15,
//     output	[15:0]  Curt4_L15, Curt4_H15,
//     output	[15:0]  Curt5_L15, Curt5_H15
// );
	
// //=========================================================
// // Parameters & Variables Definition Begin
// //=========================================================

// // Integrator accumulators
// reg signed	[52:0]  x_13=0, x_14=0, x_15=0, x_16=0, x_17=0;

// // Present and previous EMF values
// reg signed	[34:0]  emfL01_S35=0, emfL02_S35=0, emfL03_S35=0, emfL04_S35=0, emfL05_S35=0; 
// reg signed	[34:0]  emfL1_S35=0,  emfL2_S35=0,  emfL3_S35=0,  emfL4_S35=0,  emfL5_S35=0;  

// // Resistance voltage drop
// reg signed	[34:0]  RxI1_S35=0, RxI2_S35=0, RxI3_S35=0, RxI4_S35=0, RxI5_S35=0;

// // Current derivative temp values
// reg signed	[52:0]	I1_temp_S35=0, I2_temp_S35=0, I3_temp_S35=0, I4_temp_S35=0, I5_temp_S35=0;

// // Timing and control
// reg signed  [5:0]	Time_cnt = 1; 
// reg signed  [3:0]	Task_No = 1; // Start from PHASE_A (1)
// reg 	            clk_10MHz = 1'b1;

// // Dual hardware multiplier ports
// reg signed	[17:0] 	mul1_a = 0; 
// reg signed	[34:0]  mul1_b = 0; 
// wire signed	[52:0] 	mul1_result; // Multiplier 1 for RxI calculation

// reg signed	[17:0] 	mul2_a = 0; 
// reg signed	[34:0]  mul2_b = 0; 
// wire signed	[52:0] 	mul2_result; // Multiplier 2 for Current Derivative calculation

// // TDM State Definitions
// parameter	PHASE_A	= 4'sd1;
// parameter	PHASE_B	= 4'sd2;
// parameter	PHASE_C	= 4'sd3;
// parameter	PHASE_D	= 4'sd4;
// parameter	PHASE_E = 4'sd5;
// parameter	IDLE_ST = 4'sd6; // Idle state to maintain 18-cycle period

// //=========================================================
// // Hardware Multiplier Instantiations
// //=========================================================

// // Multiplier 1: Dedicated to Resistance Voltage Drop (R * I)
// mul18x35_1225_BySunY u_mul_RxI(   
//   .clk(clk_180MHz),
//   .a(mul1_a),
//   .b(mul1_b),
//   .p(mul1_result)
// );

// // Multiplier 2: Dedicated to Inductor Current Derivative ((UL + UL_prev) * I_OV)
// mul_inductor_2 u_mul_Itemp(   
//   .clk(clk_180MHz),
//   .a(mul2_a),
//   .b(mul2_b),
//   .p(mul2_result)
// );

// //=========================================================
// // Main 180MHz TDM Control Block
// //=========================================================
// always@(posedge clk_180MHz) 
// begin
//     // Time count updates. Count start from 1, Time_cnt=0 should be avoided to prevent X-state propagation
//     Time_cnt <= Time_cnt + 1'b1;   
    
//     // Status switching - allocating 3 clock cycles per phase
//     if(Time_cnt==18 || Time_cnt==1 || Time_cnt==2) begin  
//         Task_No   <= PHASE_A;
//         clk_10MHz <= 1'b1;
//     end
//     if(Time_cnt==3 || Time_cnt==4 || Time_cnt==5) begin
//         Task_No   <= PHASE_B;
//         clk_10MHz <= 1'b1;
//     end
//     if(Time_cnt==6 || Time_cnt==7 || Time_cnt==8) begin
//         Task_No   <= PHASE_C;
//         clk_10MHz <= 1'b1;
//     end
//     if(Time_cnt==9 || Time_cnt==10 || Time_cnt==11) begin
//         Task_No   <= PHASE_D;
//         clk_10MHz <= 1'b0;
//     end
//     if(Time_cnt==12 || Time_cnt==13 || Time_cnt==14) begin
//         Task_No   <= PHASE_E;
//         clk_10MHz <= 1'b0;
//     end
//     if(Time_cnt==15 || Time_cnt==16 || Time_cnt==17) begin
//         Task_No   <= IDLE_ST; // 3 cycle idle to pad up to exactly 18 cycles total
//         clk_10MHz <= 1'b0;
//     end
//     if(Time_cnt==18) begin
//         Time_cnt  <= 1;
//     end
    
//     //=========== TDM Data Preparation Begin ============//
//     case(Task_No)
//         PHASE_A: 
//         begin
//             // MUL1: RxI1_S36 = (Res_S16_Q12 * x(13))>>>12
//             mul1_a     <= Res_S16_Q12; 
//             mul1_b     <= x_1;
//             // MUL2: I1_temp_S35 = (UL+UL_prev) * I_OV_20LinuH_Q18>>>18;
//             mul2_a     <= I_OV_20LinuH_Q18; 
//             mul2_b     <= emfL01_S35 + emfL1_S35;
            
//             // Update EMF memory
//             emfL1_S35  <= emfL01_S35;
//             emfL01_S35 <= UAO_P_S35 - UAO_N_S35 - RxI1_S35;
//         end
            
//         PHASE_B:
//         begin
//             mul1_a     <= Res_S16_Q12; 
//             mul1_b     <= x_2;
            
//             mul2_a     <= I_OV_20LinuH_Q18;
//             mul2_b     <= emfL02_S35 + emfL2_S35;
            
//             emfL2_S35  <= emfL02_S35;
//             emfL02_S35 <= UBO_P_S35 - UBO_N_S35 - RxI2_S35;	
//         end
            
//         PHASE_C:
//         begin
//             mul1_a     <= Res_S16_Q12; 
//             mul1_b     <= x_3;
            
//             mul2_a     <= I_OV_20LinuH_Q18; 
//             mul2_b     <= emfL03_S35 + emfL3_S35;
            
//             emfL3_S35  <= emfL03_S35;
//             emfL03_S35 <= UCO_P_S35 - UCO_N_S35 - RxI3_S35;
//         end
            
//         PHASE_D:
//         begin
//             mul1_a     <= Res_S16_Q12; 
//             mul1_b     <= x_4;
            
//             mul2_a     <= I_OV_20LinuH_Q18; 
//             mul2_b     <= emfL04_S35 + emfL4_S35;
            
//             emfL4_S35  <= emfL04_S35;
//             emfL04_S35 <= UDO_P_S35 - UDO_N_S35 - RxI4_S35;
//         end
            
//         PHASE_E:
//         begin
//             mul1_a     <= Res_S16_Q12; 
//             mul1_b     <= x_5;
            
//             mul2_a     <= I_OV_20LinuH_Q18;
//             mul2_b     <= emfL05_S35 + emfL5_S35;
            
//             emfL5_S35  <= emfL05_S35;
//             emfL05_S35 <= UEO_P_S35 - UEO_N_S35 - RxI5_S35;				
//         end

//         IDLE_ST:
//         begin
//             // Maintain states during padding cycles
//         end

//         default:									
//         begin
//             // Normally will not occur
//         end
//     endcase

//     //========= Pipeline Latency Compensation Logic =========//
//     // Spartan-6 IP core has a 2-cycle latency. 
//     // Data fed during Time_cnt N will be valid and captured safely at Time_cnt N+3.
    
//     // Phase A Capture
//     if (Time_cnt == 4) begin
//         RxI1_S35    <= {{2{mul1_result[52]}}, mul1_result[52:20]};
//         I1_temp_S35 <= mul2_result;
//     end
    
//     // Phase B Capture
//     if (Time_cnt == 7) begin
//         RxI2_S35    <= {{2{mul1_result[52]}}, mul1_result[52:20]};
//         I2_temp_S35 <= mul2_result;
//     end
    
//     // Phase C Capture
//     if (Time_cnt == 10) begin
//         RxI3_S35    <= {{2{mul1_result[52]}}, mul1_result[52:20]};
//         I3_temp_S35 <= mul2_result;
//     end
    
//     // Phase D Capture
//     if (Time_cnt == 13) begin
//         RxI4_S35    <= {{2{mul1_result[52]}}, mul1_result[52:20]};
//         I4_temp_S35 <= mul2_result;
//     end
    
//     // Phase E Capture
//     if (Time_cnt == 16) begin
//         RxI5_S35    <= {{2{mul1_result[52]}}, mul1_result[52:20]};
//         I5_temp_S35 <= mul2_result;
//     end
// end

// //=========================================================
// // 10MHz Integrator Block
// //=========================================================
// always@(posedge clk_10MHz)
// begin
//     if(!rst_n) begin
//         x_13 <= 0; 
//         x_14 <= 0; 
//         x_15 <= 0; 
//         x_16 <= 0; 
//         x_17 <= 0; 
//     end
//     else begin
//         // Clock in 10MHz. Lmin 0.8uH and Lmax=26214.4uH, x_1=IQ9-36bit 
//         x_13 <= x_13 + I1_temp_S35;
//         x_14 <= x_14 + I2_temp_S35;	
//         x_15 <= x_15 + I3_temp_S35;
//         x_16 <= x_16 + I4_temp_S35;
//         x_17 <= x_17 + I5_temp_S35;
//     end
    
//     // Format conversion to Q25
//     x_1 <= {x_13[52], x_13[43:10]};  
//     x_2 <= {x_14[52], x_14[43:10]};  	
//     x_3 <= {x_15[52], x_15[43:10]};  
//     x_4 <= {x_16[52], x_16[43:10]};  
//     x_5 <= {x_17[52], x_17[43:10]};  
// end

// //=========================================================
// // Output Assignment
// //=========================================================
// // Parameters synthesized in STM32 with float format
// assign Curt1_L15 = {x_1[34], x_1[18:4]};    
// assign Curt1_H15 = x_1[34:19];    
// assign Curt2_L15 = {x_2[34], x_2[18:4]};    
// assign Curt2_H15 = x_2[34:19];  
// assign Curt3_L15 = {x_3[34], x_3[18:4]};    
// assign Curt3_H15 = x_3[34:19];  
// assign Curt4_L15 = {x_4[34], x_4[18:4]};    
// assign Curt4_H15 = x_4[34:19];  
// assign Curt5_L15 = {x_5[34], x_5[18:4]};    
// assign Curt5_H15 = x_5[34:19];  

// endmodule