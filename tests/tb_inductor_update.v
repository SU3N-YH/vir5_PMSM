`timescale 1ns / 1ps

// Uses the generated structural IP netlists, not behavioral multiplier stand-ins.
module tb_inductor_update;
    reg clk = 0;
    always #2.777778 clk = ~clk;
    reg clk_ex = 0;
    always #25 clk_ex = ~clk_ex;

    reg signed [17:0] mul_a = 0;
    reg signed [34:0] mul_b = 0;
    wire signed [52:0] product_r, product_i;
    reg signed [52:0] expected_now, expected_previous;
    integer checked = 0;
    integer index;
    integer errors = 0;
    mul18x35_1225_BySunY multiplier_r (.clk(clk), .a(mul_a), .b(mul_b), .p(product_r));
    mul_inductor_2 multiplier_i (.clk(clk), .a(mul_a), .b(mul_b), .p(product_i));

    reg rst_n = 0;
    wire signed [34:0] ia, ib, ic, id, ie;
    reg signed [34:0] start_a, start_b, start_c, start_d, start_e;
    Inductor model (
        .clk_180MHz(clk), .rst_n(rst_n),
        .UAO_P_S35(35'sd65536), .UBO_P_S35(-35'sd131072), .UCO_P_S35(35'sd196608),
        .UDO_P_S35(-35'sd262144), .UEO_P_S35(35'sd327680),
        .UAO_N_S35(35'd0), .UBO_N_S35(35'd0), .UCO_N_S35(35'd0),
        .UDO_N_S35(35'd0), .UEO_N_S35(35'd0),
        .I_OV_20LinuH_Q18(16'd256), .Res_S16_Q12(16'd0),
        .x_1(ia), .x_2(ib), .x_3(ic), .x_4(id), .x_5(ie),
        .Curt1_L15(), .Curt1_H15(), .Curt2_L15(), .Curt2_H15(),
        .Curt3_L15(), .Curt3_H15(), .Curt4_L15(), .Curt4_H15(),
        .Curt5_L15(), .Curt5_H15()
    );

    reg [11:0] addr = 0;
    reg cs = 1;
    reg oe_n = 1;
    wire [15:0] data;
    reg pwm4a = 1, pwm4b = 0, pwm5a = 0, pwm5b = 1;
    localparam [34:0] D_STATE = 35'h512345678;
    localparam [34:0] E_STATE = 35'h1abcdef10;
    vir5_PMSM dut (
        .STM32_NE1_Low(cs), .clk_ex(clk_ex), .DATAbus(data), .STM32_RNW(1'b1),
        .STM32_NWE_Low(1'b1), .STM32_NOE_Low(oe_n), .ADDRbus(addr),
        .epwm_1A(1'b1), .epwm_1B(1'b0), .epwm_2A(1'b0), .epwm_2B(1'b1),
        .epwm_3A(1'b1), .epwm_3B(1'b0),
        .epwm_4A(pwm4a), .epwm_4B(pwm4b), .epwm_5A(pwm5a), .epwm_5B(pwm5b),
        .rst_n(rst_n), .epwm_7A(1'b0), .epwm_8A(1'b1),
        .ePWM_ua_Grid(), .ePWM_ub_Grid()
    );

    task read_word;
        input [11:0] address;
        input [15:0] expected;
        begin
            addr = address;
            cs = 0;
            oe_n = 0;
            #2;
            if (data !== expected) begin
                $display("FAIL: STM32 read %h got %h expected %h", address, data, expected);
                errors = errors + 1;
            end
            cs = 1;
            oe_n = 1;
            #2;
            if (data !== 16'hzzzz) begin
                $display("FAIL: STM32 bus was not released");
                errors = errors + 1;
            end
        end
    endtask

    initial begin
        // Wait past the Xilinx global startup reset and PLL startup.
        #300;
        for (index = 0; index < 140; index = index + 1) begin
            @(negedge clk);
            case (index)
                0: begin mul_a = 0; mul_b = 0; end
                1: begin mul_a = 18'sd1; mul_b = -35'sd1; end
                2: begin mul_a = -18'sd1; mul_b = 35'sd1; end
                3: begin mul_a = 18'sh20000; mul_b = 35'sh400000000; end
                4: begin mul_a = 18'sh1ffff; mul_b = 35'sh3ffffffff; end
                5: begin mul_a = 18'sh20000; mul_b = 35'sh3ffffffff; end
                6: begin mul_a = 18'sh1ffff; mul_b = 35'sh400000000; end
                default: begin mul_a = $random; mul_b = {$random, $random}; end
            endcase
            expected_now = mul_a * mul_b;
            @(posedge clk);
            #1;
            if (index > 0) begin
                if (product_r !== expected_previous || product_i !== expected_previous) begin
                    $display("FAIL: multiplier vector %0d R=%h I=%h expected=%h",
                             index - 1, product_r, product_i, expected_previous);
                    errors = errors + 1;
                end
                checked = checked + 1;
            end
            expected_previous = expected_now;
        end
        $display("Checked %0d signed/boundary/random vectors for both two-stage IPs", checked);

        @(negedge clk);
        rst_n = 1;
        repeat (18 * 12) @(posedge clk);
        #1;
        start_a = ia; start_b = ib; start_c = ic; start_d = id; start_e = ie;
        repeat (18 * 10) @(posedge clk);
        #1;
        // R=0: each 18-cycle frame adds (2 * applied voltage * 256) >> 10.
        if ((ia - start_a) !== 35'sd327680 || (ib - start_b) !== -35'sd655360 ||
            (ic - start_c) !== 35'sd983040 || (id - start_d) !== -35'sd1310720 ||
            (ie - start_e) !== 35'sd1638400) begin
            $display("FAIL: phase increments A=%d B=%d C=%d D=%d E=%d",
                     ia-start_a, ib-start_b, ic-start_c, id-start_d, ie-start_e);
            errors = errors + 1;
        end else
            $display("PASS: five distinct phase slopes, signs and 18-cycle frame cadence");

        // Isolate the newly connected bridge legs from unrelated unfinished models.
        force dut.dc_voltage_q5 = 16'sd640;
        force dut.neutral_voltage_q17 = 35'd0;
        #1000;
        if ($signed(dut.phase_d_voltage_q17) <= 0 || $signed(dut.phase_e_voltage_q17) >= 0 ||
            (^dut.phase_d_voltage_q17) === 1'bx || (^dut.phase_e_voltage_q17) === 1'bx) begin
            $display("FAIL: D/E PWM polarity D=%d E=%d", dut.phase_d_voltage_q17, dut.phase_e_voltage_q17);
            errors = errors + 1;
        end
        pwm4a = 0; pwm4b = 1; pwm5a = 1; pwm5b = 0;
        #1000;
        if ($signed(dut.phase_d_voltage_q17) >= 0 || $signed(dut.phase_e_voltage_q17) <= 0 ||
            (^dut.phase_d_voltage_q17) === 1'bx || (^dut.phase_e_voltage_q17) === 1'bx) begin
            $display("FAIL: D/E PWM reversal");
            errors = errors + 1;
        end else
            $display("PASS: D/E PWM inputs independently drive the corresponding inverter voltages");

        force dut.u_inductor.x_4 = D_STATE;
        force dut.u_inductor.x_5 = E_STATE;
        #5;
        read_word(12'h1cb, dut.phase_c_voltage_stm32);
        read_word(12'hfff, 16'd0);
        if (errors == 0)
            $display("PASS: multiplier latency, five-phase TDM, PWM and STM32 integration");
        else
            $display("FAIL: %0d errors", errors);
        $finish;
    end

    initial begin
        #100000;
        $display("FAIL: simulation timeout");
        $finish;
    end
endmodule
