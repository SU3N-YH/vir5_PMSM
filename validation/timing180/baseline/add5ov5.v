`timescale 1ns / 1ps
// Three independent five-phase averages; input/output format is S35_Q17.
// Five-term sums use S38_Q17 to preserve the full input range.
module add5ov5 (
    input  wire                 clk_fast,        // High-speed system clock (180 MHz)
    input  wire                 rst_n,

    // Group 1 Inputs (S35_Q17) - e.g. bridge-arm voltages uA0..uE0
    input  wire signed [34:0]   Ua1_S35_Q17,
    input  wire signed [34:0]   Ub1_S35_Q17,
    input  wire signed [34:0]   Uc1_S35_Q17,
    input  wire signed [34:0]   Ud1_S35_Q17,
    input  wire signed [34:0]   Ue1_S35_Q17,

    // Group 2 Inputs (S35_Q17) - e.g. back-EMF eA..eE
    input  wire signed [34:0]   Ua2_S35_Q17,
    input  wire signed [34:0]   Ub2_S35_Q17,
    input  wire signed [34:0]   Uc2_S35_Q17,
    input  wire signed [34:0]   Ud2_S35_Q17,
    input  wire signed [34:0]   Ue2_S35_Q17,

    // Group 3 Inputs (S35_Q17) - e.g. mutual / zero-sequence correction
    input  wire signed [34:0]   Ua3_S35_Q17,
    input  wire signed [34:0]   Ub3_S35_Q17,
    input  wire signed [34:0]   Uc3_S35_Q17,
    input  wire signed [34:0]   Ud3_S35_Q17,
    input  wire signed [34:0]   Ue3_S35_Q17,

    // Outputs (S35_Q17) - sum/5 of each group
    output reg  signed [34:0]   U1_S35_Q17,
    output reg  signed [34:0]   U2_S35_Q17,
    output reg  signed [34:0]   U3_S35_Q17
);

    // =========================================================================
    // 1. Group sums, S38_Q17.  Exact: 5*(2^34-1) < 2^37.
    //    Each input is explicitly sign-extended so the add can never wrap.
    // =========================================================================
    wire signed [37:0] sum1_S38_Q17 =
          {{3{Ua1_S35_Q17[34]}}, Ua1_S35_Q17}
        + {{3{Ub1_S35_Q17[34]}}, Ub1_S35_Q17}
        + {{3{Uc1_S35_Q17[34]}}, Uc1_S35_Q17}
        + {{3{Ud1_S35_Q17[34]}}, Ud1_S35_Q17}
        + {{3{Ue1_S35_Q17[34]}}, Ue1_S35_Q17};

    wire signed [37:0] sum2_S38_Q17 =
          {{3{Ua2_S35_Q17[34]}}, Ua2_S35_Q17}
        + {{3{Ub2_S35_Q17[34]}}, Ub2_S35_Q17}
        + {{3{Uc2_S35_Q17[34]}}, Uc2_S35_Q17}
        + {{3{Ud2_S35_Q17[34]}}, Ud2_S35_Q17}
        + {{3{Ue2_S35_Q17[34]}}, Ue2_S35_Q17};

    wire signed [37:0] sum3_S38_Q17 =
          {{3{Ua3_S35_Q17[34]}}, Ua3_S35_Q17}
        + {{3{Ub3_S35_Q17[34]}}, Ub3_S35_Q17}
        + {{3{Uc3_S35_Q17[34]}}, Uc3_S35_Q17}
        + {{3{Ud3_S35_Q17[34]}}, Ud3_S35_Q17}
        + {{3{Ue3_S35_Q17[34]}}, Ue3_S35_Q17};

    // Q19 reciprocal: round(2^19/5) = 104858; relative error +3.815e-6.
    // division5 is the existing signed 18x35 -> 53 IP, one pipeline stage.
    localparam signed [17:0] ONE_FIFTH_Q19 = 18'sd104858;
    reg  signed [17:0] mul_a;
    reg  signed [34:0] mul_b;
    wire signed [52:0] mul_p;
    
    division5 u_division5 (
        .clk(clk_fast), 
        .a(mul_a), 
        .b(mul_b), 
        .p(mul_p)
    );

    // Preserve all 38 sum bits with the existing 35-bit multiplier port:
    // sum = 8 * signed(sum[37:3]) + unsigned(sum[2:0]), including negatives.
    // The 3-bit remainder is multiplied with LUT shift/add terms, not a DSP.
    function [20:0] remainder_times_q19;
        input [2:0] remainder;
        begin
            remainder_times_q19 = (remainder[0] ? 21'd104858 : 21'd0)
                                + (remainder[1] ? 21'd209716 : 21'd0)
                                + (remainder[2] ? 21'd419432 : 21'd0);
        end
    endfunction
    reg signed [20:0] low_product;
    wire signed [55:0] full_product = {mul_p, 3'b000}
                                   + {{35{low_product[20]}}, low_product};
    // Q19 * Q17 = Q36; rounding and shifting by 19 restores Q17.
    wire signed [55:0] rounded_product = full_product + 56'sd262144;
    wire signed [36:0] mean_S37_Q17 = rounded_product[55:19];
    reg signed [36:0] mean_stage_S37_Q17;
    // The Q19 gain is slightly greater than 1/5. Clamp instead of wrapping
    // when a valid full-scale average is pushed outside the S35 output range.
    wire signed [34:0] mean_S35_Q17 =
        (mean_stage_S37_Q17 > 37'sd17179869183) ? 35'sd17179869183 :
        (mean_stage_S37_Q17 < -37'sd17179869184) ? -35'sd17179869184 :
        mean_stage_S37_Q17[34:0];

    // Load at 1/4/7; the one-stage IP samples at 2/5/8; capture at 3/6/9.
    // Saturate/publish at 4/7/10, separating the wide adder from the limiter.
    // Keep the 12-clock frame and hold each output between capture clocks.
    reg [3:0] Time_cnt;
    always @(posedge clk_fast or negedge rst_n) begin
        if (!rst_n) begin
            Time_cnt   <= 4'd1;
            mul_a      <= 18'sd0;
            mul_b      <= 35'sd0;
            low_product <= 21'sd0;
            mean_stage_S37_Q17 <= 37'sd0;
            U1_S35_Q17 <= 35'sd0;
            U2_S35_Q17 <= 35'sd0;
            U3_S35_Q17 <= 35'sd0;
        end else begin
            if (Time_cnt == 4'd12)
                Time_cnt <= 4'd1;
            else
                Time_cnt <= Time_cnt + 1'b1;

            case (Time_cnt)
                4'd1: begin
                    mul_a <= ONE_FIFTH_Q19;
                    mul_b <= sum1_S38_Q17[37:3];
                    low_product <= remainder_times_q19(sum1_S38_Q17[2:0]);
                end
                4'd3: mean_stage_S37_Q17 <= mean_S37_Q17;
                4'd4: begin
                    U1_S35_Q17 <= mean_S35_Q17;
                    mul_a <= ONE_FIFTH_Q19;
                    mul_b <= sum2_S38_Q17[37:3];
                    low_product <= remainder_times_q19(sum2_S38_Q17[2:0]);
                end
                4'd6: mean_stage_S37_Q17 <= mean_S37_Q17;
                4'd7: begin
                    U2_S35_Q17 <= mean_S35_Q17;
                    mul_a <= ONE_FIFTH_Q19;
                    mul_b <= sum3_S38_Q17[37:3];
                    low_product <= remainder_times_q19(sum3_S38_Q17[2:0]);
                end
                4'd9: mean_stage_S37_Q17 <= mean_S37_Q17;
                4'd10: U3_S35_Q17 <= mean_S35_Q17;
                default: begin end
            endcase
        end
    end
endmodule

//original 3 phase code, for refernce, do not delete//
// `timescale 1ns / 1ps
// //////////////////////////////////////////////////////////////////////////////////
// // Company: 
// // Engineer: 
// // 
// // Create Date:    20:57:56 07/23/2026 
// // Design Name: 
// // Module Name:    add3over3 
// // Project Name: 
// // Target Devices: 
// // Tool versions: 
// // Description: 
// //
// // Dependencies: 
// //
// // Revision: 
// // Revision 0.01 - File Created
// // Additional Comments: 
// //
// //////////////////////////////////////////////////////////////////////////////////
// module add3over3 (
//     input  wire                 clk_fast,       // High-speed system clock (e.g., 180MHz)
//     input  wire                 rst_n,          

