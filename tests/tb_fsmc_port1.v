`timescale 1ns / 1ps

// [2026-11-03 16:30 CST] Focused hardware-bus regression: PCI read/write port 1 only.
module tb_fsmc_port1;
    reg clk = 1'b0;
    always #10 clk = ~clk;

    // STM32 address argument in half-word units: write 0x200, read 0x000.
    reg [11:0] addr = 12'h000;
    reg ne1_n = 1'b1;
    reg nwe_n = 1'b1;
    reg noe_n = 1'b1;
    reg mcu_drive = 1'b0;
    reg [15:0] mcu_tx = 16'h0000;
    wire [15:0] bus;
    wire [15:0] port1_write_data;
    integer errors = 0;
    integer i;
    reg [15:0] pattern;

    assign bus = mcu_drive ? mcu_tx : 16'hzzzz;

    PCI dut (
        .sub_clk(clk),
        .addrbus(addr),
        .STM32_Databus(bus),
        .STM32_NWE_Low(nwe_n),
        .STM32_NOE_Low(noe_n),
        .STM32_NE1_Low(ne1_n),
        .STM32toFPGA_Signal_1(port1_write_data),
        .STM32toFPGA_Signal_2(),
        .STM32toFPGA_Signal_3(),
        .STM32toFPGA_Signal_4(),
        .STM32toFPGA_Signal_5(),
        .STM32toFPGA_Signal_6(),
        .STM32toFPGA_Signal_7(),
        .STM32toFPGA_Signal_8(),
        .STM32toFPGA_Signal_9(),
        .STM32toFPGA_Signal_10(),
        .STM32toFPGA_Signal_11(),
        .STM32toFPGA_Signal_12(),
        .STM32toFPGA_Signal_13(),
        .STM32toFPGA_Signal_14(),
        .STM32toFPGA_Signal_15(),
        .STM32toFPGA_Signal_16(),
        .FPGAtoSTM32_Signal_1(port1_write_data),
        .FPGAtoSTM32_Signal_2(16'h0000),
        .FPGAtoSTM32_Signal_3(16'h0000),
        .FPGAtoSTM32_Signal_4(16'h0000),
        .FPGAtoSTM32_Signal_5(16'h0000),
        .FPGAtoSTM32_Signal_6(16'h0000),
        .FPGAtoSTM32_Signal_7(16'h0000),
        .FPGAtoSTM32_Signal_8(16'h0000),
        .FPGAtoSTM32_Signal_9(16'h0000),
        .FPGAtoSTM32_Signal_10(16'h0000),
        .FPGAtoSTM32_Signal_11(16'h0000),
        .FPGAtoSTM32_Signal_12(16'h0000),
        .FPGAtoSTM32_Signal_13(16'h0000),
        .FPGAtoSTM32_Signal_14(16'h0000),
        .FPGAtoSTM32_Signal_15(16'h0000),
        .FPGAtoSTM32_Signal_16(16'h0000),
        .FPGAtoSTM32_Signal_17(16'h0000),
        .FPGAtoSTM32_Signal_18(16'h0000)
    );

    task check_read;
        input [15:0] expected;
        begin
            addr = 12'h000;
            ne1_n = 1'b1;
            nwe_n = 1'b1;
            noe_n = 1'b1;
            mcu_drive = 1'b0;
            #24;
            ne1_n = 1'b0;
            #4;
            noe_n = 1'b0;
            #100;
            if (bus !== expected) begin
                $display("FAIL: port1 read actual=%h expected=%h t=%0t", bus, expected, $time);
                errors = errors + 1;
            end
            noe_n = 1'b1;
            #4;
            ne1_n = 1'b1;
            #24;
            if (bus !== 16'hzzzz) begin
                $display("FAIL: port1 bus not high impedance after read, actual=%h t=%0t", bus, $time);
                errors = errors + 1;
            end
        end
    endtask

    task write_read;
        input [15:0] value;
        input integer phase_delay;
        begin
            #(phase_delay);
            ne1_n = 1'b1;
            nwe_n = 1'b1;
            noe_n = 1'b1;
            mcu_drive = 1'b0;
            addr = 12'h200;
            #24;
            ne1_n = 1'b0;
            #4;
            mcu_tx = value;
            mcu_drive = 1'b1;
            #4;
            nwe_n = 1'b0;
            #200;
            nwe_n = 1'b1;
            #24;
            mcu_drive = 1'b0;
            ne1_n = 1'b1;
            #32;
            if (port1_write_data !== value) begin
                $display("FAIL: port1 write capture actual=%h expected=%h t=%0t", port1_write_data, value, $time);
                errors = errors + 1;
            end
            check_read(value);
        end
    endtask

    initial begin
        #100;
        check_read(16'h0000);

        // Port 1 only: distinct words, both data polarities, and all walking bits.
        write_read(16'h5aa5, 0);
        write_read(16'ha55a, 7);
        write_read(16'h0000, 13);
        write_read(16'hffff, 19);
        for (i = 0; i < 16; i = i + 1) begin
            pattern = 16'h0001 << i;
            write_read(pattern, (i * 7) % 20);
            write_read(~pattern, (i * 11) % 20);
        end

        if (errors == 0)
            $display("PASS: FSMC port1 loopback: read offset 0x000, write offset 0x200, 36 patterns, 16-bit bidirectional bus");
        else
            $display("FAIL: FSMC port1 loopback: %0d errors", errors);
        $finish;
    end

    initial begin
        #200000;
        $display("FAIL: FSMC port1 regression timeout");
        $finish;
    end
endmodule
