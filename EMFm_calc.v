`timescale 1ns / 1ps
// Five-phase mutual and saliency voltage. Phase axes A..E are 0,72,...,288 degrees.
// The four S16_Q12 inputs are phase-domain coefficients in mH.
// D = (Ld-Lq)/5, A = (Ld+Lq)/5, B = (L1+L2)/5, C = (L1-L2)/5.
// For output row i and current column j, with i and j starting at zero:
//   Lij = D*cos(t) - B*sin(t) + F[(j-i) mod 5], t = 2*theta_e - (i+j)*72 deg.
//   F[0] = 0 (the current integrator handles the fixed self-inductance).
//   F[d] = A*cos(d*72 deg) + C*sin(d*72 deg) for d != 0.
// B and C use the five-phase divisor. With three phases C would be
// (L1-L2)/3, whose product with sin(120 deg) gives (L1-L2)/(2*sqrt(3)).
// One 18-clock frame at 180 MHz updates all five filtered fluxes at 10 MHz.
// Each frame issues 12 coefficient products and 25 flux products on three
// multipliers. Slot 1 publishes coefficients begun in the previous frame.
module EMFm_calc (
    input  wire                clk,
    input  wire                rst_n,
    input  wire signed [15:0]  LdMinusLq_ov5_S16_Q12,
    input  wire signed [15:0]  LdPlusLq_ov5_S16_Q12,
    input  wire signed [15:0]  L1PlusL2_ov5_S16_Q12, // (L1+L2)/5, mH
    input  wire signed [15:0]  L1MinusL2_ov5_S16_Q12, // (L1-L2)/5, mH
    input  wire signed [17:0]  iA_S18_Q9, iB_S18_Q9, iC_S18_Q9,
    input  wire signed [17:0]  iD_S18_Q9, iE_S18_Q9,
    input  wire signed [17:0]  ePOS_S18_360, // 131072 counts per electrical revolution
    output wire signed [34:0]  eA_mutual_S35_Q17, eB_mutual_S35_Q17, eC_mutual_S35_Q17,
    output wire signed [34:0]  eD_mutual_S35_Q17, eE_mutual_S35_Q17
);

    localparam [4:0] FRAME_LAST = 5'd18;
    reg [4:0] slot;
    reg [6:0] diff_count;

    // All five channels use the same sampled currents and inductance parameters.
    wire signed [17:0] phase_current_q9 [0:4];
    assign phase_current_q9[0] = iA_S18_Q9;
    assign phase_current_q9[1] = iB_S18_Q9;
    assign phase_current_q9[2] = iC_S18_Q9;
    assign phase_current_q9[3] = iD_S18_Q9;
    assign phase_current_q9[4] = iE_S18_Q9;

    reg signed [17:0] diff_frame_q12, avg_frame_q12, sine_frame_q12, skew_frame_q12;

    // The low 16 counts encode the doubled angle modulo one revolution.
    // Multiply by 360 to produce degrees in Q16.16, split over two clocks.
    wire signed [31:0] angle_count = {16'd0, ePOS_S18_360[15:0]};
    reg signed [31:0] angle_hi, angle_lo, double_angle_q16;
    reg cordic_busy;
    wire cordic_call = (slot == 5'd3) && !cordic_busy;
    wire cordic_done;
    wire signed [17:0] cordic_cos, cordic_sin;
    reg signed [17:0] cos_complete, sin_complete;
    reg signed [17:0] cos_frame, sin_frame;
    wire signed [34:0] negative_sin = -$signed({{17{sin_frame[17]}}, sin_frame});

    BackEMF_CORDIC180 u_cordic (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done), .iData(double_angle_q16),
        .cos(cordic_cos), .sin(cordic_sin), .q_deg(), .q_y(), .q_x()
    );

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            slot <= 5'd1;
            diff_count <= 7'd0;
            diff_frame_q12 <= 18'sd0;
            avg_frame_q12 <= 18'sd0;
            sine_frame_q12 <= 18'sd0;
            skew_frame_q12 <= 18'sd0;
            angle_hi <= 32'sd0;
            angle_lo <= 32'sd0;
            double_angle_q16 <= 32'sd0;
            cordic_busy <= 1'b0;
            cos_complete <= 18'sd0;
            sin_complete <= 18'sd0;
            cos_frame <= 18'sd0;
            sin_frame <= 18'sd0;
        end else begin
            slot <= (slot == FRAME_LAST) ? 5'd1 : slot + 1'b1;
            if (slot == 5'd1) begin
                diff_frame_q12 <= LdMinusLq_ov5_S16_Q12;
                avg_frame_q12 <= LdPlusLq_ov5_S16_Q12;
                sine_frame_q12 <= L1PlusL2_ov5_S16_Q12;
                skew_frame_q12 <= L1MinusL2_ov5_S16_Q12;
                angle_hi <= (angle_count <<< 8) + (angle_count <<< 6);
                angle_lo <= (angle_count <<< 5) + (angle_count <<< 3);
                cos_frame <= cos_complete;
                sin_frame <= sin_complete;
            end
            if (slot == 5'd2)
                double_angle_q16 <= angle_hi + angle_lo;
            if (cordic_call)
                cordic_busy <= 1'b1;
            if (cordic_done) begin
                cordic_busy <= 1'b0;
                cos_complete <= cordic_cos;
                sin_complete <= cordic_sin;
            end
            if (slot == 5'd5)
                diff_count <= (diff_count == 7'd75) ? 7'd0 : diff_count + 1'b1;
        end
    end

    // Three physical multiplier instances. Each accepts new operands on every
    // clock. The registered operands issued at slot n are captured at n+5 with the four-stage CoreGen IP.
    wire signed [52:0] mul_result [0:2];
    localparam signed [17:0] COS_72_Q17  = 18'sd40503;
    localparam signed [17:0] COS_144_Q17 = -18'sd106039;
    localparam signed [17:0] SIN_72_Q17  = 18'sd124657;
    localparam signed [17:0] SIN_144_Q17 = 18'sd77042;

    // T = D*cos(2*theta_e) - B*sin(2*theta_e).
    // U = D*sin(2*theta_e) + B*cos(2*theta_e).
    // Opposite offsets share the cosine product and reverse the sine product.
    reg signed [34:0] d_cos, b_neg_sin, d_sin, b_cos, t, u;
    reg signed [34:0] fixed_cos_72, fixed_cos_144, fixed_sin_72, fixed_sin_144;
    reg signed [34:0] t_cos_72, t_cos_144, u_sin_72, u_sin_144;
    reg signed [34:0] u_neg_sin_72, u_neg_sin_144;
    reg exact_sin_72, exact_sin_144;
    reg signed [34:0] saliency [0:4], fixed_term [0:4];
    reg signed [34:0] saliency_frame [0:4], fixed_frame [0:4];
    reg signed [17:0] current_snapshot [0:4], current_delay [0:4], current_frame [0:4];
    wire signed [34:0] flux_sample [0:4];
    integer k;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            d_cos <= 0; b_neg_sin <= 0; d_sin <= 0; b_cos <= 0;
            t <= 0; u <= 0;
            fixed_cos_72 <= 0; fixed_cos_144 <= 0;
            fixed_sin_72 <= 0; fixed_sin_144 <= 0;
            t_cos_72 <= 0; t_cos_144 <= 0; u_sin_72 <= 0; u_sin_144 <= 0;
            u_neg_sin_72 <= 0; u_neg_sin_144 <= 0;
            exact_sin_72 <= 0; exact_sin_144 <= 0;
            for (k=0; k<5; k=k+1) begin
                saliency[k] <= 0;
                fixed_term[k] <= 0;
                saliency_frame[k] <= 0;
                fixed_frame[k] <= 0;
                current_snapshot[k] <= 0;
                current_delay[k] <= 0;
                current_frame[k] <= 0;
            end
        end else begin
            case (slot)
                5'd1: begin
                    // floor(-x) = -floor(x) if x is integral, else -floor(x)-1.
                    saliency[0] <= t;
                    saliency[1] <= t_cos_72 + u_sin_72;
                    saliency[2] <= t_cos_144 + u_sin_144;
                    saliency[3] <= t_cos_144 + u_neg_sin_144;
                    saliency[4] <= t_cos_72 + u_neg_sin_72;
                    fixed_term[1] <= fixed_cos_72 + fixed_sin_72;
                    fixed_term[2] <= fixed_cos_144 + fixed_sin_144;
                    fixed_term[3] <= fixed_cos_144 - fixed_sin_144;
                    fixed_term[4] <= fixed_cos_72 - fixed_sin_72;
                    for (k=0; k<5; k=k+1) begin
                        current_delay[k] <= current_snapshot[k];
                        current_snapshot[k] <= phase_current_q9[k];
                    end
                end
                5'd7: begin
                    // mul_result[0] = D*cos(2*theta_e), Q29 part of T.
                    d_cos <= mul_result[0][34:0];
                    // mul_result[1] = B*(-sin(2*theta_e)), Q29 part of T.
                    b_neg_sin <= mul_result[1][34:0];
                    // mul_result[2] = D*sin(2*theta_e), Q29 part of U.
                    d_sin <= mul_result[2][34:0];
                end
                5'd8: begin
                    t <= d_cos + b_neg_sin;
                    // mul_result[0] = B*cos(2*theta_e), Q29 part of U.
                    b_cos <= mul_result[0][34:0];
                    // mul_result[1] = A*cos(72 deg), Q29 fixed symmetric term.
                    fixed_cos_72 <= mul_result[1][34:0];
                    // mul_result[2] = C*sin(72 deg), Q29 fixed skew term.
                    fixed_sin_72 <= mul_result[2][34:0];
                end
                5'd9: begin
                    u <= d_sin + b_cos;
                    // mul_result[1] = A*cos(144 deg), Q29 fixed symmetric term.
                    fixed_cos_144 <= mul_result[1][34:0];
                    // mul_result[2] = C*sin(144 deg), Q29 fixed skew term.
                    fixed_sin_144 <= mul_result[2][34:0];
                end
                5'd16: begin
                    // mul_result[0] = T*cos(72 deg), Q46 -> Q29 for offsets +/-72.
                    t_cos_72 <= mul_result[0][51:17];
                    // mul_result[1] = U*sin(72 deg), Q46 -> Q29 for offsets +/-72.
                    u_sin_72 <= mul_result[1][51:17];
                    exact_sin_72 <= (mul_result[1][16:0] == 0);
                    // mul_result[2] = T*cos(144 deg), Q46 -> Q29 for offsets +/-144.
                    t_cos_144 <= mul_result[2][51:17];

                    // Keep the matching coefficients and currents stable through
                    // the next frame's last flux operand issue.
                    for (k=0; k<5; k=k+1) begin
                        saliency_frame[k] <= saliency[k];
                        fixed_frame[k] <= fixed_term[k];
                        current_frame[k] <= current_delay[k];
                    end
                end
                5'd17: begin
                    // mul_result[2] = U*sin(144 deg), Q46 -> Q29 for offsets +/-144.
                    u_sin_144 <= mul_result[2][51:17];
                    exact_sin_144 <= (mul_result[2][16:0] == 0);
                    u_neg_sin_72 <= ~u_sin_72 + {34'd0, exact_sin_72};
                end
                5'd18: u_neg_sin_144 <= ~u_sin_144 + {34'd0, exact_sin_144};
            endcase
        end
    end

    // For a given angle index r, row i multiplies current j=(r-i) mod 5.
    // All active lanes therefore use the same saliency coefficient in a slot.
    reg signed [34:0] shared_saliency;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            shared_saliency <= 0;
        else begin
            case (slot)
                5'd18, 5'd8: shared_saliency <= saliency_frame[0];
                5'd4, 5'd9: shared_saliency <= saliency_frame[1];
                5'd5, 5'd12: shared_saliency <= saliency_frame[2];
                5'd6, 5'd13: shared_saliency <= saliency_frame[3];
                5'd7, 5'd14: shared_saliency <= saliency_frame[4];
            endcase
        end
    end

    genvar lane;
    generate
        for (lane=0; lane<3; lane=lane+1) begin : multiplier
            reg signed [34:0] mul_a, fixed_selected;
            reg signed [17:0] mul_b, current_selected;

            if (lane == 0) begin : core_a
                mul18x35_1225_BySunY u_mul (.clk(clk), .a(mul_b), .b(mul_a), .p(mul_result[lane]));
            end else begin : core_b
                mul_inductor_2 u_mul (.clk(clk), .a(mul_b), .b(mul_a), .p(mul_result[lane]));
            end

            // First pass handles A/B/C, second pass handles D/E.
            localparam R0 = lane;
            localparam R1 = lane + 3;

            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    fixed_selected <= 0;
                    current_selected <= 0;
                end else begin
                    case (slot)
                        5'd18: begin
                            fixed_selected <= fixed_frame[(0 + 10 - 2*R0) % 5];
                            current_selected <= current_frame[(0 + 5 - R0) % 5];
                        end
                        5'd4: begin
                            fixed_selected <= fixed_frame[(1 + 10 - 2*R0) % 5];
                            current_selected <= current_frame[(1 + 5 - R0) % 5];
                        end
                        5'd5: begin
                            fixed_selected <= fixed_frame[(2 + 10 - 2*R0) % 5];
                            current_selected <= current_frame[(2 + 5 - R0) % 5];
                        end
                        5'd6: begin
                            fixed_selected <= fixed_frame[(3 + 10 - 2*R0) % 5];
                            current_selected <= current_frame[(3 + 5 - R0) % 5];
                        end
                        5'd7: begin
                            fixed_selected <= fixed_frame[(4 + 10 - 2*R0) % 5];
                            current_selected <= current_frame[(4 + 5 - R0) % 5];
                        end
                        5'd8: if (lane < 2) begin
                            fixed_selected <= fixed_frame[(0 + 10 - 2*R1) % 5];
                            current_selected <= current_frame[(0 + 5 - R1) % 5];
                        end
                        5'd9: if (lane < 2) begin
                            fixed_selected <= fixed_frame[(1 + 10 - 2*R1) % 5];
                            current_selected <= current_frame[(1 + 5 - R1) % 5];
                        end
                        5'd12: if (lane < 2) begin
                            fixed_selected <= fixed_frame[(2 + 10 - 2*R1) % 5];
                            current_selected <= current_frame[(2 + 5 - R1) % 5];
                        end
                        5'd13: if (lane < 2) begin
                            fixed_selected <= fixed_frame[(3 + 10 - 2*R1) % 5];
                            current_selected <= current_frame[(3 + 5 - R1) % 5];
                        end
                        5'd14: if (lane < 2) begin
                            fixed_selected <= fixed_frame[(4 + 10 - 2*R1) % 5];
                            current_selected <= current_frame[(4 + 5 - R1) % 5];
                        end
                    endcase
                end
            end

            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    mul_a <= 0;
                    mul_b <= 0;
                end else begin
                    case (slot)
                        5'd2: begin
                            case (lane)
                                0: begin mul_a <= cos_frame;    mul_b <= diff_frame_q12; end
                                1: begin mul_a <= negative_sin; mul_b <= sine_frame_q12; end
                                2: begin mul_a <= sin_frame;    mul_b <= diff_frame_q12; end
                            endcase
                        end
                        5'd3: begin
                            case (lane)
                                0: begin mul_a <= cos_frame;  mul_b <= sine_frame_q12; end
                                1: begin mul_a <= COS_72_Q17; mul_b <= avg_frame_q12; end
                                2: begin mul_a <= SIN_72_Q17; mul_b <= skew_frame_q12; end
                            endcase
                        end
                        5'd4: begin
                            if (lane == 1) begin mul_a <= COS_144_Q17; mul_b <= avg_frame_q12; end
                            if (lane == 2) begin mul_a <= SIN_144_Q17; mul_b <= skew_frame_q12; end
                        end
                        5'd11: begin
                            case (lane)
                                0: begin mul_a <= t; mul_b <= COS_72_Q17; end
                                1: begin mul_a <= u; mul_b <= SIN_72_Q17; end
                                2: begin mul_a <= t; mul_b <= COS_144_Q17; end
                            endcase
                        end
                        5'd12: if (lane == 2) begin mul_a <= u; mul_b <= SIN_144_Q17; end
                        5'd1, 5'd5, 5'd6, 5'd7, 5'd8: begin
                            mul_a <= shared_saliency + fixed_selected;
                            mul_b <= current_selected;
                        end
                        5'd9, 5'd10, 5'd13, 5'd14, 5'd15: if (lane < 2) begin
                            mul_a <= shared_saliency + fixed_selected;
                            mul_b <= current_selected;
                        end
                    endcase
                end
            end

            // Keep the low carry separate so neither accumulator adder spans
            // 56 bits. The final carry is added before converting Q38 to Q17.
            reg [30:0] sum_low;
            reg low_carry;
            reg signed [24:0] sum_high;
            wire signed [52:0] lane_product = mul_result[lane];
            wire signed [24:0] product_high = {{3{lane_product[52]}}, lane_product[52:31]};
            wire signed [24:0] high_with_carry = sum_high + $signed({24'd0, low_carry});
            wire signed [34:0] completed_flux = {{10{high_with_carry[24]}}, high_with_carry};

            reg signed [34:0] flux_abc;
            assign flux_sample[R0] = flux_abc;
            if (lane < 2) begin : flux_de
                assign flux_sample[R1] = completed_flux;
            end

            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    sum_low <= 0;
                    low_carry <= 0;
                    sum_high <= 0;
                    flux_abc <= 0;
                end else begin
                    case (slot)
                        5'd6: begin
                            // mul_result[lane] = L[R0,j]*i[j], Q38, first ABC product (r=0).
                            sum_low <= lane_product[30:0];
                            low_carry <= 0;
                            sum_high <= product_high;
                        end
                        5'd10, 5'd11, 5'd12, 5'd13: begin
                            // mul_result[lane] = L[R0,j]*i[j], Q38, remaining ABC products (r=1..4).
                            {low_carry, sum_low} <= {1'b0,sum_low} + {1'b0,lane_product[30:0]};
                            sum_high <= sum_high + product_high + $signed({24'd0, low_carry});
                        end
                        5'd14: begin
                            flux_abc <= completed_flux;
                            if (lane < 2) begin
                                // mul_result[lane] = L[R1,j]*i[j], Q38, first DE product (r=0).
                                sum_low <= lane_product[30:0];
                                low_carry <= 0;
                                sum_high <= product_high;
                            end
                        end
                        5'd15, 5'd18, 5'd1, 5'd2: if (lane < 2) begin
                            // mul_result[lane] = L[R1,j]*i[j], Q38, remaining DE products (r=1..4).
                            {low_carry, sum_low} <= {1'b0,sum_low} + {1'b0,lane_product[30:0]};
                            sum_high <= sum_high + product_high + $signed({24'd0, low_carry});
                        end
                    endcase
                end
            end

        end
    endgenerate

    wire signed [34:0] voltage_q17 [0:4];
    assign eA_mutual_S35_Q17 = voltage_q17[0];
    assign eB_mutual_S35_Q17 = voltage_q17[1];
    assign eC_mutual_S35_Q17 = voltage_q17[2];
    assign eD_mutual_S35_Q17 = voltage_q17[3];
    assign eE_mutual_S35_Q17 = voltage_q17[4];

    genvar row;
    generate
        for (row=0; row<5; row=row+1) begin : phase
            reg signed [34:0] flux_q17, filtered_flux_q17, previous_flux_q17;
            reg signed [34:0] filter_acc, filter_error, emf_q17, emf_output_q17;
            wire signed [34:0] next_filter_acc = filter_acc + filter_error;
            assign voltage_q17[row] = emf_output_q17;

            always @(posedge clk or negedge rst_n) begin
                if (!rst_n) begin
                    flux_q17 <= 0;
                    filtered_flux_q17 <= 0;
                    previous_flux_q17 <= 0;
                    filter_acc <= 0;
                    filter_error <= 0;
                    emf_q17 <= 0;
                    emf_output_q17 <= 0;
                end else begin
                    case (slot)
                        5'd3: flux_q17 <= flux_sample[row];
                        5'd4: filter_error <= flux_q17 - filtered_flux_q17;
                        5'd5: begin
                            // The actual differentiation interval is 76 * 100 ns.
                            if (diff_count == 7'd75) begin
                                emf_q17 <= (filtered_flux_q17 - previous_flux_q17) <<< 17;
                                previous_flux_q17 <= filtered_flux_q17;
                            end
                            emf_output_q17 <= emf_q17;
                        end
                        5'd6: begin
                            filter_acc <= next_filter_acc;
                            filtered_flux_q17 <= next_filter_acc >>> 7;
                        end
                    endcase
                end
            end
        end
    endgenerate
endmodule
