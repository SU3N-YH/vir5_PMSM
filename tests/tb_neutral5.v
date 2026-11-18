`timescale 1ns / 1ps
// Check the 10-clock average pipeline latency.
module tb_neutral5;
    reg clk = 0;
    always #2.778 clk = ~clk; // 180 MHz
    reg rst_n = 0;
    reg signed [34:0] phase [0:14];
    wire signed [34:0] mean [0:2];
    wire signed [34:0] neutral;
    wire signed [15:0] stm32;
    add5ov5 dut (
        .clk_fast(clk), .rst_n(rst_n),
        .Ua1_S35_Q17(phase[0]), .Ub1_S35_Q17(phase[1]),
        .Uc1_S35_Q17(phase[2]), .Ud1_S35_Q17(phase[3]), .Ue1_S35_Q17(phase[4]),
        .Ua2_S35_Q17(phase[5]), .Ub2_S35_Q17(phase[6]),
        .Uc2_S35_Q17(phase[7]), .Ud2_S35_Q17(phase[8]), .Ue2_S35_Q17(phase[9]),
        .Ua3_S35_Q17(phase[10]), .Ub3_S35_Q17(phase[11]),
        .Uc3_S35_Q17(phase[12]), .Ud3_S35_Q17(phase[13]), .Ue3_S35_Q17(phase[14]),
        .U1_S35_Q17(mean[0]), .U2_S35_Q17(mean[1]), .U3_S35_Q17(mean[2])
    );
    Volt_N_calc neutral_dut (
        .clk(clk), .rst_n(rst_n),
        .sum_uX0_ovr5(mean[0]), .sum_eX_ovr5(mean[1]), .sum_eMUTUAL_ovr5(mean[2]),
        .U_N_S35_Q17(neutral), .U_N_STM32(stm32)
    );

    // Independent full-width reference: no high/low operand decomposition.
    // Model the requested Q19 approximation, rounding and S35 saturation.
    function signed [34:0] average;
        input integer group;
        reg signed [63:0] sum, scaled;
        integer j;
        begin
            sum = 0;
            for (j = 0; j < 5; j = j + 1)
                sum = sum + $signed(phase[5*group+j]);
            scaled = (sum * 64'sd104858 + 64'sd262144) >>> 19;
            if (scaled > 64'sd17179869183) average = 35'sd17179869183;
            else if (scaled < -64'sd17179869184) average = -35'sd17179869184;
            else average = scaled;
        end
    endfunction

    reg signed [34:0] pending [0:2];
    reg signed [34:0] expected [0:2];
    reg signed [35:0] diff_ref = 0;
    reg signed [34:0] neutral_ref;
    reg signed [25:0] shifted_ref;
    reg signed [15:0] stm32_ref;
    integer tick = 0;
    integer errors = 0;
    integer captures = 0;
    integer k;
    always @(posedge clk) begin
        if (!rst_n) begin
            tick = 0;
            diff_ref = 0;
            neutral_ref = 0;
            for (k = 0; k < 3; k = k + 1) begin
                expected[k] = 0;
                pending[k] = 0;
            end
        end else begin
            // Use the previous means and previous diff, as in the two-stage RTL.
            neutral_ref = diff_ref - $signed(mean[2]);
            diff_ref = $signed(mean[0]) - $signed(mean[1]);
            tick = tick + 1;
            for (k = 0; k < 3; k = k + 1) begin
                if ((tick-1) % 12 == 3*k) pending[k] = average(k);
                if (tick>=11 && (tick-11) % 12 == 3*k) begin
                    expected[k] = pending[k];
                    captures = captures + 1;
                end
            end
        end
        shifted_ref = neutral_ref >>> 9;
        if (shifted_ref > 32767) stm32_ref = 32767;
        else if (shifted_ref < -32768) stm32_ref = -32768;
        else stm32_ref = shifted_ref;
        #1;
        for (k = 0; k < 3; k = k + 1)
            if (mean[k] !== expected[k]) begin
                $display("FAIL: clock %0d group %0d got %0d expected %0d", tick, k, mean[k], expected[k]);
                errors = errors + 1;
            end
        if (neutral !== neutral_ref || stm32 !== stm32_ref) begin
            $display("FAIL: neutral pipeline/saturation at clock %0d", tick);
            errors = errors + 1;
        end
    end

    integer i, n;
    integer seed = 1234567;
    reg [31:0] random_high, random_low;
    initial begin
        for (i = 0; i < 15; i = i + 1) phase[i] = 0;
        // Xilinx structural primitives keep global GSR asserted for 100 ns.
        repeat (24) @(negedge clk);
        rst_n = 1;
        for (n = 0; n < 18000; n = n + 1) begin
            // Inputs change every clock to detect stale/cross-group results.
            // Each directed pattern lasts long enough to cover every TDM slot.
            for (i = 0; i < 15; i = i + 1) begin
                case (n / 24)
                    0: phase[i] = 35'sd17179869183; // all phases at positive limit
                    1: phase[i] = -35'sd17179869184; // negative limit
                    2: phase[i] = (i % 2) ? -35'sd17179869184 : 35'sd17179869183;
                    3: phase[i] = (i % 5 == 3) ? 35'sd655360 : 35'sd0; // D only
                    4: phase[i] = (i % 5 == 4) ? -35'sd655360 : 35'sd0; // E only
                    5: phase[i] = (i % 5 == 0) ? 35'sd1 : 35'sd0;
                    6: phase[i] = (i % 5 == 0) ? -35'sd2 : 35'sd0;
                    7: phase[i] = (i % 5 == 0) ? 35'sd3 : 35'sd0;
                    8: phase[i] = (i % 5 == 0) ? -35'sd4 : 35'sd0;
                    9: phase[i] = 35'sd17179769183; // near limit, no saturation
                    10: phase[i] = -35'sd17179769184;
                    default: begin
                        if (n < 648) begin
                            // Exercise every positive/negative 3-bit remainder
                            // with sums that cannot fit the IP's 35-bit port.
                            phase[i] = (i % 5 == 0) ? (n/24 - 19) : 35'sd8589934592;
                            if (n/24 >= 19) phase[i] = -phase[i];
                        end else begin
                            random_high = $random(seed);
                            random_low = $random(seed);
                            phase[i] = {random_high[2:0], random_low};
                        end
                    end
                endcase
            end
            // Reset in the middle of a frame with products still in flight.
            if (n == 5001) rst_n = 0;
            if (n == 5004) rst_n = 1;
            @(negedge clk);
        end
        if (errors == 0 && captures > 4400)
            $display("PASS: five-phase averages, %0d captures, division5 Q19, wide sums, low-bit compensation, signed limits, D/E inputs, rounding, TDM, reset and saturation", captures);
        else $display("FAIL: %0d errors, %0d captures", errors, captures);
        $finish;
    end
endmodule
