`timescale 1ns / 1ps
// [2026-11-16 19:30 CST] Verify bit-exact high-speed CORDIC results.
// Compare both sine and cosine bit for bit against the unchanged legacy
// algorithm, including quadrant boundaries, saturation and fractional input.
module tb_cordic180_equivalence;
reg clk=0, rst_n=0, call=0;
always #2.778 clk=~clk;
reg signed [31:0] angle=0;
wire old_done, fast_done;
wire signed [17:0] old_cos, old_sin, fast_cos, fast_sin;
reg signed [17:0] expected_cos, expected_sin;
integer errors=0, samples=0, n;
reg got_reference=0;
CORDIC_STANDALONE legacy (
    .CLOCK(clk), .RESET(rst_n), .iCall(call), .oDone(old_done),
    .iData(angle), .cos(old_cos), .sin(old_sin), .q_deg(), .q_y(), .q_x()
);
BackEMF_CORDIC180 fast (
    .CLOCK(clk), .RESET(rst_n), .iCall(call), .oDone(fast_done),
    .iData(angle), .cos(fast_cos), .sin(fast_sin), .q_deg(), .q_y(), .q_x()
);
always @(posedge clk) begin
    if (!rst_n) got_reference=0;
    else begin
        if (call) got_reference=0;
        if (old_done) begin
            expected_cos=old_cos; expected_sin=old_sin;
            got_reference=1;
        end
        if (fast_done) begin
            samples=samples+1;
            if (!got_reference || fast_cos !== expected_cos || fast_sin !== expected_sin) begin
                $display("FAIL: CORDIC equivalence input=%0d cos=%0d/%0d sin=%0d/%0d",
                         angle, fast_cos, expected_cos, fast_sin, expected_sin);
                errors=errors+1;
            end
        end
    end
end
task calculate;
    input signed [31:0] value;
    begin
        @(negedge clk); angle=value; call=1;
        @(negedge clk); call=0;
        // Input must be sampled once. Change it while calculation is busy.
        angle=32'sd1234567;
        repeat(42) @(negedge clk);
    end
endtask
initial begin
    repeat(24) @(negedge clk); rst_n=1;
    for(n=-720;n<=720;n=n+1) calculate(n*32768);
    for(n=-720;n<720;n=n+1) calculate(n*32768+12345);
    for(n=-4;n<=4;n=n+1) begin
        calculate(n*5898240);
        if(n>-4) calculate(n*5898240-1);
        if(n<4) calculate(n*5898240+1);
    end
    if(errors==0) $display("PASS: CORDIC180 bit-exact sine/cosine samples=%0d", samples);
    else $display("FAIL: CORDIC180 equivalence errors=%0d", errors);
    $finish;
end
initial begin
    #1000000;
    $display("FAIL: CORDIC180 equivalence timeout");
    $finish;
end
endmodule
