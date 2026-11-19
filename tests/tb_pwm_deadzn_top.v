`timescale 1ns / 1ps
module tb_pwm_deadzn_top;
    reg clk_ex = 0;
    always #25 clk_ex = ~clk_ex;
    reg rst_n = 0;
    reg [4:0] reference = 0;
    reg [11:0] address = 0;
    reg cs = 1, we_n = 1, oe_n = 1, drive = 0;
    reg [15:0] tx = 0;
    wire [15:0] bus;
    integer errors = 0, n;
    assign bus = drive ? tx : 16'hzzzz;
    vir5_PMSM dut(
        .clk_ex(clk_ex), .rst_n(rst_n), .STM32_NE1_Low(cs),
        .STM32_NWE_Low(we_n), .STM32_NOE_Low(oe_n), .ADDRbus(address), .DATAbus(bus),
        .epwm_1A(reference[0]), .epwm_2A(reference[1]), .epwm_3A(reference[2]),
        .epwm_4A(reference[3]), .epwm_5A(reference[4]),
        .epwm_1B(1'b1), .epwm_2B(1'b1), .epwm_3B(1'b1),
        .epwm_4B(1'b1), .epwm_5B(1'b1),
        .GPIO61(1'b0), .epwm_8A(1'b0), .ePWM_ua_Grid(), .ePWM_ub_Grid());

    task tick;
        begin @(posedge dut.clk_50mhz); #1; end
    endtask
    task expect_gates;
        input [4:0] h, l;
        begin
            if ({dut.E_Hi, dut.D_Hi, dut.C_Hi, dut.B_Hi, dut.A_Hi} !== h || {dut.E_Lo, dut.D_Lo, dut.C_Lo, dut.B_Lo, dut.A_Lo} !== l) begin
                $display("FAIL: full top gates H=%b L=%b expected H=%b L=%b t=%t",
                    {dut.E_Hi, dut.D_Hi, dut.C_Hi, dut.B_Hi, dut.A_Hi}, {dut.E_Lo, dut.D_Lo, dut.C_Lo, dut.B_Lo, dut.A_Lo}, h, l, $time);
                errors = errors + 1;
            end
            if ({dut.u_inverter_de.S3, dut.u_inverter_de.S1,
                 dut.u_inverter.S5, dut.u_inverter.S3, dut.u_inverter.S1} !== {dut.E_Hi, dut.D_Hi, dut.C_Hi, dut.B_Hi, dut.A_Hi} ||
                {dut.u_inverter_de.S4, dut.u_inverter_de.S2,
                 dut.u_inverter.S6, dut.u_inverter.S4, dut.u_inverter.S2} !== {dut.E_Lo, dut.D_Lo, dut.C_Lo, dut.B_Lo, dut.A_Lo}) begin
                $display("FAIL: five-phase inverter gate wiring"); errors = errors + 1;
            end
        end
    endtask
    task write_word;
        input [11:0] addr;
        input [15:0] value;
        begin
            address = addr; tx = value; drive = 1;
            #17; cs = 0; we_n = 0;
            #200; we_n = 1; cs = 1; drive = 0;
            #40;
        end
    endtask
    task read_word;
        input [11:0] addr;
        input [15:0] value;
        begin
            address = addr; #13; cs = 0; oe_n = 0; #101;
            if (bus !== value) begin
                $display("FAIL: FMC read addr=%h got=%h expected=%h", addr, bus, value);
                errors = errors + 1;
            end
            oe_n = 1; cs = 1; #47;
        end
    endtask
    initial begin
        #5000; rst_n = 1;
        repeat (12) tick;
        expect_gates(0, 31);
        write_word(12'h182, 16'd50);
        write_word(12'h200, 16'd640);
        read_word(12'h182, 16'd50);
        read_word(12'h200, 16'd640);
        if (dut.pwm_deadtime_cycles !== 16'd50 || dut.pwm_deadtime_50mhz !== 16'd50) begin
            $display("FAIL: port9 configuration fanout"); errors = errors + 1;
        end
        @(negedge dut.clk_50mhz); reference = 31;
        repeat (3) tick;
        expect_gates(0, 0);
        for (n = 1; n <= 50; n = n + 1) begin
            tick;
            if (n < 50) expect_gates(0, 0);
            else expect_gates(31, 0);
        end
        @(negedge dut.clk_50mhz); reference = 0;
        repeat (3) tick;
        for (n = 0; n < 50; n = n + 1) begin
            expect_gates(0, 0); tick;
        end
        expect_gates(0, 31);
        // Consecutive minimum-timing writes must all be captured by PCI.
        for (n = 0; n < 16; n = n + 1) write_word(12'h182, n);
        read_word(12'h182, 16'd15);
        #500;
        if (dut.pwm_deadtime_50mhz !== 16'd15) begin
            $display("FAIL: configuration CDC latest value"); errors = errors + 1;
        end
        // Existing FPGA-to-STM32 read port 9 still carries half_flux.
        write_word(12'h172, 16'hE000);
        read_word(12'h128, 16'hE000);
        #3; rst_n = 0; #1; expect_gates(0, 0);
        #47; rst_n = 1;
        repeat (40) tick;
        expect_gates(0, 31);
        if (!dut.pwm_deadtime_valid || dut.pwm_deadtime_50mhz !== 16'd15) begin
            $display("FAIL: retained port9 setting not restored after model reset");
            errors = errors + 1;
        end
        if (errors == 0)
            $display("PASS: full top PLL 50 MHz, port9 FMC write/read, five-phase gate fanout and 1 us deadtime");
        else $display("FAIL: %0d errors", errors);
        $finish;
    end
    initial begin #200000; $display("FAIL: top timeout"); $finish; end
endmodule
