`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito
//
// Create Date:   14:49 07/17/2026
// Design Name:   cordic
// Module Name:   CORDIC_STANDALONE.v
// Project Name:  LCL
// Target Device: Spartan-6
// Tool versions: ISE 14.7 
// Description: Full +/-360-degree CORDIC calculator with Q16.16 input precision.
// Revision 0.02 - supports +/-360-degree input angles, quadrant mapping, and outputs sine and cosine in Q16.16 format.

// Verilog Test Fixture created by ISE for module: CORDIC_STANDALONE
////////////////////////////////////////////////////////////////////////////////
// module CORDIC_STANDALONE(
//     input CLOCK,
//     input RESET,
//     input iCall,
//     output oDone,
//     input signed [31:0] iData, // Input angle in exact Q16.16 format
//     output signed [31:0] cos,
//     output signed [31:0] sin,
//     output signed [31:0] q_deg,
//     output signed [31:0] q_y,
//     output signed [31:0] q_x
// );

//     // --- Atan Constants (Q16.16 format) ---
//     reg [31:0] atan [15:0];
    
//     // --- Internal State Management ---
//     reg signed [31:0] x, y, deg;     
//     reg signed [31:0] cos_out, sin_out;
//     reg [7:0] i;
//     reg isDone, busy;

//     // --- Quadrant Mapping Variables ---
//     reg [1:0] quadrant; 
//     reg signed [31:0] normalized_angle;

//     // --- Q16.16 Constant Definitions for Quadrant Boundaries ---
//     localparam signed [31:0] Q_90  = 32'sd5898240;  // 90 * 65536
//     localparam signed [31:0] Q_180 = 32'sd11796480; // 180 * 65536
//     localparam signed [31:0] Q_270 = 32'sd17694720; // 270 * 65536
//     localparam signed [31:0] Q_360 = 32'sd23592960; // 360 * 65536

//     initial begin
//         atan[0]  = 32'd2949120; atan[1]  = 32'd1740992; atan[2]  = 32'd919872;  atan[3]  = 32'd466944;
//         atan[4]  = 32'd234368;  atan[5]  = 32'd117312;  atan[6]  = 32'd58688;   atan[7]  = 32'd29312;
//         atan[8]  = 32'd14656;   atan[9]  = 32'd7360;    atan[10] = 32'd3648;    atan[11] = 32'd1856;
//         atan[12] = 32'd896;     atan[13] = 32'd448;     atan[14] = 32'd256;     atan[15] = 32'd128;
//     end

//     always @(posedge CLOCK or negedge RESET) begin
//         if (!RESET) begin
//             x <= 0; y <= 0; deg <= 0; cos_out <= 0; sin_out <= 0;
//             i <= 0; isDone <= 0; busy <= 0; quadrant <= 0;
//             normalized_angle <= 0;
//         end
//         else begin
//             if (iCall && !busy) begin
//                 busy <= 1'b1;
                
//                 // --- Step 1: Normalize +/- 360 input to [-90, 90] range ---
//                 // Symmetrical quadrant mapping using Q16.16 constants
//                 if (iData >= -Q_90 && iData <= Q_90) begin
//                     quadrant <= 2'b00; // Q1 or Q4
//                     normalized_angle <= iData;
//                 end 
//                 else if (iData > Q_90 && iData <= Q_270) begin
//                     quadrant <= 2'b01; // Q2 or Q3 (Positive)
//                     normalized_angle <= iData - Q_180;
//                 end 
//                 else if (iData < -Q_90 && iData >= -Q_270) begin
//                     quadrant <= 2'b01; // Q2 or Q3 (Negative)
//                     normalized_angle <= iData + Q_180;
//                 end 
//                 else if (iData > Q_270) begin
//                     quadrant <= 2'b00; // Map > 270 back to Q4
//                     normalized_angle <= iData - Q_360;
//                 end 
//                 else begin // iData < -Q_270
//                     quadrant <= 2'b00; // Map < -270 back to Q1
//                     normalized_angle <= iData + Q_360;
//                 end
//             end

//             if (busy) begin
//                 case(i)
//                     0: begin
//                         x <= 32'sd39797; 
//                         y <= 0;
//                         // DIRECT ASSIGNMENT: Input is already Q16.16, do NOT shift left by 16!
//                         deg <= normalized_angle;
//                         i <= i + 1'b1;
//                     end
//                     1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16: begin
//                         if (deg > 0) begin
//                             x <= x - (y >>> (i-1));
//                             y <= y + (x >>> (i-1));
//                             deg <= deg - atan[i-1];
//                         end else begin
//                             x <= x + (y >>> (i-1));
//                             y <= y - (x >>> (i-1));
//                             deg <= deg + atan[i-1];
//                         end
//                         i <= i + 1'b1;
//                     end
//                     17: begin
//                         // --- Step 2: Sign Correction based on Quadrant ---
//                         if (quadrant == 2'b01) begin
//                             // Q2 or Q3: Invert both cos and sin
//                             cos_out <= -x;
//                             sin_out <= -y;
//                         end else begin
//                             // Q1 or Q4: Keep original signs
//                             cos_out <= x;
//                             sin_out <= y;
//                         end
//                         isDone <= 1'b1;
//                         i <= i + 1'b1;
//                     end
//                     18: begin
//                         isDone <= 0;
//                         i <= 0;
//                         busy <= 0;
//                     end
//                 endcase
//             end
//         end
//     end

//     assign oDone = isDone;
//     assign cos = cos_out;
//     assign sin = sin_out;
//     assign q_deg = deg; assign q_y = y; assign q_x = x;
// endmodule

module CORDIC_STANDALONE(
    input CLOCK,
    input RESET,
    input iCall,
    output oDone,
    input  signed [31:0] iData, // Input angle stays in exact Q16.16 format
    output signed [17:0] cos,   // Natively outputs S18_Q17 format
    output signed [17:0] sin,   // Natively outputs S18_Q17 format
    
    // Debug ports
    output signed [31:0] q_deg,
    output signed [31:0] q_y,
    output signed [31:0] q_x
);

    // --- Atan Constants (Q16.16 format) ---
    reg [31:0] atan [15:0];
    
    // --- Internal State Management ---
    reg signed [31:0] x, y, deg;     
    reg signed [17:0] cos_out, sin_out; 
    reg [7:0] i;
    reg isDone, busy;

    // --- Quadrant Mapping & Correction Variables ---
    reg [1:0] quadrant; 
    reg signed [31:0] normalized_angle;
    
    // --- Combinational Sign Correction ---
    wire signed [31:0] corr_x_wire = (quadrant == 2'b01) ? -x : x;
    wire signed [31:0] corr_y_wire = (quadrant == 2'b01) ? -y : y;

    // --- Q16.16 Constant Definitions for Quadrant Boundaries ---
    localparam signed [31:0] Q_90  = 32'sd5898240;  
    localparam signed [31:0] Q_180 = 32'sd11796480; 
    localparam signed [31:0] Q_270 = 32'sd17694720; 
    localparam signed [31:0] Q_360 = 32'sd23592960; 

    initial begin
        atan[0]  = 32'd2949120; atan[1]  = 32'd1740992; atan[2]  = 32'd919872;  atan[3]  = 32'd466944;
        atan[4]  = 32'd234368;  atan[5]  = 32'd117312;  atan[6]  = 32'd58688;   atan[7]  = 32'd29312;
        atan[8]  = 32'd14656;   atan[9]  = 32'd7360;    atan[10] = 32'd3648;    atan[11] = 32'd1856;
        atan[12] = 32'd896;     atan[13] = 32'd448;     atan[14] = 32'd256;     atan[15] = 32'd128;
    end

    always @(posedge CLOCK or negedge RESET) begin
        if (!RESET) begin
            x <= 0; y <= 0; deg <= 0; cos_out <= 0; sin_out <= 0;
            i <= 0; isDone <= 0; busy <= 0; quadrant <= 0;
            normalized_angle <= 0;
        end
        else begin
            if (iCall && !busy) begin
                busy <= 1'b1;
                
                // --- Step 1: Normalize +/- 360 input to [-90, 90] range ---
                if (iData >= -Q_90 && iData <= Q_90) begin
                    quadrant <= 2'b00; 
                    normalized_angle <= iData;
                end 
                else if (iData > Q_90 && iData <= Q_270) begin
                    quadrant <= 2'b01; 
                    normalized_angle <= iData - Q_180;
                end 
                else if (iData < -Q_90 && iData >= -Q_270) begin
                    quadrant <= 2'b01; 
                    normalized_angle <= iData + Q_180;
                end 
                else if (iData > Q_270) begin
                    quadrant <= 2'b00; 
                    normalized_angle <= iData - Q_360;
                end 
                else begin 
                    quadrant <= 2'b00; 
                    normalized_angle <= iData + Q_360;
                end
            end

            if (busy) begin
                case(i)
                    0: begin
                        // 0.607253 * 131072 = 79594 (Internal vectors use Q17 format)
                        x <= 32'sd79594; 
                        y <= 0;
                        deg <= normalized_angle;
                        i <= i + 1'b1;
                    end
                    1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16: begin
                        if (deg > 0) begin
                            x <= x - (y >>> (i-1));
                            y <= y + (x >>> (i-1));
                            deg <= deg - atan[i-1];
                        end else begin
                            x <= x + (y >>> (i-1));
                            y <= y - (x >>> (i-1));
                            deg <= deg + atan[i-1];
                        end
                        i <= i + 1'b1;
                    end
                    17: begin
                        // Max Positive: +131071 (18'h1FFFF)
                        // Max Negative: -131072 (18'h20000)
                        if (corr_x_wire >= 32'sd131071) 
                            cos_out <= 18'h1FFFF;
                        else if (corr_x_wire <= -32'sd131072) 
                            cos_out <= 18'h20000;
                        else 
                            cos_out <= corr_x_wire[17:0];
                            
                        if (corr_y_wire >= 32'sd131071) 
                            sin_out <= 18'h1FFFF;
                        else if (corr_y_wire <= -32'sd131072) 
                            sin_out <= 18'h20000;
                        else 
                            sin_out <= corr_y_wire[17:0];

                        isDone <= 1'b1;
                        i <= i + 1'b1;
                    end
                    18: begin
                        isDone <= 0;
                        i <= 0;
                        busy <= 0;
                    end
                endcase
            end
        end
    end

    assign oDone = isDone;
    assign cos = cos_out;
    assign sin = sin_out;
    
    assign q_deg = deg; 
    assign q_y = y; 
    assign q_x = x;
    
endmodule