//     // Group 1 Inputs (S35_Q17)
//     input  wire signed [34:0]   Ua1_S35_Q17,
//     input  wire signed [34:0]   Ub1_S35_Q17,
//     input  wire signed [34:0]   Uc1_S35_Q17,

//     // Group 2 Inputs (S35_Q17)
//     input  wire signed [34:0]   Ua2_S35_Q17,
//     input  wire signed [34:0]   Ub2_S35_Q17,
//     input  wire signed [34:0]   Uc2_S35_Q17,

//     //Group 3 Inputs (S35_Q17)
//     input  wire signed [34:0]   Ua3_S35_Q17,
//     input  wire signed [34:0]   Ub3_S35_Q17,
//     input  wire signed [34:0]   Uc3_S35_Q17,

//     // Outputs (S35_Q17)
//     output reg  signed [34:0]   U1_S35_Q17,
//     output reg  signed [34:0]   U2_S35_Q17,
//     output reg  signed [34:0]   U3_S35_Q17
// );

//     // no overflow expected from A+B+C
//     wire signed [34:0] sum1_S35_Q17 = Ua1_S35_Q17 + Ub1_S35_Q17 + Uc1_S35_Q17;
//     wire signed [34:0] sum2_S35_Q17 = Ua2_S35_Q17 + Ub2_S35_Q17 + Uc2_S35_Q17;
//     wire signed [34:0] sum3_S35_Q17 = Ua3_S35_Q17 + Ub3_S35_Q17 + Uc3_S35_Q17;

