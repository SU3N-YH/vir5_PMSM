`timescale 1ns / 1ps
// [2026-11-16 19:30 CST] Model BackEMF_CORDIC180 for completion-slot coverage.
// Test-only alternative to the real core: 7..53-cycle calculations move
// oDone through the multiply slots and across the input preparation slots.
module BackEMF_CORDIC180 (
    input CLOCK, RESET, iCall,
    output reg oDone,
    input signed [31:0] iData,
    output wire signed [17:0] cos,
    output reg signed [17:0] sin,
    output wire signed [31:0] q_deg, q_y, q_x
);
integer remaining, batch, quantized;
reg busy;
reg signed [31:0] angle;
real x, term, total;
integer n;
assign cos = 0;
assign q_deg = 0;
assign q_y = 0;
assign q_x = 0;
always @(posedge CLOCK or negedge RESET) begin
    if (!RESET) begin
        oDone <= 0;
        sin <= 0;
        remaining <= 0;
        batch <= 0;
        busy <= 0;
        angle <= 0;
    end else begin
        oDone <= 0;
        if (iCall && !busy) begin
            angle <= iData;
            remaining <= 7 + ((batch * 11) % 47);
            batch <= batch + 1;
            busy <= 1;
        end
        if (busy) begin
            if (oDone)
                busy <= 0;
            else if (remaining > 1)
                remaining <= remaining - 1;
            else begin
                x = $itor(angle) / 65536.0 * 3.141592653589793 / 180.0;
                while (x > 3.141592653589793) x = x - 6.283185307179586;
                while (x < -3.141592653589793) x = x + 6.283185307179586;
                term = x;
                total = x;
                for (n = 1; n <= 12; n = n + 1) begin
                    term = -term*x*x / ((2*n)*(2*n+1));
                    total = total + term;
                end
                quantized = $rtoi(total * 131072.0);
                if (quantized > 131071) quantized = 131071;
                if (quantized < -131072) quantized = -131072;
                sin <= quantized;
                oDone <= 1;
            end
        end
    end
end
endmodule
