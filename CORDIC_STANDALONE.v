`timescale 1ns / 1ps
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

// [2026-11-16 19:30 CST] Add a BackEMF-specific 180 MHz core.
// Keep the legacy core above unchanged for
// other clients. Each rotation uses a SHIFT clock followed by an ADD clock;
// normalization and final sign correction/saturation are also separate.
// Input contract: signed Q16.16 in [-360,+360], output signed S18_Q17.
// Busy calls are ignored. oDone is a one-clock pulse with stable outputs.
module BackEMF_CORDIC180 (
    input CLOCK, RESET, iCall,
    output reg oDone,
    input signed [31:0] iData,
    output reg signed [17:0] cos, sin,
    output wire signed [31:0] q_deg, q_y, q_x
);
localparam [3:0] IDLE=0, OFFSET=1, NORMALIZE=2, INIT=3,
                 SHIFT=4, ADD=5, CORRECT=6, PUBLISH=7, NEGATE=8;
localparam signed [31:0] Q90=32'sd5898240, Q180=32'sd11796480,
                         Q270=32'sd17694720, Q360=32'sd23592960;
reg [3:0] state;
reg [3:0] iteration;
reg signed [31:0] angle_sample, angle_bias;
reg in_middle, in_positive_half, in_negative_half, above_270;
reg invert;
reg signed [23:0] deg, atan_step;
// A 19-bit vector has a guard bit beyond +/-131072. The 16 original
// rotations stay within this range; retain every Q17 fractional bit.
reg signed [18:0] x, y, shifted_x, shifted_y, corrected_x, corrected_y;
reg positive;
assign q_deg = {{8{deg[23]}}, deg};
assign q_x = {{13{x[18]}}, x};
assign q_y = {{13{y[18]}}, y};

function signed [23:0] atan_value;
    input [3:0] index;
    begin
        case (index)
             0: atan_value=24'sd2949120;  1: atan_value=24'sd1740992;
             2: atan_value=24'sd919872;   3: atan_value=24'sd466944;
             4: atan_value=24'sd234368;   5: atan_value=24'sd117312;
             6: atan_value=24'sd58688;    7: atan_value=24'sd29312;
             8: atan_value=24'sd14656;    9: atan_value=24'sd7360;
            10: atan_value=24'sd3648;    11: atan_value=24'sd1856;
            12: atan_value=24'sd896;     13: atan_value=24'sd448;
            14: atan_value=24'sd256;     15: atan_value=24'sd128;
        endcase
    end
endfunction

function signed [17:0] saturate_q17;
    input signed [18:0] value;
    begin
        if (value > 19'sd131071) saturate_q17=18'sh1ffff;
        else if (value < -19'sd131072) saturate_q17=18'sh20000;
        else saturate_q17=value[17:0];
    end
endfunction

always @(posedge CLOCK or negedge RESET) begin
    if (!RESET) begin
        state <= IDLE; iteration <= 0; oDone <= 0;
        angle_sample <= 0; angle_bias <= 0;
        in_middle <= 0; in_positive_half <= 0;
        in_negative_half <= 0; above_270 <= 0; invert <= 0;
        deg <= 0; atan_step <= 0; x <= 0; y <= 0;
        shifted_x <= 0; shifted_y <= 0; positive <= 0;
        corrected_x <= 0; corrected_y <= 0; cos <= 0; sin <= 0;
    end else begin
        oDone <= 0;
        case (state)
            IDLE: if (iCall) begin
                angle_sample <= iData;
                in_middle <= (iData >= -Q90 && iData <= Q90);
                in_positive_half <= (iData > Q90 && iData <= Q270);
                in_negative_half <= (iData < -Q90 && iData >= -Q270);
                above_270 <= (iData > Q270);
                state <= OFFSET;
            end
            OFFSET: begin
                invert <= in_positive_half || in_negative_half;
                if (in_middle) angle_bias <= 0;
                else if (in_positive_half) angle_bias <= -Q180;
                else if (in_negative_half) angle_bias <= Q180;
                else if (above_270) angle_bias <= -Q360;
                else angle_bias <= Q360;
                state <= NORMALIZE;
            end
            NORMALIZE: begin
                deg <= angle_sample + angle_bias;
                state <= INIT;
            end
            INIT: begin
                x <= 19'sd79594; y <= 0; iteration <= 0;
                state <= SHIFT;
            end
            SHIFT: begin
                shifted_x <= x >>> iteration;
                shifted_y <= y >>> iteration;
                positive <= (deg > 24'sd0);
                atan_step <= atan_value(iteration);
                state <= ADD;
            end
            ADD: begin
                if (positive) begin
                    x <= x - shifted_y; y <= y + shifted_x;
                    deg <= deg - atan_step;
                end else begin
                    x <= x + shifted_y; y <= y - shifted_x;
                    deg <= deg + atan_step;
                end
                iteration <= iteration + 1'b1;
                state <= (iteration == 4'd15) ? CORRECT : SHIFT;
            end
            CORRECT: begin
                // Split XOR and carry for sign correction.
                corrected_x <= x ^ {19{invert}};
                corrected_y <= y ^ {19{invert}};
                state <= NEGATE;
            end
            NEGATE: begin
                corrected_x <= corrected_x + $signed({18'd0,invert});
                corrected_y <= corrected_y + $signed({18'd0,invert});
                state <= PUBLISH;
            end
            PUBLISH: begin
                cos <= saturate_q17(corrected_x);
                sin <= saturate_q17(corrected_y);
                oDone <= 1;
                state <= IDLE;
            end
            default: state <= IDLE;
        endcase
    end
end
endmodule
