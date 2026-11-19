`timescale 1ns / 1ps
// Exercises five-phase coupling, fixed-point flux, and the 76-frame voltage output.
module test_EMFm;
    parameter real CURRENT_PEAK_A = 80.0;
    parameter real LD_MINUS_LQ_OV5_MH = 0.08;
    parameter real LD_PLUS_LQ_OV5_MH = 0.40;
    parameter real LDQ_SINE_MH = -0.15;
    parameter real LDQ_SKEW_MH = 0.10;
    parameter integer N_POSITION_STEPS = 64;

    localparam real PI = 3.14159265358979323846;
    localparam integer FRAME_CLOCKS = 18;
    reg clk, rst_n;
    reg signed [15:0] diff_q12, avg_q12, sine_q12, skew_q12;
    reg signed [17:0] current_q9 [0:4];
    reg signed [17:0] position;
    wire signed [34:0] flux_q17 [0:4], voltage_q17 [0:4];

    EMFm_calc uut (
        .clk(clk), .rst_n(rst_n),
        .LdMinusLq_ov5_S16_Q12(diff_q12), .LdPlusLq_ov5_S16_Q12(avg_q12),
        .L1PlusL2_ov5_S16_Q12(sine_q12), .L1MinusL2_ov5_S16_Q12(skew_q12),
        .iA_S18_Q9(current_q9[0]), .eA_mutual_S35_Q17(voltage_q17[0]),
        .iB_S18_Q9(current_q9[1]), .eB_mutual_S35_Q17(voltage_q17[1]),
        .iC_S18_Q9(current_q9[2]), .eC_mutual_S35_Q17(voltage_q17[2]),
        .iD_S18_Q9(current_q9[3]), .eD_mutual_S35_Q17(voltage_q17[3]),
        .iE_S18_Q9(current_q9[4]), .eE_mutual_S35_Q17(voltage_q17[4]),
        .ePOS_S18_360(position)
    );

    assign flux_q17[0] = uut.phase[0].flux_q17;
    assign flux_q17[1] = uut.phase[1].flux_q17;
    assign flux_q17[2] = uut.phase[2].flux_q17;
    assign flux_q17[3] = uut.phase[3].flux_q17;
    assign flux_q17[4] = uut.phase[4].flux_q17;

    always #2.778 clk = ~clk;

    integer checks, errors, k, phase, row, fd;
    real theta;
    reg signed [34:0] wrapped_flux_q17 [0:4];

    function signed [17:0] to_q9;
        input real amps;
        integer bits;
        begin
            bits = $rtoi(amps * 512.0);
            if (bits > 131071) bits = 131071;
            if (bits < -131072) bits = -131072;
            to_q9 = bits;
        end
    endfunction

    function signed [15:0] to_q12;
        input real millihenries;
        integer bits;
        begin
            bits = $rtoi(millihenries * 4096.0);
            if (bits > 32767) bits = 32767;
            if (bits < -32768) bits = -32768;
            to_q12 = bits;
        end
    endfunction

    // ISE ISim does not implement the Verilog real-valued trig functions.
    function real sin_reference;
        input real angle;
        real reduced, term, sum;
        integer n;
        begin
            reduced = angle;
            while (reduced > PI) reduced = reduced - 2.0 * PI;
            while (reduced < -PI) reduced = reduced + 2.0 * PI;
            term = reduced;
            sum = term;
            for (n = 1; n <= 11; n = n + 1) begin
                term = -term * reduced * reduced / ((2*n) * (2*n+1));
                sum = sum + term;
            end
            sin_reference = sum;
        end
    endfunction

    function real cos_reference;
        input real angle;
        begin
            cos_reference = sin_reference(angle + PI / 2.0);
        end
    endfunction

    task wait_frames;
        input integer frames;
        begin
            repeat (frames * FRAME_CLOCKS) @(negedge clk);
        end
    endtask

    // Float reference calculates every matrix element from the physical
    // angles without using the RTL's cyclic indexing or multiplier results.
    task check_flux;
        input integer sample;
        integer i, j, angle_bits;
        real rotor, alpha_i, alpha_j, l_ij, expected, delta;
        begin
            angle_bits = position[15:0];
            rotor = PI * angle_bits / 65536.0;
            for (i = 0; i < 5; i = i + 1) begin
                alpha_i = 2.0 * PI * i / 5.0;
                expected = 0.0;
                for (j = 0; j < 5; j = j + 1) begin
                    alpha_j = 2.0 * PI * j / 5.0;
                    l_ij = ($signed(diff_q12) * cos_reference(2.0 * rotor - alpha_i - alpha_j)
                          - $signed(sine_q12) * sin_reference(2.0 * rotor - alpha_i - alpha_j)) / 4096.0;
                    if (i != j)
                        l_ij = l_ij + ($signed(avg_q12) * cos_reference(alpha_j - alpha_i)
                            + $signed(skew_q12) * sin_reference(alpha_j - alpha_i)) / 4096.0;
                    expected = expected + l_ij * ($signed(current_q9[j]) / 512.0);
                end
                expected = expected * 128.0; // Legacy mWb / 1024, then Q17.
                delta = $signed(flux_q17[i]) - expected;
                checks = checks + 1;
                if ((^flux_q17[i] === 1'bx) || delta < -3.0 || delta > 2.0) begin
                    errors = errors + 1;
                    $display("FAIL flux sample=%0d phase=%0d actual=%0d expected=%f", sample, i,
                             $signed(flux_q17[i]), expected);
                end
            end
        end
    endtask

    // Independently track the IIR and output once per frame from the
    // separately checked flux. Use separate state for each output phase.
    integer frame, ch, diff_edges;
    reg signed [34:0] acc [0:4], filtered [0:4], previous [0:4], next_emf [0:4];
    reg signed [34:0] old_emf;
    always @(negedge clk) begin
        if (!rst_n) begin
            frame = 0;
            diff_edges = 0;
            for (ch = 0; ch < 5; ch = ch + 1) begin
                acc[ch] = 0;
                filtered[ch] = 0;
                previous[ch] = 0;
                next_emf[ch] = 0;
            end
        end else if (uut.slot == 5'd7) begin
            frame = frame + 1;
            for (ch = 0; ch < 5; ch = ch + 1) begin
                old_emf = next_emf[ch];
                if (frame == 76) begin
                    next_emf[ch] = (filtered[ch] - previous[ch]) * 131072;
                    previous[ch] = filtered[ch];
                end
                acc[ch] = acc[ch] + flux_q17[ch] - filtered[ch];
                filtered[ch] = $signed(acc[ch]) >>> 7;
                checks = checks + 1;
                if (voltage_q17[ch] !== old_emf) begin
                    errors = errors + 1;
                    $display("FAIL voltage frame=%0d phase=%0d actual=%0d expected=%0d",
                             frame, ch, $signed(voltage_q17[ch]), old_emf);
                end
            end
            if (frame == 76) begin
                frame = 0;
                diff_edges = diff_edges + 1;
            end
        end
    end

    initial begin
        clk = 0;
        rst_n = 0;
        checks = 0;
        errors = 0;
        position = 0;
        diff_q12 = 0;
        avg_q12 = to_q12(LD_PLUS_LQ_OV5_MH);
        sine_q12 = 0;
        skew_q12 = to_q12(LDQ_SKEW_MH);
        for (phase = 0; phase < 5; phase = phase + 1)
            current_q9[phase] = 0;
        wait_frames(2);
        #1 rst_n = 1;

        // Each phase drives all five rows by itself. This includes D/E -> ABC
        // and checks the polarity of both nonzero phase-separation classes.
        for (phase = 0; phase < 5; phase = phase + 1) begin
            current_q9[phase] = to_q9(phase % 2 ? -40.0 : 40.0);
            wait_frames(8);
            check_flux(-10 - phase);
            current_q9[phase] = 0;
        end

        // Keep a current vector fixed and verify wrap of the doubled angle.
        diff_q12 = to_q12(LD_MINUS_LQ_OV5_MH);
        sine_q12 = to_q12(LDQ_SINE_MH);
        current_q9[3] = to_q9(70.0);
        current_q9[4] = to_q9(-35.0);
        position = 18'sd7168;
        // Include the CORDIC busy window and the cross-frame DSP pipeline.
        wait_frames(12);
        check_flux(-2);
        for (row = 0; row < 5; row = row + 1)
            wrapped_flux_q17[row] = flux_q17[row];
        position = 18'sd72704;
        wait_frames(12);
        check_flux(-1);
        for (row = 0; row < 5; row = row + 1) begin
            checks = checks + 1;
            if (wrapped_flux_q17[row] !== flux_q17[row]) begin
                errors = errors + 1;
                $display("FAIL doubled angle wrap phase=%0d", row);
            end
        end

        fd = $fopen("test_EMFm_results.csv", "w");
        $fdisplay(fd, "epos_count,iA_q9,iB_q9,iC_q9,iD_q9,iE_q9,PhiA_q17,PhiB_q17,PhiC_q17,PhiD_q17,PhiE_q17,eA_q17,eB_q17,eC_q17,eD_q17,eE_q17");
        for (k = 0; k < N_POSITION_STEPS; k = k + 1) begin
            theta = 2.0 * PI * k / N_POSITION_STEPS;
            position = (131072 * k) / N_POSITION_STEPS;
            for (phase = 0; phase < 5; phase = phase + 1)
                current_q9[phase] = to_q9(CURRENT_PEAK_A * sin_reference(theta - 2.0 * PI * phase / 5.0));
            wait_frames(84);
            check_flux(k);
            $fwrite(fd, "%0d", position);
            for (row = 0; row < 5; row = row + 1)
                $fwrite(fd, ",%0d", $signed(current_q9[row]));
            for (row = 0; row < 5; row = row + 1)
                $fwrite(fd, ",%0d", $signed(flux_q17[row]));
            for (row = 0; row < 5; row = row + 1)
                $fwrite(fd, ",%0d", $signed(voltage_q17[row]));
            $fdisplay(fd, "");
        end
        $fclose(fd);

        if (errors == 0 && diff_edges > 0)
            $display("PASS: five-phase mutual model, %0d checks, %0d difference updates", checks, diff_edges);
        else
            $display("FAIL: %0d errors, %0d difference updates", errors, diff_edges);
        $finish;
    end
endmodule
