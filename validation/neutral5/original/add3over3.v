`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:56 07/23/2026 
// Design Name: 
// Module Name:    add3over3 
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
module add3over3 (
    input  wire                 clk_fast,       // High-speed system clock (e.g., 180MHz)
    input  wire                 rst_n,          

    // Group 1 Inputs (S35_Q17)
    input  wire signed [34:0]   Ua1_S35_Q17,
    input  wire signed [34:0]   Ub1_S35_Q17,
    input  wire signed [34:0]   Uc1_S35_Q17,

    // Group 2 Inputs (S35_Q17)
    input  wire signed [34:0]   Ua2_S35_Q17,
    input  wire signed [34:0]   Ub2_S35_Q17,
    input  wire signed [34:0]   Uc2_S35_Q17,

    //Group 3 Inputs (S35_Q17)
    input  wire signed [34:0]   Ua3_S35_Q17,
    input  wire signed [34:0]   Ub3_S35_Q17,
    input  wire signed [34:0]   Uc3_S35_Q17,

    // Outputs (S35_Q17)
    output reg  signed [34:0]   U1_S35_Q17,
    output reg  signed [34:0]   U2_S35_Q17,
    output reg  signed [34:0]   U3_S35_Q17
);

    // no overflow expected from A+B+C
    wire signed [34:0] sum1_S35_Q17 = Ua1_S35_Q17 + Ub1_S35_Q17 + Uc1_S35_Q17;
    wire signed [34:0] sum2_S35_Q17 = Ua2_S35_Q17 + Ub2_S35_Q17 + Uc2_S35_Q17;
    wire signed [34:0] sum3_S35_Q17 = Ua3_S35_Q17 + Ub3_S35_Q17 + Uc3_S35_Q17;

    reg  [5:0] Time_cnt = 5'd1; 
    reg  [3:0] Task_No  = 3'd0;

    parameter MUL1 = 4'd1;
    parameter MUL2 = 4'd2;
    parameter MUL3 = 4'd3;
    parameter MUL4 = 4'd4;
    parameter MUL5 = 4'd5;
    parameter MUL6 = 4'd6;

    // Hardware multiplier interface variables
    reg  signed [17:0] mul_a = 18'sd0;
    reg  signed [34:0] mul_b = 35'sd0;
    wire signed [52:0] mul_result; 

    // Instantiate hardware multiplier IP (18x37)
    MUL_add3ov3 By_SunY_18x35 ( 
        .clk(clk_fast), 
        .a(mul_a), 
        .b(mul_b), 
        .p(mul_result) 
    );

    always @(posedge clk_fast or negedge rst_n) begin
        if (!rst_n) begin
            Time_cnt   <= 4'd1;
            Task_No    <= 4'd0;
            U1_S35_Q17 <= 35'sd0;
            U2_S35_Q17 <= 35'sd0;
            U3_S35_Q17 <= 35'sd0;
            mul_a      <= 18'sd0;
            mul_b      <= 35'sd0;
        end else begin
            // TDM State Machine Counter     
		    Time_cnt<=Time_cnt+1'b1;
		    if(Time_cnt==18|| Time_cnt==1|| Time_cnt==2)  begin  //Time_cnt==0 || 
		    	Task_No<=MUL1;
		    end
		    if(Time_cnt==3 || Time_cnt==4|| Time_cnt==5)	begin
		    	Task_No<=MUL2;
		    end
		    if(Time_cnt==6 || Time_cnt==7|| Time_cnt==8)	begin
		    	Task_No<=MUL3;
		    end
		    if(Time_cnt==9 || Time_cnt==10|| Time_cnt==11)	begin
		    	Task_No<=MUL4;
		    end
		    if(Time_cnt==12 || Time_cnt==13|| Time_cnt==14)	begin
		    	Task_No<=MUL5;
		    end
		    if(Time_cnt==15 || Time_cnt==16|| Time_cnt==17)	begin
		    	Task_No<=MUL6;
		    end
		    if(Time_cnt==18) begin
		    	Time_cnt<=1;
		    end

            // TDM Task Execution
            case (Task_No)
                MUL1: begin
                    mul_a      <= 18'sd10923;  // Constant for 1/3
                    mul_b      <= sum1_S35_Q17;
                    U1_S35_Q17 <= mul_result[49:15]; // Shift right by 15 bits
                end
                
                MUL2: begin
                    mul_a      <= 18'sd10923;
                    mul_b      <= sum2_S35_Q17;
                    U2_S35_Q17 <= mul_result[49:15];
                end
                
                MUL3: begin
                    mul_a      <= 18'sd10923;
                    mul_b      <= sum3_S35_Q17;
                    U3_S35_Q17 <= mul_result[49:15];
                end
                MUL4: begin
                    // Placeholder for future tasks
                end 
                MUL5: begin
                    // Placeholder for future tasks
                end
                MUL6: begin
                    // Placeholder for future tasks
                end
                default: begin
                    // Fallback to enhance synthesis auto-routing stability
                end
            endcase
        end
    end
endmodule