//     reg  [5:0] Time_cnt = 5'd1; 
//     reg  [3:0] Task_No  = 3'd0;
//     reg  [1:0] clk_10MHz= 1'b1;

//     parameter MUL1 = 4'd1;
//     parameter MUL2 = 4'd2;
//     parameter MUL3 = 4'd3;
//     parameter MUL4 = 4'd4;
//     parameter MUL5 = 4'd5;
//     parameter MUL6 = 4'd6;

//     // Hardware multiplier interface variables
//     reg  signed [17:0] mul_a = 18'sd0;
//     reg  signed [34:0] mul_b = 35'sd0;
//     wire signed [52:0] mul_result; 

//     // Instantiate hardware multiplier IP (18x37)
//     MUL_add3ov3 By_SunY_18x35 ( 
//         .clk(clk_fast), 
//         .a(mul_a), 
//         .b(mul_b), 
//         .p(mul_result) 
//     );

//     always @(posedge clk_fast or negedge rst_n) begin
//         if (!rst_n) begin
//             Time_cnt   <= 4'd1;
//             Task_No    <= 4'd0;
//             U1_S35_Q17 <= 35'sd0;
//             U2_S35_Q17 <= 35'sd0;
//             U3_S35_Q17 <= 35'sd0;
//             mul_a      <= 18'sd0;
//             mul_b      <= 35'sd0;
//         end else begin
//             // TDM State Machine Counter     
// 		    Time_cnt<=Time_cnt+1'b1;
// 		    if(Time_cnt==18|| Time_cnt==1|| Time_cnt==2)  begin  //Time_cnt==0 || 
// 		    	Task_No<=MUL1;
// 		    	clk_10MHz<=1'b1;
// 		    end
// 		    if(Time_cnt==3 || Time_cnt==4|| Time_cnt==5)	begin
// 		    	Task_No<=MUL2;
// 		    	clk_10MHz<=1'b1;
// 		    end
// 		    if(Time_cnt==6 || Time_cnt==7|| Time_cnt==8)	begin
// 		    	Task_No<=MUL3;
// 		    	clk_10MHz<=1'b1;
// 		    end
// 		    if(Time_cnt==9 || Time_cnt==10|| Time_cnt==11)	begin
// 		    	Task_No<=MUL4;
// 		    	clk_10MHz<=1'b0;
// 		    end
// 		    if(Time_cnt==12 || Time_cnt==13|| Time_cnt==14)	begin
// 		    	Task_No<=MUL5;
// 		    	clk_10MHz<=1'b0;
// 		    end
// 		    if(Time_cnt==15 || Time_cnt==16|| Time_cnt==17)	begin
// 		    	Task_No<=MUL6;
// 		    	clk_10MHz<=1'b0;
// 		    end
// 		    if(Time_cnt==18) begin
// 		    	Time_cnt<=1;
// 		    	//Task_No<=MUL1;
// 		    	//clk_10MHz<=1'b1;
// 		    end

//             // TDM Task Execution
//             case (Task_No)
//                 MUL1: begin
//                     mul_a      <= 18'sd10923;  // Constant for 1/3
//                     mul_b      <= sum1_S35_Q17;
//                     U1_S35_Q17 <= mul_result[49:15]; // Shift right by 15 bits
//                 end
                
//                 MUL2: begin
//                     mul_a      <= 18'sd10923;
//                     mul_b      <= sum2_S35_Q17;
//                     U2_S35_Q17 <= mul_result[49:15];
//                 end
                
//                 MUL3: begin
//                     mul_a      <= 18'sd10923;
//                     mul_b      <= sum3_S35_Q17;
//                     U3_S35_Q17 <= mul_result[49:15];
//                 end
//                 MUL4: begin
//                     // Placeholder for future tasks
//                 end 
//                 MUL5: begin
//                     // Placeholder for future tasks
//                 end
//                 MUL6: begin
//                     // Placeholder for future tasks
//                 end
//                 default: begin
//                     // Fallback to enhance synthesis auto-routing stability
//                 end
//             endcase
//         end
//     end
// endmodule
