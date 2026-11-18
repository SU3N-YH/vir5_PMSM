`timescale 1ns / 1ps
module tb_fsmc;
reg clk = 0;
always #10 clk = ~clk;
reg [11:0] addr = 0;
reg cs = 1, we_n = 1, oe_n = 1;
reg drive = 0;
reg [15:0] tx = 0;
wire [15:0] bus;
assign bus = drive ? tx : 16'hzzzz;
wire [15:0] outputs [1:16];
reg [11:0] wa [1:16];
reg [11:0] ra [1:18];
reg [15:0] expected [1:16];
reg [15:0] scratch = 0;
integer errors = 0, captures = 0;
integer i, j, phase, a, before_capture;
reg [15:0] pattern, value;
PCI dut (
.sub_clk(clk), .addrbus(addr), .STM32_Databus(bus),
.STM32_NE1_Low(cs), .STM32_NWE_Low(we_n), .STM32_NOE_Low(oe_n),
.STM32toFPGA_Signal_1(outputs[1]),
.STM32toFPGA_Signal_2(outputs[2]),
.STM32toFPGA_Signal_3(outputs[3]),
.STM32toFPGA_Signal_4(outputs[4]),
.STM32toFPGA_Signal_5(outputs[5]),
.STM32toFPGA_Signal_6(outputs[6]),
.STM32toFPGA_Signal_7(outputs[7]),
.STM32toFPGA_Signal_8(outputs[8]),
.STM32toFPGA_Signal_9(outputs[9]),
.STM32toFPGA_Signal_10(outputs[10]),
.STM32toFPGA_Signal_11(outputs[11]),
.STM32toFPGA_Signal_12(outputs[12]),
.STM32toFPGA_Signal_13(outputs[13]),
.STM32toFPGA_Signal_14(outputs[14]),
.STM32toFPGA_Signal_15(outputs[15]),
.STM32toFPGA_Signal_16(outputs[16]),
.FPGAtoSTM32_Signal_1(outputs[1]),
.FPGAtoSTM32_Signal_2(outputs[2]),
.FPGAtoSTM32_Signal_3(outputs[3]),
.FPGAtoSTM32_Signal_4(outputs[4]),
.FPGAtoSTM32_Signal_5(outputs[5]),
.FPGAtoSTM32_Signal_6(16'h8006),
.FPGAtoSTM32_Signal_7(16'h8007),
.FPGAtoSTM32_Signal_8(16'h8008),
.FPGAtoSTM32_Signal_9(16'h8009),
.FPGAtoSTM32_Signal_10(16'h800a),
.FPGAtoSTM32_Signal_11(16'h800b),
.FPGAtoSTM32_Signal_12(16'h800c),
.FPGAtoSTM32_Signal_13(16'h800d),
.FPGAtoSTM32_Signal_14(16'h800e),
.FPGAtoSTM32_Signal_15(16'h800f),
.FPGAtoSTM32_Signal_16(16'h8010),
.FPGAtoSTM32_Signal_17(16'h8011),
.FPGAtoSTM32_Signal_18(16'h8012)
);
always @(posedge clk)
    if (dut.write_sync && !dut.write_seen && dut.write_active) captures = captures + 1;

task check;
    input [15:0] actual, wanted;
    begin
        if (actual !== wanted) begin
            $display("FAIL: t=%0t addr=%h actual=%h expected=%h", $time, addr, actual, wanted);
            errors = errors + 1;
        end
    end
endtask

task read_word;
    input [11:0] address;
    input [15:0] wanted;
    begin
        addr = address; cs = 0; we_n = 1; oe_n = 1;
        #46; oe_n = 0;
        #222; check(bus, wanted);
        oe_n = 1; cs = 1;
        #1; check(bus, 16'hzzzz);
        #45;
    end
endtask

task write_word;
    input [11:0] address;
    input [15:0] data;
    input integer skew;
    begin
        #skew;
        addr = address; cs = 0; oe_n = 1; we_n = 1;
        #46; drive = 1; tx = data; we_n = 0;
        #200; check(bus, data);
        we_n = 1; cs = 1; drive = 0;
        // Address/data removed immediately: delayed captures must not occur.
        addr = 12'hffe; tx = 16'hdead;
        #46;
    end
endtask

initial begin
    wa[1] = 12'h200; expected[1] = 0;
    wa[2] = 12'h114; expected[2] = 0;
    wa[3] = 12'h136; expected[3] = 0;
    wa[4] = 12'h078; expected[4] = 0;
    wa[5] = 12'h13a; expected[5] = 0;
    wa[6] = 12'h17a; expected[6] = 0;
    wa[7] = 12'h05c; expected[7] = 0;
    wa[8] = 12'h172; expected[8] = 0;
    wa[9] = 12'h182; expected[9] = 0;
    wa[10] = 12'h058; expected[10] = 0;
    wa[11] = 12'h1a8; expected[11] = 0;
    wa[12] = 12'h068; expected[12] = 0;
    wa[13] = 12'h1c3; expected[13] = 0;
    wa[14] = 12'h1d2; expected[14] = 0;
    wa[15] = 12'h0c2; expected[15] = 0;
    wa[16] = 12'h1e6; expected[16] = 0;
    ra[1] = 12'h000;
    ra[2] = 12'h132;
    ra[3] = 12'h162;
    ra[4] = 12'h088;
    ra[5] = 12'h0a2;
    ra[6] = 12'h1b6;
    ra[7] = 12'h0c4;
    ra[8] = 12'h118;
    ra[9] = 12'h128;
    ra[10] = 12'h076;
    ra[11] = 12'h19a;
    ra[12] = 12'h096;
    ra[13] = 12'h018;
    ra[14] = 12'h13c;
    ra[15] = 12'h01c;
    ra[16] = 12'h17e;
    ra[17] = 12'h1aa;
    ra[18] = 12'h1ca;
    #300;
    check(bus,16'hzzzz);
    read_word(12'hff0,16'hf723);
    // Sweep the entire 20 ns FPGA clock phase, all registers, signed patterns.
    for (phase = 0; phase < 20; phase = phase + 1) begin
        for (i = 1; i <= 16; i = i + 1) begin
            pattern = (16'h8000 | (phase << 5) | i);
            before_capture = captures;
            write_word(wa[i],pattern,phase);
            expected[i] = pattern;
            if (captures != before_capture + 1) begin
                $display("FAIL: strobe capture count phase=%d register=%d",phase,i);
                errors = errors + 1;
            end
            for (j = 1; j <= 16; j = j + 1) check(outputs[j],expected[j]);
            read_word(wa[i],pattern);
        end
    end
    // Walking-one and walking-zero data-line patterns on the scratch word.
    for (i = 0; i < 16; i = i + 1) begin
        pattern = 16'h1 << i;
        write_word(12'hcba,pattern,1); read_word(12'hcba,pattern);
        pattern = ~pattern;
        write_word(12'hcba,pattern,3); read_word(12'hcba,pattern);
    end
    scratch = pattern;
    // Back-to-back writes with NE held low: only 46 ns of NWE-high setup
    // separates strobes. No idle transaction may be required to re-arm.
    for (phase = 0; phase < 20; phase = phase + 1) begin
        #1;
        cs = 0; oe_n = 1; we_n = 1;
        for (i = 1; i <= 16; i = i + 1) begin
            addr = wa[i];
            #46; tx = (16'h4000 | (phase << 5) | i); drive = 1; we_n = 0;
            #200;
            we_n = 1; drive = 0;
            expected[i] = tx;
            check(outputs[i],expected[i]);
        end
        cs = 1; #80;
    end
    // Read mux must follow changing addresses even when NE and NOE stay low.
    cs = 0; oe_n = 0; we_n = 1;
    for (i = 1; i <= 18; i = i + 1) begin
        addr = ra[i]; #222;
        if (i <= 5) check(bus,expected[i]);
        else check(bus,i-1);
    end
    cs = 1; #1; check(bus,16'hzzzz); oe_n = 1; #46;
    // Unselected write, and invalid simultaneous read/write, cannot alter state.
    before_capture = captures;
    addr = wa[1]; drive = 1; tx = 16'hdead; cs = 1; we_n = 0;
    #222; we_n = 1; drive = 0; #46;
    cs = 0; we_n = 0; oe_n = 0;
    #222; check(bus,16'hzzzz);
    we_n = 1; oe_n = 1; cs = 1; #80;
    if (captures != before_capture) begin $display("FAIL: invalid write captured"); errors = errors+1; end
    check(outputs[1],expected[1]);
    // Exhaust every decoded/undefined address (also catches alias collisions).
    for (a = 0; a < 4096; a = a + 1) begin
        value = 0;
        for (j = 1; j <= 18; j = j + 1) if (a == ra[j]) begin
            if (j <= 5) value = expected[j];
            else value = j-1;
        end
        for (j = 1; j <= 16; j = j + 1) if (a == wa[j]) value = expected[j];
        if (a == 12'hcba) value = scratch;
        if (a == 12'hff0) value = 16'hf723;
        read_word(a,value);
    end
    if (errors == 0) $display("PASS: FSMC complete: 4096 addresses, 18 read signals, 16 write registers, 20 clock phases, tri-state and invalid cycles");
    else $display("FAIL: %0d errors",errors);
    $finish;
end
initial begin #5000000; $display("FAIL: timeout"); $finish; end
endmodule
