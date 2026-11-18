`timescale 1ns / 1ps

// Static waveform test. Each input set is held for 360 clocks (~2 us).
// Ideal reference retains flux/magnitude truncation, but uses mathematical
// sine instead of the RTL CORDIC. Error is actual minus ideal, in Q2 codes.
module test_backEMF;
localparam integer HOLD_CYCLES = 360;
localparam integer SETTLE_CYCLES = 180;
reg clk = 1'b0;
reg rst_n = 1'b0;
reg signed [15:0] angle = 16'sd0;
reg signed [15:0] speed = 16'sd400;
reg signed [15:0] flux = 16'sd16384;
reg [15:0] test_id = 16'd0;

wire signed [34:0] eA, eB, eC, eD, eE;
wire signed [15:0] observe;
wire signed [15:0] actual_stm32 = observe;
reg signed [15:0] ideal_stm32 = 16'sd0;
wire signed [16:0] diff_stm32 =
    $signed({actual_stm32[15], actual_stm32}) -
    $signed({ideal_stm32[15], ideal_stm32});
reg settled = 1'b0;
reg signed [17:0] ideal_magnitude = 18'sd0;
real ideal_sine = 0.0;
real ideal_stm32_real = 0.0;

integer sweep_angle;
integer mode;
integer sample_count = 0;
integer max_abs_error = 0;
integer errors = 0;
integer abs_error;
integer signed flux_q17_full;
integer signed magnitude_full;
integer signed flux_q17_18;
integer signed speed_q4_18;
integer signed magnitude_18;

BackEMF uut (
    .clk(clk), .rst_n(rst_n),
    .epos_S16_360(angle), .eOMG_S16_Q2(speed),
    .Phir_Half_S16_Q15(flux),
    .eA_S35_Q17(eA), .eB_S35_Q17(eB), .eC_S35_Q17(eC),
    .eD_S35_Q17(eD), .eE_S35_Q17(eE),
    .eA_STM32_S16(observe)
);

always #2.778 clk = ~clk;

function real reference_sin;
    input real radians;
    real x, term, total;
    integer n;
    begin
        x = radians;
        while (x > 3.141592653589793) x = x - 6.283185307179586;
        while (x < -3.141592653589793) x = x + 6.283185307179586;
        term = x;
        total = x;
        for (n = 1; n <= 12; n = n + 1) begin
            term = -term*x*x / ((2*n)*(2*n+1));
            total = total + term;
        end
        reference_sin = total;
    end
endfunction

function integer floor_real;
    input real value;
    integer truncated;
    begin
        truncated = $rtoi(value);
        if (value < 0.0 && $itor(truncated) != value)
            floor_real = truncated - 1;
        else
            floor_real = truncated;
    end
endfunction

task apply_sample;
    input signed [15:0] next_angle;
    input signed [15:0] next_speed;
    input signed [15:0] next_flux;
    real radians;
    begin
        @(negedge clk);
        angle = next_angle;
        speed = next_speed;
        flux = next_flux;
        test_id = test_id + 1'b1;
        settled = 1'b0;

        // Recreate the existing fixed-point flux and magnitude truncation.
        flux_q17_full = next_flux * 67108;
        flux_q17_full = flux_q17_full >>> 14;
        flux_q17_18 = flux_q17_full & 18'h3ffff;
        if (flux_q17_18 >= 131072)
            flux_q17_18 = flux_q17_18 - 262144;

        speed_q4_18 = next_speed * 4;
        magnitude_full = (speed_q4_18 * flux_q17_18) >>> 13;
        magnitude_18 = magnitude_full & 18'h3ffff;
        if (magnitude_18 >= 131072)
            magnitude_18 = magnitude_18 - 262144;
        ideal_magnitude = magnitude_18;

        radians = $itor(next_angle) * 6.283185307179586 / 32768.0;
        ideal_sine = reference_sin(radians);
        ideal_stm32_real = -$itor(magnitude_18) * ideal_sine / 64.0;
        ideal_stm32 = floor_real(ideal_stm32_real);

        // Transient error is visible immediately. Only evaluate after settling.
        repeat (SETTLE_CYCLES) @(negedge clk);
        settled = 1'b1;

        abs_error = diff_stm32;
        if (abs_error < 0) abs_error = -abs_error;
        if (abs_error > max_abs_error) max_abs_error = abs_error;
        sample_count = sample_count + 1;
        if ((^actual_stm32 === 1'bx) || abs_error > 1) begin
            $display("FAIL: settled STM32 error at test %0d: actual=%0d ideal=%0d diff=%0d",
                     test_id, actual_stm32, ideal_stm32, diff_stm32);
            errors = errors + 1;
        end

        $display("SWEEP,%0d,%0d,%0d,%0d,%0d,0x%04h,%0d,0x%04h,%0d,%0d",
                 test_id, next_angle, next_speed, next_flux,
                 actual_stm32, actual_stm32, ideal_stm32,
                 ideal_stm32, diff_stm32, ideal_magnitude);
        repeat (HOLD_CYCLES - SETTLE_CYCLES - 1) @(negedge clk);
    end
endtask

initial begin
    // Wait beyond the structural IP's initial 100 ns Xilinx global reset.
    repeat (24) @(negedge clk);
    rst_n = 1'b1;

    // Start at the reported 45-degree point, then 90 and 270 degrees.
    apply_sample(16'sd4096, 16'sd400, 16'sd16384);
    apply_sample(16'sd8192, 16'sd400, 16'sd16384);
    apply_sample(16'sd24576, 16'sd400, 16'sd16384);
    // Full signed-angle sweep at 2.8125 degree steps, including quadrants.
    for (sweep_angle = -32768; sweep_angle <= 32767; sweep_angle = sweep_angle + 256)
        apply_sample(sweep_angle, 16'sd400, 16'sd16384);
    apply_sample(16'sd32767, 16'sd400, 16'sd16384);

    // Focus on the reported 45-degree point and nearby input codes.
    apply_sample(16'sd4094, 16'sd400, 16'sd16384);
    apply_sample(16'sd4095, 16'sd400, 16'sd16384);
    apply_sample(16'sd4096, 16'sd400, 16'sd16384);
    apply_sample(16'sd4097, 16'sd400, 16'sd16384);
    apply_sample(16'sd4098, 16'sd400, 16'sd16384);
    // Exact five-phase 72-degree landmarks, rounded to FMC input counts.
    apply_sample(16'sd6554, 16'sd400, 16'sd16384);
    apply_sample(16'sd13107, 16'sd400, 16'sd16384);
    apply_sample(16'sd19661, 16'sd400, 16'sd16384);
    apply_sample(16'sd26214, 16'sd400, 16'sd16384);
    apply_sample(-16'sd1, 16'sd400, 16'sd16384);
    apply_sample(16'sd1, 16'sd400, 16'sd16384);

    // Repeat representative full-circle coverage with changed amplitude sign.
    for (mode = 0; mode < 2; mode = mode + 1) begin
        for (sweep_angle = -32768; sweep_angle <= 32767; sweep_angle = sweep_angle + 1024) begin
            if (mode == 0)
                apply_sample(sweep_angle, -16'sd400, 16'sd16384);
            else
                apply_sample(sweep_angle, 16'sd400, -16'sd8192);
        end
    end

    apply_sample(16'sd8192, 16'sd0, 16'sd16384);
    apply_sample(16'sd8192, 16'sd400, 16'sd0);
    apply_sample(16'sd8192, 16'sd800, 16'sd16384);
    apply_sample(16'sd8192, 16'sd400, 16'sd8192);

    if (errors == 0)
        $display("PASS: five-phase BackEMF sweep samples=%0d max absolute error=%0d STM32 codes",
                 sample_count, max_abs_error);
    else
        $display("FAIL: sweep errors=%0d", errors);
    $finish;
end

initial begin
    #5000000;
    $display("FAIL: sweep timeout");
    $finish;
end
endmodule
