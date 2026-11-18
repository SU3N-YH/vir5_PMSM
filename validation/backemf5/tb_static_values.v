`timescale 1ns / 1ps
// Bench values for FMC port 6. Uses the actual single generated 18x18 IP.
module tb_static_values;
reg clk = 0;
reg rst_n = 0;
reg signed [15:0] angle = 0, speed = 0, flux = 0;
wire signed [34:0] e [0:4];
wire signed [15:0] observe;
integer row = 0;
BackEMF uut (
    .clk(clk), .rst_n(rst_n), .epos_S16_360(angle),
    .eOMG_S16_Q2(speed), .Phir_Half_S16_Q15(flux),
    .eA_S35_Q17(e[0]), .eB_S35_Q17(e[1]), .eC_S35_Q17(e[2]),
    .eD_S35_Q17(e[3]), .eE_S35_Q17(e[4]), .eA_STM32_S16(observe)
);
always #2.778 clk = ~clk;
task sample;
    input signed [15:0] a, w, f;
    begin
        @(negedge clk);
        angle = a; speed = w; flux = f;
        repeat (180) @(negedge clk);
        row = row + 1;
        $display("STATIC,%0d,%0d,%0d,%0d,%0d,0x%04h,%0d,%0d,%0d,%0d,%0d",
                 row, angle, speed, flux, observe, observe,
                 $signed(e[0]),$signed(e[1]),$signed(e[2]),$signed(e[3]),$signed(e[4]));
    end
endtask
initial begin
    repeat (4) @(negedge clk);
    rst_n = 1;
    sample(0,400,16384);
    sample(4096,400,16384);
    sample(8192,400,16384);
    sample(16384,400,16384);
    sample(24576,400,16384);
    sample(-8192,400,16384);
    sample(8192,-400,16384);
    sample(8192,800,16384);
    sample(8192,400,8192);
    sample(8192,0,16384);
    sample(8192,400,0);
    $display("PASS: static observation values generated with actual single 18x18 IP");
    $finish;
end
endmodule
