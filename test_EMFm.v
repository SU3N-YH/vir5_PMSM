`timescale 1ns/1ps
//////////////////////////////////////////////////////////////////////////////////
// Testbench for EMFm_calc.
//
// ePOS uses 131072 counts per electrical revolution.  The real parameters
// below are converted to the S-format ports with the same quantization used by
// the FPGA design.  A CSV trace is written to test_EMFm_results.csv.
//////////////////////////////////////////////////////////////////////////////////
module test_EMFm;

    // User-adjustable values.
    parameter real CURRENT_PEAK_A      = 80.0;
    parameter real DIF_HALF_MH         = 0.20; // (Ld-Lq)/2, mH
    parameter real AVG_QUARTER_MH      = 0.50; // (Ld+Lq)/4, mH
    // These defaults correspond to Ld=1.20 mH and Lq=0.80 mH.
    parameter integer N_POSITION_STEPS = 64;
    // The EMFm output differentiator updates every 76*18 system clocks.
    // 1500 clocks (~8.33 us at 180 MHz) lets each position sample produce
    // at least one fresh differentiated output.
    parameter integer HOLD_CLOCKS      = 1500;

    localparam integer E2PI_COUNTS = 131072;

    reg clk;
    reg rst_n;
    reg signed [15:0] DIFov2_S16_Q12;
    reg signed [15:0] AVGov4_S16_Q10;
    reg signed [17:0] iA_S18_Q9;
    reg signed [17:0] iB_S18_Q9;
    reg signed [17:0] iC_S18_Q9;
    reg signed [17:0] ePOS_S18_360;

    wire signed [34:0] eA_mutual_S35_Q17;
    wire signed [34:0] eB_mutual_S35_Q17;
    wire signed [34:0] eC_mutual_S35_Q17;
    wire signed [34:0] Phi1_Wb_S35_Q17;
    wire signed [34:0] Phi2_Wb_S35_Q17;
    wire signed [34:0] Phi3_Wb_S35_Q17;

    EMFm_calc uut (
        .clk(clk),
        .rst_n(rst_n),
        .DIFov2_S16_Q12(DIFov2_S16_Q12),
        .AVGov4_S16_Q10(AVGov4_S16_Q10),
        .iA_S18_Q9(iA_S18_Q9),
        .iB_S18_Q9(iB_S18_Q9),
        .iC_S18_Q9(iC_S18_Q9),
        .ePOS_S18_360(ePOS_S18_360),
        .eA_mutual_S35_Q17(eA_mutual_S35_Q17),
        .eB_mutual_S35_Q17(eB_mutual_S35_Q17),
        .eC_mutual_S35_Q17(eC_mutual_S35_Q17),
        .Phi1_Wb_S35_Q17(Phi1_Wb_S35_Q17),
        .Phi2_Wb_S35_Q17(Phi2_Wb_S35_Q17),
        .Phi3_Wb_S35_Q17(Phi3_Wb_S35_Q17)
    );

    // 180 MHz clock; stimulus is changed on the falling edge.
    always #2.777777 clk = ~clk;

    real pi;
    real theta;
    real step_theta;
    integer epos_count;
    integer k;
    integer fd;

    function signed [17:0] current_to_s18_q9;
        input real current_a;
        integer q;
        begin
            q = $rtoi(current_a * 512.0);
            if (q > 131071) q = 131071;
            else if (q < -131072) q = -131072;
            current_to_s18_q9 = q;
        end
    endfunction

    function signed [15:0] dif_to_s16_q12;
        input real inductance_mh;
        integer q;
        begin
            q = $rtoi(inductance_mh * 4096.0);
            if (q > 32767) q = 32767;
            else if (q < -32768) q = -32768;
            dif_to_s16_q12 = q;
        end
    endfunction

    function signed [15:0] avg_to_s16_q10;
        input real inductance_mh;
        integer q;
        begin
            q = $rtoi(inductance_mh * 1024.0);
            if (q > 32767) q = 32767;
            else if (q < -32768) q = -32768;
            avg_to_s16_q10 = q;
        end
    endfunction

    task wait_clocks;
        input integer count;
        integer n;
        begin
            for (n = 0; n < count; n = n + 1) @(posedge clk);
        end
    endtask

    initial begin
        pi = 3.14159265358979323846;
        step_theta = 2.0 * pi / N_POSITION_STEPS;
        clk = 1'b0;
        rst_n = 1'b0;
        DIFov2_S16_Q12 = dif_to_s16_q12(DIF_HALF_MH);
        AVGov4_S16_Q10 = avg_to_s16_q10(AVG_QUARTER_MH);
        iA_S18_Q9 = 18'sd0;
        iB_S18_Q9 = 18'sd0;
        iC_S18_Q9 = 18'sd0;
        ePOS_S18_360 = 18'sd0;
        epos_count = 0;

        fd = $fopen("test_EMFm_results.csv", "w");
        $fdisplay(fd, "time_ns,epos_count,theta_rad,iA_q9,iB_q9,iC_q9,PhiA_q17,PhiB_q17,PhiC_q17,eA_q17,eB_q17,eC_q17");

        wait_clocks(20);
        rst_n = 1'b1;
        wait_clocks(40);

        for (k = 0; k < N_POSITION_STEPS; k = k + 1) begin
            theta = step_theta * k;
            epos_count = $rtoi((theta / (2.0 * pi)) * E2PI_COUNTS);
            if (epos_count > 131071) epos_count = 131071;

            // Balanced currents: ia + ib + ic is approximately zero.
            @(negedge clk);
            ePOS_S18_360 = epos_count;
            iA_S18_Q9 = current_to_s18_q9(CURRENT_PEAK_A * $sin(theta));
            iB_S18_Q9 = current_to_s18_q9(CURRENT_PEAK_A * $sin(theta - 2.0*pi/3.0));
            iC_S18_Q9 = current_to_s18_q9(CURRENT_PEAK_A * $sin(theta + 2.0*pi/3.0));

            wait_clocks(HOLD_CLOCKS);

            $display("t=%0t ePOS=%0d ia=%0d ib=%0d ic=%0d Phi=%0d,%0d,%0d e=%0d,%0d,%0d",
                     $time, ePOS_S18_360, $signed(iA_S18_Q9), $signed(iB_S18_Q9),
                     $signed(iC_S18_Q9), $signed(Phi1_Wb_S35_Q17),
                     $signed(Phi2_Wb_S35_Q17), $signed(Phi3_Wb_S35_Q17),
                     $signed(eA_mutual_S35_Q17), $signed(eB_mutual_S35_Q17),
                     $signed(eC_mutual_S35_Q17));
            $fdisplay(fd, "%0t,%0d,%f,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d,%0d",
                      $time, ePOS_S18_360, theta, $signed(iA_S18_Q9),
                      $signed(iB_S18_Q9), $signed(iC_S18_Q9),
                      $signed(Phi1_Wb_S35_Q17), $signed(Phi2_Wb_S35_Q17),
                      $signed(Phi3_Wb_S35_Q17), $signed(eA_mutual_S35_Q17),
                      $signed(eB_mutual_S35_Q17), $signed(eC_mutual_S35_Q17));
        end

        $fclose(fd);
        $display("test_EMFm finished: %0d position samples; trace: test_EMFm_results.csv", N_POSITION_STEPS);
        wait_clocks(20);
        $finish;
    end

endmodule
