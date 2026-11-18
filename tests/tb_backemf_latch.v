`timescale 1ns / 1ps
// [2026-11-16 19:30 CST] Score the pipelined flux and two-stage DSP schedule.

// Dynamic scoreboard using the actual multiplier IP. Also run with the
// variable-latency CORDIC model to move completion through every frame slot.
module tb_backemf_latch;
parameter real HALF_PERIOD = 2.778;
reg clk = 0, rst_n = 0;
reg signed [15:0] angle = 0, speed = 400, flux = 16384;
wire signed [34:0] e [0:4];
wire signed [15:0] observe;
integer errors = 0, launches = 0, completions = 0, frames = 0;
integer sample_count, launch_count, flux_full, flux18;
integer phase, count, done_slots;
reg outstanding;
reg signed [31:0] held_angle [0:4];
reg signed [17:0] complete_sin [0:4], frame_sin [0:4];
reg signed [17:0] magnitude;
reg signed [17:0] sampled_magnitude;
reg signed [34:0] expected [0:4];
reg signed [35:0] product;
real ideal_sin, difference;

BackEMF uut (
    .clk(clk), .rst_n(rst_n), .epos_S16_360(angle),
    .eOMG_S16_Q2(speed), .Phir_Half_S16_Q15(flux),
    .eA_S35_Q17(e[0]), .eB_S35_Q17(e[1]), .eC_S35_Q17(e[2]),
    .eD_S35_Q17(e[3]), .eE_S35_Q17(e[4]), .eA_STM32_S16(observe)
);
always #(HALF_PERIOD) clk = ~clk;

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

always @(posedge clk) begin
    if (!rst_n) begin
        magnitude = 0;
        sampled_magnitude = 0;
        outstanding = 0;
        sample_count = 0;
        launch_count = 0;
        for (phase = 0; phase < 5; phase = phase + 1) begin
            held_angle[phase] = 0;
            complete_sin[phase] = 0;
            frame_sin[phase] = 0;
            expected[phase] = 0;
        end
    end else begin
        count = uut.Time_cnt;
        if (count == 15 && !uut.cordic_busy)
            sample_count = (angle * 4) & 131071;
        if (uut.cordic_call) begin
            if (outstanding) begin
                $display("FAIL: overlapping CORDIC call");
                errors = errors + 1;
            end
            outstanding = 1;
            launch_count = sample_count;
            launches = launches + 1;
            for (phase = 0; phase < 5; phase = phase + 1) begin
                held_angle[phase] = launch_count * 180 - phase * 4718592;
                if (uut.phase_angle_q16[phase] !== held_angle[phase]) begin
                    $display("FAIL: input snapshot phase=%0d", phase);
                    errors = errors + 1;
                end
            end
        end
        if (outstanding) begin
            for (phase = 0; phase < 5; phase = phase + 1)
                if (uut.phase_angle_q16[phase] !== held_angle[phase]) begin
                    $display("FAIL: angle changed during calculation phase=%0d", phase);
                    errors = errors + 1;
                end
        end
        if (count == 3)
            magnitude = sampled_magnitude;
        if (count == 15) begin
            flux_full = (flux * 67108) >>> 14;
            flux18 = flux_full & 262143;
            if (flux18 >= 131072) flux18 = flux18 - 262144;
            product = speed;
            product = product * 4 * flux18;
            sampled_magnitude = product >>> 13; // next frame, including wrap
        end
        // Read the old completed bank if done and count 2 coincide.
        if (count == 2)
            for (phase = 0; phase < 5; phase = phase + 1)
                frame_sin[phase] = complete_sin[phase];
        if (uut.cordic_busy && (&uut.cordic_done)) begin
            if (!outstanding) begin
                $display("FAIL: completion without a call");
                errors = errors + 1;
            end
            outstanding = 0;
            completions = completions + 1;
            done_slots = done_slots | (1 << count);
            for (phase = 0; phase < 5; phase = phase + 1) begin
                ideal_sin = reference_sin(($itor(launch_count)/131072.0
                            - $itor(phase)/5.0) * 6.283185307179586) * 131072.0;
                difference = $itor($signed(uut.cordic_sin_S18_Q17[phase])) - ideal_sin;
                if ((^uut.cordic_sin_S18_Q17[phase] === 1'bx)
                    || difference > 32.0 || difference < -32.0) begin
                    $display("FAIL: sine phase=%0d angle=%0d difference=%f",
                             phase, launch_count, difference);
                    errors = errors + 1;
                end
                complete_sin[phase] = (uut.cordic_sin_S18_Q17[phase] == 18'sh20000)
                    ? 18'sh1ffff : -uut.cordic_sin_S18_Q17[phase];
            end
        end
        if (count == 1) begin
            frames = frames + 1;
            for (phase = 0; phase < 5; phase = phase + 1) begin
                product = magnitude * frame_sin[phase];
                expected[phase] = product >>> 8; // Q25 -> S35_Q17
            end
        end
    end
    #0.001;
    for (phase = 0; phase < 5; phase = phase + 1) begin
        if (e[phase] !== expected[phase]) begin
            $display("FAIL: frame result phase=%0d count=%0d actual=%0d expected=%0d",
                     phase, uut.Time_cnt, $signed(e[phase]), expected[phase]);
            errors = errors + 1;
        end
        if (uut.nsin_frame_S18_Q17[phase] !== frame_sin[phase]) begin
            $display("FAIL: frame sine changed outside snapshot phase=%0d", phase);
            errors = errors + 1;
        end
    end
    if (observe !== (e[0] >>> 15 & 16'hffff)) begin
        $display("FAIL: STM32 mapping");
        errors = errors + 1;
    end
end

task reset_during_calculation;
    begin
        wait (uut.cordic_busy);
        repeat (4) @(negedge clk);
        rst_n = 0;
        repeat (3) @(negedge clk);
        rst_n = 1;
    end
endtask

initial begin
    done_slots = 0;
    repeat (24) @(negedge clk); // Wait for the real IP's 100 ns GSR.
    rst_n = 1;
    repeat (180) @(negedge clk); // Static zero must be computed after reset.
    for (count_driver = 0; count_driver < 2500; count_driver = count_driver + 1) begin
        @(negedge clk);
        angle = angle + 16'sd7919;
        speed = (count_driver % 1601) - 800;
        flux = (count_driver % 3 == 0) ? -16'sd8192 : 16'sd16384;
    end
    // Full input range exercises the 36-bit product and S18_Q8 wrap.
    for (count_driver = 0; count_driver < 720; count_driver = count_driver + 1) begin
        @(negedge clk);
        angle = angle + 16'sd7919;
        case ((count_driver / 36) % 6)
            0: begin speed = -16'sd32768; flux = -16'sd32768; end
            1: begin speed = 16'sd32767; flux = 16'sd32767; end
            2: begin speed = -16'sd32768; flux = 16'sd32767; end
            3: begin speed = 16'sd32767; flux = -16'sd32768; end
            4: begin speed = 16'sd4000; flux = 16'sd16384; end
            5: begin speed = -16'sd4000; flux = 16'sd16384; end
        endcase
    end
    // Leave a final input unchanged: it must eventually be sampled.
    @(negedge clk);
    angle = 16'sd24576; speed = 400; flux = 16384;
    repeat (180) @(negedge clk);
    if (launch_count != 98304) begin
        $display("FAIL: final angle was lost");
        errors = errors + 1;
    end
    reset_during_calculation;
    repeat (180) @(negedge clk);
    @(negedge clk);
    angle = -16'sd32768; speed = -400; flux = -8192;
    repeat (180) @(negedge clk);
    reset_during_calculation;
    repeat (180) @(negedge clk);
    if (launches < 50 || completions < 50 || frames < 100) begin
        $display("FAIL: insufficient calculation coverage");
        errors = errors + 1;
    end
    if (errors == 0)
        $display("PASS: BackEMF latch half_period=%f launches=%0d completions=%0d frames=%0d done_slots=%h",
                 HALF_PERIOD, launches, completions, frames, done_slots);
    else
        $display("FAIL: BackEMF latch errors=%0d", errors);
    $finish;
end
integer count_driver;
initial begin
    #5000000;
    $display("FAIL: BackEMF latch timeout");
    $finish;
end
endmodule

module tb_backemf_latch_50MHz;
tb_backemf_latch #(.HALF_PERIOD(10.0)) bench();
endmodule
