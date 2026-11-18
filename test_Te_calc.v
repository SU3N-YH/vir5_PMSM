`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Compare the Time_cnt-scheduled Te_calc RTL at Ld-Lq = 0 and -82 (raw S16Q12).
// Both instances receive identical currents, flux and pole-pair inputs.
// Reference follows the current Q15 flux pipeline and corrected Q24 -> Q17 cut.
// STM32 observation uses S16Q5, with signed saturation.
// ModelSim entry point: do test_Te_calc_modelsim.do
////////////////////////////////////////////////////////////////////////////////
module test_Te_calc;
    parameter integer HOLD_CYCLES = 180;   // About 1 us per current step.
    parameter integer SETTLE_CYCLES = 54;  // Three complete torque frames.
    parameter signed [15:0] PHIR_HALF_RAW = 16'sd1638;
    parameter signed [15:0] POLE_PAIRS = 16'sd4;

    reg clk_180MHz = 1'b0;
    always #2.778 clk_180MHz = ~clk_180MHz;
    reg rst_n = 1'b0;
    reg signed [17:0] I_d_S18_Q9 = 18'sd0;
    reg signed [17:0] I_q_S18_Q9 = 18'sd0;
    reg signed [15:0] Phir_Half_S16_Q15 = PHIR_HALF_RAW;
    reg signed [15:0] p_n_S16_Q0 = POLE_PAIRS;
    wire signed [15:0] Ld_dash_Lq_0_S16_Q12 = 16'sd0;
    wire signed [15:0] Ld_dash_Lq_m82_S16_Q12 = -16'sd82;
    wire signed [34:0] Torque_Ld0_S35_Q17;
    wire signed [34:0] Torque_Ldm82_S35_Q17;
    wire signed [15:0] Torque_STM32_Ld0_S16_Q5, Torque_STM32_Ldm82_S16_Q5;
    wire signed [35:0] Torque_Delta_S36_Q17 =
        $signed({Torque_Ldm82_S35_Q17[34], Torque_Ldm82_S35_Q17}) -
        $signed({Torque_Ld0_S35_Q17[34], Torque_Ld0_S35_Q17});

    Te_calc uut_Ld0 (
        .clk_180MHz(clk_180MHz), .rst_n(rst_n),
        .I_d_S18_Q9(I_d_S18_Q9), .I_q_S18_Q9(I_q_S18_Q9),
        .Ld_dash_Lq_S16_Q12(Ld_dash_Lq_0_S16_Q12),
        .Phir_Half_S16_Q15(Phir_Half_S16_Q15), .p_n_S16_Q0(p_n_S16_Q0),
        .Torque_Out_S35_Q17(Torque_Ld0_S35_Q17),
        .Torque_STM32_S16_Q5(Torque_STM32_Ld0_S16_Q5)
    );
    Te_calc uut_Ldm82 (
        .clk_180MHz(clk_180MHz), .rst_n(rst_n),
        .I_d_S18_Q9(I_d_S18_Q9), .I_q_S18_Q9(I_q_S18_Q9),
        .Ld_dash_Lq_S16_Q12(Ld_dash_Lq_m82_S16_Q12),
        .Phir_Half_S16_Q15(Phir_Half_S16_Q15), .p_n_S16_Q0(p_n_S16_Q0),
        .Torque_Out_S35_Q17(Torque_Ldm82_S35_Q17),
        .Torque_STM32_S16_Q5(Torque_STM32_Ldm82_S16_Q5)
    );

    // Real-valued waveform aids. Q17 raw torque / 131072 = torque in N*m
    // when the input current/flux/inductance encodings use SI units.
    real Id_A, Iq_A;
    real Torque_Ld0_Nm, Torque_Ldm82_Nm, Torque_Delta_Nm;
    real Torque_STM32_Ld0_Nm, Torque_STM32_Ldm82_Nm;
    real Ideal_Ld0_Nm, Ideal_Ldm82_Nm;
    real Expected_Ld0_Nm, Expected_Ldm82_Nm;
    reg signed [34:0] Expected_Ld0_S35_Q17;
    reg signed [34:0] Expected_Ldm82_S35_Q17;
    reg signed [15:0] Expected_STM32_Ld0_S16_Q5, Expected_STM32_Ldm82_S16_Q5;
    reg [7:0] case_no = 0;
    reg check_valid = 0;
    reg test_done = 0;
    integer errors = 0;
    integer checked = 0;

    always @* begin
        Id_A = $itor($signed(I_d_S18_Q9)) / 512.0;
        Iq_A = $itor($signed(I_q_S18_Q9)) / 512.0;
        Ideal_Ld0_Nm = 1.5 * $itor($signed(p_n_S16_Q0)) *
            (2.0 * $itor($signed(Phir_Half_S16_Q15)) / 32768.0) * Iq_A;
        Ideal_Ldm82_Nm = 1.5 * $itor($signed(p_n_S16_Q0)) *
            ((2.0 * $itor($signed(Phir_Half_S16_Q15)) / 32768.0) +
             (-82.0 / 4096.0) * Id_A) * Iq_A;
        // These sweep outputs fit 32 bits, so $itor does not narrow them.
        Torque_Ld0_Nm = $itor($signed(Torque_Ld0_S35_Q17)) / 131072.0;
        Torque_Ldm82_Nm = $itor($signed(Torque_Ldm82_S35_Q17)) / 131072.0;
        Torque_Delta_Nm = $itor($signed(Torque_Delta_S36_Q17)) / 131072.0;
        Torque_STM32_Ld0_Nm = $itor(Torque_STM32_Ld0_S16_Q5) / 32.0;
        Torque_STM32_Ldm82_Nm = $itor(Torque_STM32_Ldm82_S16_Q5) / 32.0;
        Expected_Ld0_Nm = $itor($signed(Expected_Ld0_S35_Q17)) / 131072.0;
        Expected_Ldm82_Nm = $itor($signed(Expected_Ldm82_S35_Q17)) / 131072.0;
    end

    // Independent 64-bit products; reproduce the current pipeline cuts.
    // A right shift on signed data rounds negative fractional values down.
    function signed [34:0] reference_torque;
        input signed [17:0] d, q;
        input signed [15:0] ld, half_flux, poles;
        reg signed [63:0] d64, q64, ld64, flux64, p64, product;
        reg signed [17:0] rel, flux, flux15, flux15p;
        begin
            d64 = d; q64 = q; ld64 = ld; flux64 = half_flux; p64 = poles;
            product = d64 * ld64; rel = {product[35], product[22:6]};
            flux = $signed(rel) + (2 * flux64);
            flux15 = flux + (flux >>> 1);
            product = $signed(flux15) * p64;
            flux15p = {product[35], product[16:0]};
            product = ($signed(flux15p) * q64) >>> 7;
            reference_torque = product[34:0];
        end
    endfunction

    // Previous Q9 pipeline reference, retained for review:
    // product = (d64 * ld64) >>> 12; rel = product[17:0];
    // product = (q64 * (2 * flux64)) >>> 15; pm = product[17:0];
    // product = ($signed(rel) * q64) >>> 9; rel_base = product[17:0];
    // product = ($signed(pm) * p64) <<< 8; pm_term = product[35:0];
    // product = ($signed(rel_base) * p64) <<< 8; rel_term = product[35:0];
    // sum = pm_term + rel_term; torque = sum + (sum >>> 1);
    // reference_torque = torque[34:0];

    function signed [15:0] reference_stm32;
        input signed [34:0] torque;
        reg signed [63:0] scaled;
        begin
            scaled = torque;
            scaled = scaled >>> 12;
            if (scaled > 32767) reference_stm32 = 16'sh7fff;
            else if (scaled < -32768) reference_stm32 = 16'sh8000;
            else reference_stm32 = scaled[15:0];
        end
    endfunction

    task check_outputs;
        begin
            checked = checked + 1;
            if (Torque_Ld0_S35_Q17 !== Expected_Ld0_S35_Q17 ||
                Torque_Ldm82_S35_Q17 !== Expected_Ldm82_S35_Q17) begin
                errors = errors + 1;
                $display("FAIL case %0d @ %0t: Ld0=%0d expected=%0d; Ldm82=%0d expected=%0d",
                    case_no, $time, Torque_Ld0_S35_Q17, Expected_Ld0_S35_Q17,
                    Torque_Ldm82_S35_Q17, Expected_Ldm82_S35_Q17);
            end
            if (Torque_STM32_Ld0_S16_Q5 !== Expected_STM32_Ld0_S16_Q5 ||
                Torque_STM32_Ldm82_S16_Q5 !== Expected_STM32_Ldm82_S16_Q5) begin
                errors = errors + 1;
                $display("FAIL STM32 case %0d: Ld0=%0d expected=%0d; Ldm82=%0d expected=%0d",
                    case_no, Torque_STM32_Ld0_S16_Q5, Expected_STM32_Ld0_S16_Q5,
                    Torque_STM32_Ldm82_S16_Q5, Expected_STM32_Ldm82_S16_Q5);
            end
        end
    endtask

    task apply_currents;
        input [7:0] number;
        input signed [17:0] d_raw, q_raw;
        begin
            @(negedge clk_180MHz);
            check_valid = 0;
            case_no = number;
            I_d_S18_Q9 = d_raw;
            I_q_S18_Q9 = q_raw;
            Expected_Ld0_S35_Q17 = reference_torque(d_raw, q_raw, 16'sd0,
                Phir_Half_S16_Q15, p_n_S16_Q0);
            Expected_Ldm82_S35_Q17 = reference_torque(d_raw, q_raw, -16'sd82,
                Phir_Half_S16_Q15, p_n_S16_Q0);
            Expected_STM32_Ld0_S16_Q5 = reference_stm32(Expected_Ld0_S35_Q17);
            Expected_STM32_Ldm82_S16_Q5 = reference_stm32(Expected_Ldm82_S35_Q17);
            // The original module has no coherent input sampling. Hold all
            // inputs steady and exclude startup/mixed-frame transients.
            repeat (SETTLE_CYCLES) @(posedge clk_180MHz);
            #0.1;
            check_valid = 1;
            check_outputs;
            $display("CASE %0d: id=%0.1f A iq=%0.1f A | Ld0: %0d (%0.8f Nm) | Ldm82: %0d (%0.8f Nm) | delta=%0.8f Nm",
                case_no, Id_A, Iq_A, Torque_Ld0_S35_Q17, Torque_Ld0_Nm,
                Torque_Ldm82_S35_Q17, Torque_Ldm82_Nm, Torque_Delta_Nm);
            repeat (HOLD_CYCLES - SETTLE_CYCLES) @(posedge clk_180MHz);
            #0.1;
            check_outputs;
        end
    endtask

    initial begin
        Expected_Ld0_S35_Q17 = 0;
        Expected_Ldm82_S35_Q17 = 0;
        Expected_STM32_Ld0_S16_Q5 = 0;
        Expected_STM32_Ldm82_S16_Q5 = 0;
        if (HOLD_CYCLES <= SETTLE_CYCLES || SETTLE_CYCLES < 54) begin
            $display("FAIL: require HOLD_CYCLES > SETTLE_CYCLES >= 54");
            $finish;
        end
        // CoreGen glbl asserts GSR for 100 ns. Release local reset after it.
        #200;
        @(negedge clk_180MHz); rst_n = 1'b1;
        apply_currents(8'd0, 18'sd0, 18'sd0);
        // Sweep d-axis current with iq held at +10 A.
        apply_currents(8'd1, -18'sd5120, 18'sd5120); // id = -10 A.
        apply_currents(8'd2, -18'sd2560, 18'sd5120); // id = -5 A.
        apply_currents(8'd3,  18'sd0,    18'sd5120); // id =  0 A.
        apply_currents(8'd4,  18'sd2560, 18'sd5120); // id = +5 A.
        apply_currents(8'd5,  18'sd5120, 18'sd5120); // id = +10 A.
        // Sweep q-axis current with id held at -5 A.
        apply_currents(8'd6, -18'sd2560, -18'sd5120); // iq = -10 A.
        apply_currents(8'd7, -18'sd2560, -18'sd2560); // iq = -5 A.
        apply_currents(8'd8, -18'sd2560,  18'sd0);    // iq =  0 A.
        apply_currents(8'd9, -18'sd2560,  18'sd2560); // iq = +5 A.
        apply_currents(8'd10,-18'sd2560,  18'sd5120); // iq = +10 A.
        test_done = 1;
        if (errors == 0)
            $display("PASS: %0d checks of Q17 torque and saturated Q5 STM32, 11 current cases, Ld-Lq raw 0 and -82", checked);
        else
            $display("FAIL: %0d errors in %0d checks", errors, checked);
        // Let ModelSim run all finish naturally without closing the waveform.
        // ModelSim uses -onfinish stop in the supplied run script.
        $finish;
    end
endmodule


// PREVIOUS TESTBENCH (commented out, 2026-10-09)
// `timescale 1ns / 1ps
// module test_Te_calc;
//     reg clk_180MHz = 0;
//     always #2.778 clk_180MHz = ~clk_180MHz;
//     reg rst_n = 0;
//     reg signed [17:0] id_in = 0, iq_in = 0;
//     reg signed [15:0] ld_in = 0, flux_in = 0, pn_in = 0;
//     wire signed [34:0] stm32_out, wrap_out;
//     Te_calc stm32(clk_180MHz, rst_n, id_in, iq_in, ld_in, flux_in, pn_in, stm32_out);
//     Te_calc #(.SATURATE(0)) wrap(clk_180MHz, rst_n, id_in, iq_in, ld_in, flux_in, pn_in, wrap_out);
// 
//     // Check the real CoreGen STM3248A1 netlist against signed arithmetic.
//     reg signed [35:0] ip_product;
//     always @(posedge clk_180MHz) ip_product <= stm32.mul_a1 * stm32.mul_b1;
// 
//     integer errors = 0, checked = 0, cycle;
//     integer seed = 32'h1072026;
//     reg signed [34:0] expected_sat = 0, expected_wrap = 0;
//     reg signed [34:0] previous_sat = 0, previous_wrap = 0;
//     reg [4:0] phase;
// 
//     function signed [63:0] quantize18;
//         input signed [63:0] value;
//         input do_sat;
//         reg signed [17:0] bits18;
//         begin
//             if (do_sat && value > 131071) quantize18 = 131071;
//             else if (do_sat && value < -131072) quantize18 = -131072;
//             else begin bits18 = value[17:0]; quantize18 = bits18; end
//         end
//     endfunction
//     function signed [34:0] reference;
//         input signed [17:0] d, q;
//         input signed [15:0] ld, half_flux, poles;
//         input do_sat;
//         reg signed [63:0] d64, q64, ld64, flux64, p64, rel, pm, base, torque;
//         begin
//             d64 = d; q64 = q; ld64 = ld; flux64 = half_flux; p64 = poles;
//             rel = quantize18((d64 * ld64) >>> 12, do_sat);
//             pm = quantize18((q64 * (2 * flux64)) >>> 15, do_sat);
//             base = quantize18((rel * q64) >>> 9, do_sat);
//             torque = 384 * p64 * (pm + base);
//             if (do_sat && torque > 64'sd17179869183) reference = 35'sh3ffffffff;
//             else if (do_sat && torque < -64'sd17179869184) reference = 35'sh400000000;
//             else reference = torque[34:0];
//         end
//     endfunction
// 
//     always @(posedge clk_180MHz) begin
//         if (!rst_n) begin
//             #0.1;
//             if (stm32_out !== 0 || wrap_out !== 0) errors = errors + 1;
//             previous_sat = 0; previous_wrap = 0;
//         end else begin
//             phase = stm32.Time_cnt;
//             if (phase == 0) begin
//                 expected_sat = reference(id_in, iq_in, ld_in, flux_in, pn_in, 1);
//                 expected_wrap = reference(id_in, iq_in, ld_in, flux_in, pn_in, 0);
//             end
//             #0.1;
//             if ($time > 105 && ip_product !== stm32.mul_result1) begin
//                 $display("FAIL multiplier/IP mismatch at %0t", $time);
//                 errors = errors + 1;
//             end
//             if (phase == 17) begin
//                 checked = checked + 1;
//                 if (stm32_out !== expected_sat || wrap_out !== expected_wrap) begin
//                     $display("FAIL frame %0d: stm32=%0d expected=%0d wrap=%0d expected_wrap=%0d",
//                         checked, stm32_out, expected_sat, wrap_out, expected_wrap);
//                     errors = errors + 1;
//                 end
//                 previous_sat = expected_sat; previous_wrap = expected_wrap;
//             end else if (stm32_out !== previous_sat || wrap_out !== previous_wrap) begin
//                 $display("FAIL output changed outside enable phase %0d", phase);
//                 errors = errors + 1;
//             end
//         end
//     end
// 
//     task directed;
//         input signed [17:0] d, q;
//         input signed [15:0] ld, half_flux, poles;
//         begin
//             @(negedge clk_180MHz);
//             id_in = d; iq_in = q; ld_in = ld; flux_in = half_flux; pn_in = poles;
//             repeat (36) @(negedge clk_180MHz);
//         end
//     endtask
// 
//     initial begin
//         // Let the CoreGen netlist's global startup reset finish first.
//         #120;
//         @(negedge clk_180MHz); rst_n = 1;
//         directed(0, 0, 0, 0, 0);
//         directed(0, 512, 0, 16384, 2); // PM only: 393216 Q17.
//         directed(512, 512, 4096, 16384, 2); // Both terms: 786432 Q17.
//         directed(512, -512, 4096, 16384, 2);
//         directed(-513, 511, -12, 1638, 4); // Fractional negative shifts.
//         directed(-131072, -131072, -32768, -32768, -32768);
//         directed(131071, 131071, 32767, 32767, 32767);
//         directed(-131072, 131071, -32768, 32767, -32768);
//         // Change every input every clock to expose mixed-sample/pipeline bugs.
//         for (cycle = 0; cycle < 18000; cycle = cycle + 1) begin
//             @(negedge clk_180MHz);
//             id_in = $random(seed); iq_in = $random(seed);
//             ld_in = $random(seed); flux_in = $random(seed); pn_in = $random(seed);
//             if (cycle == 911) rst_n = 0;
//             if (cycle == 913) rst_n = 1;
//         end
//         repeat (36) @(negedge clk_180MHz);
//         if (errors == 0 && checked >= 1000)
//             $display("PASS: %0d frames, STM32/saturation/wrap, signed shifts, saturation, reset, coherent sampling, actual IP latency", checked);
//         else
//             $display("FAIL: %0d errors, %0d frames", errors, checked);
//         $finish;
//     end
// endmodule
// 
// /* ORIGINAL TESTBENCH (obsolete ports, commented out)
// `timescale 1ns / 1ps
// 
// ////////////////////////////////////////////////////////////////////////////////
// // Company: 
// // Engineer:
// //
// // Create Date:   15:17:56 07/20/2026
// // Design Name:   Te_calc
// // Module Name:   Z:/share/jul16_LCL/LCL_26JUL/test_Te_calc.v
// // Project Name:  LCL
// // Target Device:  
// // Tool versions:  
// // Description: 
// //
// // Verilog Test Fixture created by ISE for module: Te_calc
// //
// // Dependencies:
// // 
// // Revision:
// // Revision 0.01 - File Created
// // Additional Comments:
// // 
// ////////////////////////////////////////////////////////////////////////////////
// module test_Te_calc;
//     // Inputs
//     reg                 clk_180MHz;
//     reg                 rst_n;
//     reg signed [17:0]   I_d_S18_Q9;
//     reg signed [17:0]   I_q_S18_Q9;
//     reg signed [17:0]   Ld_dash_Lq_S18_Q9;
//     reg signed [17:0]   Flux_S18_Q9;
//     reg signed [17:0]   p_n_S18_Q0;
// 
//     // Outputs
//     wire signed [34:0]  Torque_Out_S35_Q9;
// 
//     Te_calc uut (
//         .clk_180MHz       (clk_180MHz),
//         .rst_n             (rst_n),
//         .I_d_S18_Q9        (I_d_S18_Q9),
//         .I_q_S18_Q9        (I_q_S18_Q9),
//         .Ld_dash_Lq_S18_Q9(Ld_dash_Lq_S18_Q9),
//         .Flux_S18_Q9       (Flux_S18_Q9),
//         .p_n_S18_Q0        (p_n_S18_Q0),
//         .Torque_Out_S35_Q9 (Torque_Out_S35_Q9),
//     );
// 
//     // Hold each vector across the calculation and output-update cycles.
//     task apply_and_check;
//         input [2:0]         case_no;
//         input signed [17:0] id_in;
//         input signed [17:0] iq_in;
//         input signed [17:0] ld_lq_in;
//         input signed [17:0] flux_in;
//         input signed [17:0] pn_in;
//         input signed [35:0] expected_torque;
//         begin
//             @(negedge clk_180MHz);
//             I_d_S18_Q9        = id_in;
//             I_q_S18_Q9        = iq_in;
//             Ld_dash_Lq_S18_Q9 = ld_lq_in;
//             Flux_S18_Q9       = flux_in;
//             p_n_S18_Q0        = pn_in;
// 
//             repeat (40) @(posedge clk_180MHz);
//             #1;
//             if (Torque_Out_S35_Q9 !== expected_torque)
//                 $display("CASE %0d FAIL: torque = %0d, expected %0d",
//                          case_no, Torque_Out_S35_Q9, expected_torque);
//             else
//                 $display("CASE %0d PASS: torque = %0d", case_no,
//                          Torque_Out_S35_Q9);
//         end
//     endtask
// 
//     // 180 MHz clock: period = 5.556 ns, half-period = 2.778 ns.
//     initial begin
//         clk_180MHz = 1'b0;
//         forever #2.778 clk_180MHz = ~clk_180MHz;
//     end
// 
//     initial begin
//         rst_n                = 1'b0;
//         I_d_S18_Q9           = 18'sd0;
//         I_q_S18_Q9           = 18'sd0;
//         Ld_dash_Lq_S18_Q9    = 18'sd0;
//         Flux_S18_Q9          = 18'sd0;
//         p_n_S18_Q0           = 18'sd0;
// 
//         repeat (4) @(negedge clk_180MHz);
//         rst_n = 1'b1;
// 
//         // Case 0: all inputs are zero.
//         // Ideal Torque_Out_S35_Q9 = 0.
//         apply_and_check(3'd0, 18'sd0, 18'sd0, 18'sd0, 18'sd0,
//                         18'sd0, 36'sd0);
// 
//         // Case 1: permanent-magnet torque only.
//         // id=0, iq=512, Ld-Lq=0, Flux=512, p=2.
//         // Ideal Torque_Out_S35_Q9 = 1536.
//         apply_and_check(3'd1, 18'sd0, 18'sd512, 18'sd0, 18'sd512,
//                         18'sd2, 36'sd1536);
// 
//         // Case 2: permanent-magnet and reluctance torque.
//         // id=512, iq=512, Ld-Lq=512, Flux=512, p=2.
//         // Ideal Torque_Out_S35_Q9 = 3072.
//         apply_and_check(3'd2, 18'sd512, 18'sd512, 18'sd512, 18'sd512,
//                         18'sd2, 36'sd3072);
// 
//         $display("test_Te_calc_updated finished at %0t", $time);
//         $finish;
//     end
// 
// endmodule
// 
// */

