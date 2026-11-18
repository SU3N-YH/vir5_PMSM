`timescale 1ns / 1ps
// [2026-11-16 19:30 CST] Add continuous port 6 checks at 180 MHz.
// Exercise the actual PCI -> BackEMF -> asynchronous port 6 path at 180 MHz.
module tb_backemf_port6;
reg clk=0, rst_n=0;
always #2.778 clk=~clk;
reg [11:0] address=0;
reg ne_n=1, we_n=1, oe_n=1, drive=0;
reg [15:0] tx=0;
wire [15:0] bus, angle, speed, flux, observe;
reg check_stable=0;
reg [15:0] expected=0;
integer errors=0, reads=0, k;
assign bus=drive ? tx : 16'hzzzz;
PCI pci (
    .sub_clk(clk), .addrbus(address), .STM32_Databus(bus),
    .STM32_NWE_Low(we_n), .STM32_NOE_Low(oe_n), .STM32_NE1_Low(ne_n),
    .STM32toFPGA_Signal_6(angle), .STM32toFPGA_Signal_7(speed),
    .STM32toFPGA_Signal_8(flux), .FPGAtoSTM32_Signal_6(observe)
);
BackEMF emf (
    .clk(clk), .rst_n(rst_n), .epos_S16_360(angle),
    .eOMG_S16_Q2(speed), .Phir_Half_S16_Q15(flux),
    .eA_S35_Q17(), .eB_S35_Q17(), .eC_S35_Q17(),
    .eD_S35_Q17(), .eE_S35_Q17(), .eA_STM32_S16(observe)
);
always @(posedge clk) begin
    #0.001;
    if (check_stable && observe !== expected) begin
        $display("FAIL: port6 source jumped actual=%h expected=%h", observe, expected);
        errors=errors+1;
    end
end
task write_word;
    input [11:0] target;
    input [15:0] value;
    begin
        address=target; drive=1; tx=value;
        #17; ne_n=0; we_n=0;
        #241; we_n=1; ne_n=1;
        #17; drive=0;
        #47;
    end
endtask
task read_port6;
    begin
        address=12'h1b6;
        #13; ne_n=0;
        #7; oe_n=0;
        #101;
        if (bus !== expected) begin
            $display("FAIL: port6 bus actual=%h expected=%h", bus, expected);
            errors=errors+1;
        end
        reads=reads+1;
        oe_n=1;
        #7; ne_n=1;
        #29;
        if (bus !== 16'hzzzz) begin
            $display("FAIL: port6 bus not released");
            errors=errors+1;
        end
    end
endtask
initial begin
    #200; rst_n=1;
    // sin(56.25 deg), negative flux => +85 Q2 codes = 0x0055.
    write_word(12'h17a, 16'd5120);
    write_word(12'h05c, 16'd400);
    write_word(12'h172, -16'sd8192);
    #2000; expected=16'h0055; check_stable=1;
    for (k=0; k<1000; k=k+1) begin
        read_port6;
        // Repeated STM32 writes of unchanged data must not clear results.
        if ((k%31)==0) write_word(12'h17a, 16'd5120);
        #(k%17+1);
    end
    check_stable=0;
    write_word(12'h05c, 16'd0);
    #2000; expected=0; check_stable=1;
    repeat(20) read_port6;
    check_stable=0;
    write_word(12'h05c, 16'd400);
    #2000; expected=16'h0055; check_stable=1;
    repeat(100) read_port6;
    check_stable=0;
    rst_n=0;
    #47; rst_n=1;
    #2000; check_stable=1;
    repeat(100) read_port6;
    if (errors==0) $display("PASS: BackEMF port6 reads=%0d stable=0055, zero-speed and reset recovery", reads);
    else $display("FAIL: BackEMF port6 errors=%0d", errors);
    $finish;
end
initial begin
    #1000000;
    $display("FAIL: BackEMF port6 timeout");
    $finish;
end
endmodule
