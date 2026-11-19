`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Mutual inductance and flux integration for a symmetric five-phase PMSM.
// Architecture: Plan B (3x time-multiplexed 18x35 multipliers, 18-cycle / 10 MHz frame).
//
// Fixed-point contract (all inductance inputs are signed S16_Q12 in mH):
//   DIFov5_S16_Q12    : (Ld1 - Lq1) / 5
//   L1pL2_ov5_S16_Q12 : (L1 + L2) / 5
//   AVG_72_S16_Q12    : A1 = ((Ld1+Lq1)/5)*cos(72 deg)  + ((Ld3+Lq3)/5)*cos(144 deg)
//   AVG_144_S16_Q12   : A2 = ((Ld1+Lq1)/5)*cos(144 deg) + ((Ld3+Lq3)/5)*cos(72 deg)
//   ASYM_72_S16_Q12   : D1 = ((L1-L2)/5)*sin(72 deg)
//   ASYM_144_S16_Q12  : D2 = ((L1-L2)/5)*sin(144 deg)
//   iA..iE_S18_Q9     : five-phase stator currents, in A
//   ePOS_S18_360      : electrical position, 131072 counts/revolution
//   outputs           : eA..eE_mutual_S35_Q17, mutual back-EMF in V
//
// Sign convention note:
//   AVG_72_S16_Q12 and AVG_144_S16_Q12 carry their native mathematical signs
//   (typically A1 > 0 for adjacent +/-72 deg phases, A2 < 0 for non-adjacent
//   +/-144 deg phases) and are added directly into the inductance matrix.
//
// Pipeline schedule (180 MHz clock, 18 slots per frame):
//   Slots 18, 1..3  : 10 trig products (M0..M4, N0..N4) fed to MUL1/MUL2/MUL3
//   Slots 2..5      : trig products sampled (2-slot IP latency); K0..K4 and
//                     constant offsets precomputed
//   Slot 6          : 5x5 matrix L11..L55 constructed (1-level 35-bit adders);
//                     phase currents iA..iE latched for frame coherence
//   Slots 7..15     : 25 L*i products fed across MUL1/MUL2/MUL3
//   Slots 9..17     : 25 L*i products sampled into Phi_a1..Phi_e5
//   Slots 17, 18, 1 : 3-stage single-adder-depth 56-bit flux summation tree,
//                     scaled >>> 31 into Phi1..Phi5_Wb_tmp (S35_Q17, Wb)
//   Slot 2          : synchronous 10 MHz clock-enable updates Euler/LP filter
//                     and 131072 Hz differentiated mutual back-EMF outputs
//////////////////////////////////////////////////////////////////////////////////
module EMFm_calc_5ph (
    input  wire                 clk,
    input  wire                 rst_n,

    input  wire signed [15:0]   DIFov5_S16_Q12,
    input  wire signed [15:0]   L1pL2_ov5_S16_Q12,
    input  wire signed [15:0]   AVG_72_S16_Q12,
    input  wire signed [15:0]   AVG_144_S16_Q12,
    input  wire signed [15:0]   ASYM_72_S16_Q12,
    input  wire signed [15:0]   ASYM_144_S16_Q12,

    input  wire signed [17:0]   iA_S18_Q9,
    input  wire signed [17:0]   iB_S18_Q9,
    input  wire signed [17:0]   iC_S18_Q9,
    input  wire signed [17:0]   iD_S18_Q9,
    input  wire signed [17:0]   iE_S18_Q9,
    input  wire signed [17:0]   ePOS_S18_360,

    output reg  signed [34:0]   eA_mutual_S35_Q17,
    output reg  signed [34:0]   eB_mutual_S35_Q17,
    output reg  signed [34:0]   eC_mutual_S35_Q17,
    output reg  signed [34:0]   eD_mutual_S35_Q17,
    output reg  signed [34:0]   eE_mutual_S35_Q17
);

    // -------------------------------------------------------------------------
    // 1. 180 MHz / 18 = 10 MHz frame counter
    // -------------------------------------------------------------------------
    reg [4:0] Time_cnt;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            Time_cnt <= 5'd1;
        else if (Time_cnt == 5'd18)
            Time_cnt <= 5'd1;
        else
            Time_cnt <= Time_cnt + 1'b1;
    end

    // -------------------------------------------------------------------------
    // 2. CORDIC angle generation (2*ePOS - k*72 deg, k = 0..4)
    // -------------------------------------------------------------------------
    // 2*ePOS repeats every 65536 ePOS counts; taking low 16 bits wraps to [0, 360) deg.
    wire [15:0]        epos2_count     = ePOS_S18_360[15:0];
    wire signed [31:0] epos2_count_ext = {16'd0, epos2_count};
    // 360 = 256 + 64 + 32 + 8; result is degrees in Q16.16 format.
    wire signed [31:0] angle_2epos_q16 =
          (epos2_count_ext <<< 8) + (epos2_count_ext <<< 6)
        + (epos2_count_ext <<< 5) + (epos2_count_ext <<< 3);

    localparam signed [31:0] ANGLE_72_Q16  = 32'sd4718592;   //  72 * 65536
    localparam signed [31:0] ANGLE_144_Q16 = 32'sd9437184;   // 144 * 65536
    localparam signed [31:0] ANGLE_216_Q16 = 32'sd14155776;  // 216 * 65536
    localparam signed [31:0] ANGLE_288_Q16 = 32'sd18874368;  // 288 * 65536

    wire signed [31:0] angle_0_q16 = angle_2epos_q16;
    wire signed [31:0] angle_1_q16 = angle_2epos_q16 - ANGLE_72_Q16;
    wire signed [31:0] angle_2_q16 = angle_2epos_q16 - ANGLE_144_Q16;
    wire signed [31:0] angle_3_q16 = angle_2epos_q16 - ANGLE_216_Q16;
    wire signed [31:0] angle_4_q16 = angle_2epos_q16 - ANGLE_288_Q16;

    reg  cordic_busy;
    wire cordic_call = (Time_cnt == 5'd18) && !cordic_busy;
    wire cordic_done_0, cordic_done_1, cordic_done_2, cordic_done_3, cordic_done_4;
    wire signed [17:0] cordic_cos_0, cordic_cos_1, cordic_cos_2, cordic_cos_3, cordic_cos_4;
    wire signed [17:0] cordic_sin_0, cordic_sin_1, cordic_sin_2, cordic_sin_3, cordic_sin_4;

    reg signed [17:0] cos_0_S18_Q17, cos_1_S18_Q17, cos_2_S18_Q17, cos_3_S18_Q17, cos_4_S18_Q17;
    reg signed [17:0] sin_0_S18_Q17, sin_1_S18_Q17, sin_2_S18_Q17, sin_3_S18_Q17, sin_4_S18_Q17;

    CORDIC_STANDALONE u_cordic_0 (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_0), .iData(angle_0_q16),
        .cos(cordic_cos_0), .sin(cordic_sin_0),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_1 (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_1), .iData(angle_1_q16),
        .cos(cordic_cos_1), .sin(cordic_sin_1),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_2 (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_2), .iData(angle_2_q16),
        .cos(cordic_cos_2), .sin(cordic_sin_2),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_3 (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_3), .iData(angle_3_q16),
        .cos(cordic_cos_3), .sin(cordic_sin_3),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_4 (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_4), .iData(angle_4_q16),
        .cos(cordic_cos_4), .sin(cordic_sin_4),
        .q_deg(), .q_y(), .q_x()
    );

    wire cordic_any_done = cordic_done_0 || cordic_done_1 || cordic_done_2
                        || cordic_done_3 || cordic_done_4;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cordic_busy   <= 1'b0;
            cos_0_S18_Q17 <= 18'sd0; cos_1_S18_Q17 <= 18'sd0; cos_2_S18_Q17 <= 18'sd0;
            cos_3_S18_Q17 <= 18'sd0; cos_4_S18_Q17 <= 18'sd0;
            sin_0_S18_Q17 <= 18'sd0; sin_1_S18_Q17 <= 18'sd0; sin_2_S18_Q17 <= 18'sd0;
            sin_3_S18_Q17 <= 18'sd0; sin_4_S18_Q17 <= 18'sd0;
        end else begin
            if (cordic_call)
                cordic_busy <= 1'b1;
            if (cordic_any_done) begin
                cordic_busy   <= 1'b0;
                cos_0_S18_Q17 <= cordic_cos_0;
                cos_1_S18_Q17 <= cordic_cos_1;
                cos_2_S18_Q17 <= cordic_cos_2;
                cos_3_S18_Q17 <= cordic_cos_3;
                cos_4_S18_Q17 <= cordic_cos_4;
                sin_0_S18_Q17 <= cordic_sin_0;
                sin_1_S18_Q17 <= cordic_sin_1;
                sin_2_S18_Q17 <= cordic_sin_2;
                sin_3_S18_Q17 <= cordic_sin_3;
                sin_4_S18_Q17 <= cordic_sin_4;
            end
        end
    end

    // -------------------------------------------------------------------------
    // 3. Three time-multiplexed 18x35 signed multipliers (2-slot latency)
    // -------------------------------------------------------------------------
    reg  signed [34:0] mul_a1, mul_a2, mul_a3;
    reg  signed [17:0] mul_b1, mul_b2, mul_b3;
    wire signed [52:0] mul_result1, mul_result2, mul_result3;

    MTPL_mutual_A u_mul1 (
        .clk(clk), .a(mul_a1), .b(mul_b1), .p(mul_result1)
    );
    MTPL_mutual_B u_mul2 (
        .clk(clk), .a(mul_a2), .b(mul_b2), .p(mul_result2)
    );
    MTPL_mutual_C u_mul3 (
        .clk(clk), .a(mul_a3), .b(mul_b3), .p(mul_result3)
    );

    // Sign-extend S16_Q12 multiplier operands to 18-bit signed width.
    wire signed [17:0] dif_ov5_ext   = {{2{DIFov5_S16_Q12[15]}},    DIFov5_S16_Q12};
    wire signed [17:0] l1pl2_ov5_ext = {{2{L1pL2_ov5_S16_Q12[15]}}, L1pL2_ov5_S16_Q12};

    // Align S16_Q12 constant inductance terms to S35_Q29 (shift left by 17).
    wire signed [34:0] avg_72_S35_Q29   = {{2{AVG_72_S16_Q12[15]}},   AVG_72_S16_Q12,   17'b0};
    wire signed [34:0] avg_144_S35_Q29  = {{2{AVG_144_S16_Q12[15]}},  AVG_144_S16_Q12,  17'b0};
    wire signed [34:0] asym_72_S35_Q29  = {{2{ASYM_72_S16_Q12[15]}},  ASYM_72_S16_Q12,  17'b0};
    wire signed [34:0] asym_144_S35_Q29 = {{2{ASYM_144_S16_Q12[15]}}, ASYM_144_S16_Q12, 17'b0};

    // Sign-extend S18_Q17 trig values to 35 bits before negation to handle -1.0 exactly.
    wire signed [34:0] cos_0_ext = {{17{cos_0_S18_Q17[17]}}, cos_0_S18_Q17};
    wire signed [34:0] cos_1_ext = {{17{cos_1_S18_Q17[17]}}, cos_1_S18_Q17};
    wire signed [34:0] cos_2_ext = {{17{cos_2_S18_Q17[17]}}, cos_2_S18_Q17};
    wire signed [34:0] cos_3_ext = {{17{cos_3_S18_Q17[17]}}, cos_3_S18_Q17};
    wire signed [34:0] cos_4_ext = {{17{cos_4_S18_Q17[17]}}, cos_4_S18_Q17};

    wire signed [34:0] neg_sin_0_ext = -$signed({{17{sin_0_S18_Q17[17]}}, sin_0_S18_Q17});
    wire signed [34:0] neg_sin_1_ext = -$signed({{17{sin_1_S18_Q17[17]}}, sin_1_S18_Q17});
    wire signed [34:0] neg_sin_2_ext = -$signed({{17{sin_2_S18_Q17[17]}}, sin_2_S18_Q17});
    wire signed [34:0] neg_sin_3_ext = -$signed({{17{sin_3_S18_Q17[17]}}, sin_3_S18_Q17});
    wire signed [34:0] neg_sin_4_ext = -$signed({{17{sin_4_S18_Q17[17]}}, sin_4_S18_Q17});

    // Trig product registers (S35_Q29, in mH) and combined harmonic terms K_k = M_k + N_k.
    reg signed [34:0] M0_S35_Q29, M1_S35_Q29, M2_S35_Q29, M3_S35_Q29, M4_S35_Q29;
    reg signed [34:0] N0_S35_Q29, N1_S35_Q29, N2_S35_Q29, N3_S35_Q29, N4_S35_Q29;
    reg signed [34:0] K0_S35_Q29, K1_S35_Q29, K2_S35_Q29, K3_S35_Q29, K4_S35_Q29;

    // Precomputed off-diagonal constant offsets (S35_Q29, in mH):
    //   C_p72  : +A1 + D1  (phase diff +72 deg)
    //   C_p144 : +A2 + D2  (phase diff +144 deg)
    //   C_n144 : +A2 - D2  (phase diff -144 deg)
    //   C_n72  : +A1 - D1  (phase diff -72 deg)
    reg signed [34:0] C_p72_S35_Q29, C_p144_S35_Q29, C_n144_S35_Q29, C_n72_S35_Q29;

    // 5x5 mutual inductance matrix (S35_Q29, in mH).
    reg signed [34:0] L11_mH_S35_Q29, L12_mH_S35_Q29, L13_mH_S35_Q29, L14_mH_S35_Q29, L15_mH_S35_Q29;
    reg signed [34:0] L21_mH_S35_Q29, L22_mH_S35_Q29, L23_mH_S35_Q29, L24_mH_S35_Q29, L25_mH_S35_Q29;
    reg signed [34:0] L31_mH_S35_Q29, L32_mH_S35_Q29, L33_mH_S35_Q29, L34_mH_S35_Q29, L35_mH_S35_Q29;
    reg signed [34:0] L41_mH_S35_Q29, L42_mH_S35_Q29, L43_mH_S35_Q29, L44_mH_S35_Q29, L45_mH_S35_Q29;
    reg signed [34:0] L51_mH_S35_Q29, L52_mH_S35_Q29, L53_mH_S35_Q29, L54_mH_S35_Q29, L55_mH_S35_Q29;

    // Coherent per-frame current snapshot (S18_Q9, in A).
    reg signed [17:0] iA_reg_S18_Q9, iB_reg_S18_Q9, iC_reg_S18_Q9, iD_reg_S18_Q9, iE_reg_S18_Q9;

    // 25 partial flux products (S53_Q38, in mWb).
    reg signed [52:0] Phi_a1, Phi_a2, Phi_a3, Phi_a4, Phi_a5;
    reg signed [52:0] Phi_b1, Phi_b2, Phi_b3, Phi_b4, Phi_b5;
    reg signed [52:0] Phi_c1, Phi_c2, Phi_c3, Phi_c4, Phi_c5;
    reg signed [52:0] Phi_d1, Phi_d2, Phi_d3, Phi_d4, Phi_d5;
    reg signed [52:0] Phi_e1, Phi_e2, Phi_e3, Phi_e4, Phi_e5;

    // Pipelined 56-bit adder tree registers (3 guard bits for 5-term summation).
    reg signed [55:0] phi_a_p1, phi_a_p2, phi_a_p3;
    reg signed [55:0] phi_b_p1, phi_b_p2, phi_b_p3;
    reg signed [55:0] phi_c_p1, phi_c_p2, phi_c_p3;
    reg signed [55:0] phi_d_p1, phi_d_p2, phi_d_p3;
    reg signed [55:0] phi_e_p1, phi_e_p2, phi_e_p3;

    // Final stage combinational 56-bit sum (1-level adder before >>> 31 scaling).
    wire signed [55:0] phi_a_total = phi_a_p3 + {{3{Phi_a5[52]}}, Phi_a5};
    wire signed [55:0] phi_b_total = phi_b_p3 + {{3{Phi_b5[52]}}, Phi_b5};
    wire signed [55:0] phi_c_total = phi_c_p3 + {{3{Phi_c5[52]}}, Phi_c5};
    wire signed [55:0] phi_d_total = phi_d_p3 + {{3{Phi_d5[52]}}, Phi_d5};
    wire signed [55:0] phi_e_total = phi_e_p3 + {{3{Phi_e5[52]}}, Phi_e5};

    // Scaled flux linkage per phase (S35_Q17, in Wb, using 1 Wb ~= 1024 mWb).
    reg signed [34:0] Phi1_Wb_S35_Q17, Phi2_Wb_S35_Q17, Phi3_Wb_S35_Q17;
    reg signed [34:0] Phi4_Wb_S35_Q17, Phi5_Wb_S35_Q17;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mul_a1 <= 35'sd0; mul_b1 <= 18'sd0;
            mul_a2 <= 35'sd0; mul_b2 <= 18'sd0;
            mul_a3 <= 35'sd0; mul_b3 <= 18'sd0;

            M0_S35_Q29 <= 35'sd0; M1_S35_Q29 <= 35'sd0; M2_S35_Q29 <= 35'sd0;
            M3_S35_Q29 <= 35'sd0; M4_S35_Q29 <= 35'sd0;
            N0_S35_Q29 <= 35'sd0; N1_S35_Q29 <= 35'sd0; N2_S35_Q29 <= 35'sd0;
            N3_S35_Q29 <= 35'sd0; N4_S35_Q29 <= 35'sd0;
            K0_S35_Q29 <= 35'sd0; K1_S35_Q29 <= 35'sd0; K2_S35_Q29 <= 35'sd0;
            K3_S35_Q29 <= 35'sd0; K4_S35_Q29 <= 35'sd0;

            C_p72_S35_Q29  <= 35'sd0; C_p144_S35_Q29 <= 35'sd0;
            C_n144_S35_Q29 <= 35'sd0; C_n72_S35_Q29  <= 35'sd0;

            L11_mH_S35_Q29 <= 35'sd0; L12_mH_S35_Q29 <= 35'sd0; L13_mH_S35_Q29 <= 35'sd0;
            L14_mH_S35_Q29 <= 35'sd0; L15_mH_S35_Q29 <= 35'sd0;
            L21_mH_S35_Q29 <= 35'sd0; L22_mH_S35_Q29 <= 35'sd0; L23_mH_S35_Q29 <= 35'sd0;
            L24_mH_S35_Q29 <= 35'sd0; L25_mH_S35_Q29 <= 35'sd0;
            L31_mH_S35_Q29 <= 35'sd0; L32_mH_S35_Q29 <= 35'sd0; L33_mH_S35_Q29 <= 35'sd0;
            L34_mH_S35_Q29 <= 35'sd0; L35_mH_S35_Q29 <= 35'sd0;
            L41_mH_S35_Q29 <= 35'sd0; L42_mH_S35_Q29 <= 35'sd0; L43_mH_S35_Q29 <= 35'sd0;
            L44_mH_S35_Q29 <= 35'sd0; L45_mH_S35_Q29 <= 35'sd0;
            L51_mH_S35_Q29 <= 35'sd0; L52_mH_S35_Q29 <= 35'sd0; L53_mH_S35_Q29 <= 35'sd0;
            L54_mH_S35_Q29 <= 35'sd0; L55_mH_S35_Q29 <= 35'sd0;

            iA_reg_S18_Q9 <= 18'sd0; iB_reg_S18_Q9 <= 18'sd0; iC_reg_S18_Q9 <= 18'sd0;
            iD_reg_S18_Q9 <= 18'sd0; iE_reg_S18_Q9 <= 18'sd0;

            Phi_a1 <= 53'sd0; Phi_a2 <= 53'sd0; Phi_a3 <= 53'sd0; Phi_a4 <= 53'sd0; Phi_a5 <= 53'sd0;
            Phi_b1 <= 53'sd0; Phi_b2 <= 53'sd0; Phi_b3 <= 53'sd0; Phi_b4 <= 53'sd0; Phi_b5 <= 53'sd0;
            Phi_c1 <= 53'sd0; Phi_c2 <= 53'sd0; Phi_c3 <= 53'sd0; Phi_c4 <= 53'sd0; Phi_c5 <= 53'sd0;
            Phi_d1 <= 53'sd0; Phi_d2 <= 53'sd0; Phi_d3 <= 53'sd0; Phi_d4 <= 53'sd0; Phi_d5 <= 53'sd0;
            Phi_e1 <= 53'sd0; Phi_e2 <= 53'sd0; Phi_e3 <= 53'sd0; Phi_e4 <= 53'sd0; Phi_e5 <= 53'sd0;

            phi_a_p1 <= 56'sd0; phi_a_p2 <= 56'sd0; phi_a_p3 <= 56'sd0;
            phi_b_p1 <= 56'sd0; phi_b_p2 <= 56'sd0; phi_b_p3 <= 56'sd0;
            phi_c_p1 <= 56'sd0; phi_c_p2 <= 56'sd0; phi_c_p3 <= 56'sd0;
            phi_d_p1 <= 56'sd0; phi_d_p2 <= 56'sd0; phi_d_p3 <= 56'sd0;
            phi_e_p1 <= 56'sd0; phi_e_p2 <= 56'sd0; phi_e_p3 <= 56'sd0;

            Phi1_Wb_S35_Q17 <= 35'sd0; Phi2_Wb_S35_Q17 <= 35'sd0; Phi3_Wb_S35_Q17 <= 35'sd0;
            Phi4_Wb_S35_Q17 <= 35'sd0; Phi5_Wb_S35_Q17 <= 35'sd0;
        end else begin
            case (Time_cnt)
                // -------------------------------------------------------------
                // Stage A: Trig products (slots 18, 1..3 -> sampled at 2..5)
                // -------------------------------------------------------------
                5'd18: begin
                    mul_a1 <= cos_0_ext;     mul_b1 <= dif_ov5_ext;
                    mul_a2 <= neg_sin_0_ext; mul_b2 <= l1pl2_ov5_ext;
                    mul_a3 <= cos_1_ext;     mul_b3 <= dif_ov5_ext;

                    // Flux adder tree stage 2 (single 56-bit adder depth).
                    phi_a_p3 <= phi_a_p1 + phi_a_p2;
                    phi_b_p3 <= phi_b_p1 + phi_b_p2;
                    phi_c_p3 <= phi_c_p1 + phi_c_p2;
                    phi_d_p3 <= phi_d_p1 + phi_d_p2;
                    phi_e_p3 <= phi_e_p1 + phi_e_p2;
                end

                5'd1: begin
                    mul_a1 <= neg_sin_1_ext; mul_b1 <= l1pl2_ov5_ext;
                    mul_a2 <= cos_2_ext;     mul_b2 <= dif_ov5_ext;
                    mul_a3 <= neg_sin_2_ext; mul_b3 <= l1pl2_ov5_ext;

                    // Flux adder tree stage 3: arithmetic right shift by 31 (S56 -> S35_Q17).
                    Phi1_Wb_S35_Q17 <= {{10{phi_a_total[55]}}, phi_a_total[55:31]};
                    Phi2_Wb_S35_Q17 <= {{10{phi_b_total[55]}}, phi_b_total[55:31]};
                    Phi3_Wb_S35_Q17 <= {{10{phi_c_total[55]}}, phi_c_total[55:31]};
                    Phi4_Wb_S35_Q17 <= {{10{phi_d_total[55]}}, phi_d_total[55:31]};
                    Phi5_Wb_S35_Q17 <= {{10{phi_e_total[55]}}, phi_e_total[55:31]};
                end

                5'd2: begin
                    M0_S35_Q29 <= mul_result1[34:0];
                    N0_S35_Q29 <= mul_result2[34:0];
                    M1_S35_Q29 <= mul_result3[34:0];

                    mul_a1 <= cos_3_ext;     mul_b1 <= dif_ov5_ext;
                    mul_a2 <= neg_sin_3_ext; mul_b2 <= l1pl2_ov5_ext;
                    mul_a3 <= cos_4_ext;     mul_b3 <= dif_ov5_ext;
                end

                5'd3: begin
                    N1_S35_Q29 <= mul_result1[34:0];
                    M2_S35_Q29 <= mul_result2[34:0];
                    N2_S35_Q29 <= mul_result3[34:0];
                    K0_S35_Q29 <= M0_S35_Q29 + N0_S35_Q29;

                    mul_a1 <= neg_sin_4_ext; mul_b1 <= l1pl2_ov5_ext;
                end

                5'd4: begin
                    M3_S35_Q29 <= mul_result1[34:0];
                    N3_S35_Q29 <= mul_result2[34:0];
                    M4_S35_Q29 <= mul_result3[34:0];
                    K1_S35_Q29 <= M1_S35_Q29 + N1_S35_Q29;
                    K2_S35_Q29 <= M2_S35_Q29 + N2_S35_Q29;
                end

                5'd5: begin
                    N4_S35_Q29 <= mul_result1[34:0];
                    K3_S35_Q29 <= M3_S35_Q29 + N3_S35_Q29;
                    K4_S35_Q29 <= M4_S35_Q29 + mul_result1[34:0];

                    // Precompute the 4 off-diagonal constant terms (1-level 35-bit add/sub).
                    C_p72_S35_Q29  <= avg_72_S35_Q29  + asym_72_S35_Q29;
                    C_p144_S35_Q29 <= avg_144_S35_Q29 + asym_144_S35_Q29;
                    C_n144_S35_Q29 <= avg_144_S35_Q29 - asym_144_S35_Q29;
                    C_n72_S35_Q29  <= avg_72_S35_Q29  - asym_72_S35_Q29;
                end

                // -------------------------------------------------------------
                // Stage B: 5x5 inductance matrix construction & current latch
                // -------------------------------------------------------------
                5'd6: begin
                    // Row 1 (Phase A)
                    L11_mH_S35_Q29 <= K0_S35_Q29;
                    L12_mH_S35_Q29 <= K1_S35_Q29 + C_p72_S35_Q29;
                    L13_mH_S35_Q29 <= K2_S35_Q29 + C_p144_S35_Q29;
                    L14_mH_S35_Q29 <= K3_S35_Q29 + C_n144_S35_Q29;
                    L15_mH_S35_Q29 <= K4_S35_Q29 + C_n72_S35_Q29;

                    // Row 2 (Phase B)
                    L21_mH_S35_Q29 <= K1_S35_Q29 + C_n72_S35_Q29;
                    L22_mH_S35_Q29 <= K2_S35_Q29;
                    L23_mH_S35_Q29 <= K3_S35_Q29 + C_p72_S35_Q29;
                    L24_mH_S35_Q29 <= K4_S35_Q29 + C_p144_S35_Q29;
                    L25_mH_S35_Q29 <= K0_S35_Q29 + C_n144_S35_Q29;

                    // Row 3 (Phase C)
                    L31_mH_S35_Q29 <= K2_S35_Q29 + C_n144_S35_Q29;
                    L32_mH_S35_Q29 <= K3_S35_Q29 + C_n72_S35_Q29;
                    L33_mH_S35_Q29 <= K4_S35_Q29;
                    L34_mH_S35_Q29 <= K0_S35_Q29 + C_p72_S35_Q29;
                    L35_mH_S35_Q29 <= K1_S35_Q29 + C_p144_S35_Q29;

                    // Row 4 (Phase D)
                    L41_mH_S35_Q29 <= K3_S35_Q29 + C_p144_S35_Q29;
                    L42_mH_S35_Q29 <= K4_S35_Q29 + C_n144_S35_Q29;
                    L43_mH_S35_Q29 <= K0_S35_Q29 + C_n72_S35_Q29;
                    L44_mH_S35_Q29 <= K1_S35_Q29;
                    L45_mH_S35_Q29 <= K2_S35_Q29 + C_p72_S35_Q29;

                    // Row 5 (Phase E)
                    L51_mH_S35_Q29 <= K4_S35_Q29 + C_p72_S35_Q29;
                    L52_mH_S35_Q29 <= K0_S35_Q29 + C_p144_S35_Q29;
                    L53_mH_S35_Q29 <= K1_S35_Q29 + C_n144_S35_Q29;
                    L54_mH_S35_Q29 <= K2_S35_Q29 + C_n72_S35_Q29;
                    L55_mH_S35_Q29 <= K3_S35_Q29;

                    // Latch coherent 5-phase current vector for slots 7..15.
                    iA_reg_S18_Q9 <= iA_S18_Q9;
                    iB_reg_S18_Q9 <= iB_S18_Q9;
                    iC_reg_S18_Q9 <= iC_S18_Q9;
                    iD_reg_S18_Q9 <= iD_S18_Q9;
                    iE_reg_S18_Q9 <= iE_S18_Q9;
                end

                // -------------------------------------------------------------
                // Stage C: 25 L*i products (slots 7..15 -> sampled at 9..17)
                // -------------------------------------------------------------
                5'd7: begin
                    mul_a1 <= L11_mH_S35_Q29; mul_b1 <= iA_reg_S18_Q9;
                    mul_a2 <= L12_mH_S35_Q29; mul_b2 <= iB_reg_S18_Q9;
                    mul_a3 <= L13_mH_S35_Q29; mul_b3 <= iC_reg_S18_Q9;
                end

                5'd8: begin
                    mul_a1 <= L14_mH_S35_Q29; mul_b1 <= iD_reg_S18_Q9;
                    mul_a2 <= L15_mH_S35_Q29; mul_b2 <= iE_reg_S18_Q9;
                    mul_a3 <= L21_mH_S35_Q29; mul_b3 <= iA_reg_S18_Q9;
                end

                5'd9: begin
                    Phi_a1 <= mul_result1;
                    Phi_a2 <= mul_result2;
                    Phi_a3 <= mul_result3;

                    mul_a1 <= L22_mH_S35_Q29; mul_b1 <= iB_reg_S18_Q9;
                    mul_a2 <= L23_mH_S35_Q29; mul_b2 <= iC_reg_S18_Q9;
                    mul_a3 <= L24_mH_S35_Q29; mul_b3 <= iD_reg_S18_Q9;
                end

                5'd10: begin
                    Phi_a4 <= mul_result1;
                    Phi_a5 <= mul_result2;
                    Phi_b1 <= mul_result3;

                    mul_a1 <= L25_mH_S35_Q29; mul_b1 <= iE_reg_S18_Q9;
                    mul_a2 <= L31_mH_S35_Q29; mul_b2 <= iA_reg_S18_Q9;
                    mul_a3 <= L32_mH_S35_Q29; mul_b3 <= iB_reg_S18_Q9;
                end

                5'd11: begin
                    Phi_b2 <= mul_result1;
                    Phi_b3 <= mul_result2;
                    Phi_b4 <= mul_result3;

                    mul_a1 <= L33_mH_S35_Q29; mul_b1 <= iC_reg_S18_Q9;
                    mul_a2 <= L34_mH_S35_Q29; mul_b2 <= iD_reg_S18_Q9;
                    mul_a3 <= L35_mH_S35_Q29; mul_b3 <= iE_reg_S18_Q9;
                end

                5'd12: begin
                    Phi_b5 <= mul_result1;
                    Phi_c1 <= mul_result2;
                    Phi_c2 <= mul_result3;

                    mul_a1 <= L41_mH_S35_Q29; mul_b1 <= iA_reg_S18_Q9;
                    mul_a2 <= L42_mH_S35_Q29; mul_b2 <= iB_reg_S18_Q9;
                    mul_a3 <= L43_mH_S35_Q29; mul_b3 <= iC_reg_S18_Q9;
                end

                5'd13: begin
                    Phi_c3 <= mul_result1;
                    Phi_c4 <= mul_result2;
                    Phi_c5 <= mul_result3;

                    mul_a1 <= L44_mH_S35_Q29; mul_b1 <= iD_reg_S18_Q9;
                    mul_a2 <= L45_mH_S35_Q29; mul_b2 <= iE_reg_S18_Q9;
                    mul_a3 <= L51_mH_S35_Q29; mul_b3 <= iA_reg_S18_Q9;
                end

                5'd14: begin
                    Phi_d1 <= mul_result1;
                    Phi_d2 <= mul_result2;
                    Phi_d3 <= mul_result3;

                    mul_a1 <= L52_mH_S35_Q29; mul_b1 <= iB_reg_S18_Q9;
                    mul_a2 <= L53_mH_S35_Q29; mul_b2 <= iC_reg_S18_Q9;
                    mul_a3 <= L54_mH_S35_Q29; mul_b3 <= iD_reg_S18_Q9;
                end

                5'd15: begin
                    Phi_d4 <= mul_result1;
                    Phi_d5 <= mul_result2;
                    Phi_e1 <= mul_result3;

                    mul_a1 <= L55_mH_S35_Q29; mul_b1 <= iE_reg_S18_Q9;
                end

                5'd16: begin
                    Phi_e2 <= mul_result1;
                    Phi_e3 <= mul_result2;
                    Phi_e4 <= mul_result3;
                end

                5'd17: begin
                    Phi_e5 <= mul_result1;

                    // Flux adder tree stage 1: all x1..x4 products are settled at slot 17.
                    phi_a_p1 <= {{3{Phi_a1[52]}}, Phi_a1} + {{3{Phi_a2[52]}}, Phi_a2};
                    phi_a_p2 <= {{3{Phi_a3[52]}}, Phi_a3} + {{3{Phi_a4[52]}}, Phi_a4};
                    phi_b_p1 <= {{3{Phi_b1[52]}}, Phi_b1} + {{3{Phi_b2[52]}}, Phi_b2};
                    phi_b_p2 <= {{3{Phi_b3[52]}}, Phi_b3} + {{3{Phi_b4[52]}}, Phi_b4};
                    phi_c_p1 <= {{3{Phi_c1[52]}}, Phi_c1} + {{3{Phi_c2[52]}}, Phi_c2};
                    phi_c_p2 <= {{3{Phi_c3[52]}}, Phi_c3} + {{3{Phi_c4[52]}}, Phi_c4};
                    phi_d_p1 <= {{3{Phi_d1[52]}}, Phi_d1} + {{3{Phi_d2[52]}}, Phi_d2};
                    phi_d_p2 <= {{3{Phi_d3[52]}}, Phi_d3} + {{3{Phi_d4[52]}}, Phi_d4};
                    phi_e_p1 <= {{3{Phi_e1[52]}}, Phi_e1} + {{3{Phi_e2[52]}}, Phi_e2};
                    phi_e_p2 <= {{3{Phi_e3[52]}}, Phi_e3} + {{3{Phi_e4[52]}}, Phi_e4};
                end

                default: begin end
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // 4. Synchronous 10 MHz LP filter & 131072 Hz differentiated back-EMF
    // -------------------------------------------------------------------------
    // Single-cycle enable at slot 2 right after Phi1..Phi5_Wb_S35_Q17 update at slot 1.
    // Replaces derived clk_10MHz domain to eliminate CDC/hold hazards on Spartan-6.
    wire frame_en = (Time_cnt == 5'd2);

    // Correspondence with original 3-phase registers:
    //   lp_acc_*  <-> x1..x3  (Euler accumulator)
    //   lp_out_*  <-> x4..x6  (1/128 first-order LP state)
    //   lp_prev_* <-> x7..x9  (previous decimated LP sample)
    //   diff_*    <-> x10..x12 (differentiated voltage)
    //   decim_cnt <-> x15     (10 MHz / 76 ~= 131.58 kHz ~= 2^17 Hz decimation)
    reg signed [34:0] lp_acc_a,  lp_acc_b,  lp_acc_c,  lp_acc_d,  lp_acc_e;
    reg signed [34:0] lp_out_a,  lp_out_b,  lp_out_c,  lp_out_d,  lp_out_e;
    reg signed [34:0] lp_prev_a, lp_prev_b, lp_prev_c, lp_prev_d, lp_prev_e;
    reg signed [34:0] diff_a,    diff_b,    diff_c,    diff_d,    diff_e;
    reg [6:0]         decim_cnt;

    wire signed [34:0] lp_next_a = lp_acc_a + Phi1_Wb_S35_Q17 - lp_out_a;
    wire signed [34:0] lp_next_b = lp_acc_b + Phi2_Wb_S35_Q17 - lp_out_b;
    wire signed [34:0] lp_next_c = lp_acc_c + Phi3_Wb_S35_Q17 - lp_out_c;
    wire signed [34:0] lp_next_d = lp_acc_d + Phi4_Wb_S35_Q17 - lp_out_d;
    wire signed [34:0] lp_next_e = lp_acc_e + Phi5_Wb_S35_Q17 - lp_out_e;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            lp_acc_a  <= 35'sd0; lp_acc_b  <= 35'sd0; lp_acc_c  <= 35'sd0;
            lp_acc_d  <= 35'sd0; lp_acc_e  <= 35'sd0;
            lp_out_a  <= 35'sd0; lp_out_b  <= 35'sd0; lp_out_c  <= 35'sd0;
            lp_out_d  <= 35'sd0; lp_out_e  <= 35'sd0;
            lp_prev_a <= 35'sd0; lp_prev_b <= 35'sd0; lp_prev_c <= 35'sd0;
            lp_prev_d <= 35'sd0; lp_prev_e <= 35'sd0;
            diff_a    <= 35'sd0; diff_b    <= 35'sd0; diff_c    <= 35'sd0;
            diff_d    <= 35'sd0; diff_e    <= 35'sd0;
            decim_cnt <= 7'd0;

            eA_mutual_S35_Q17 <= 35'sd0;
            eB_mutual_S35_Q17 <= 35'sd0;
            eC_mutual_S35_Q17 <= 35'sd0;
            eD_mutual_S35_Q17 <= 35'sd0;
            eE_mutual_S35_Q17 <= 35'sd0;
        end else if (frame_en) begin
            lp_acc_a <= lp_next_a;
            lp_acc_b <= lp_next_b;
            lp_acc_c <= lp_next_c;
            lp_acc_d <= lp_next_d;
            lp_acc_e <= lp_next_e;

            lp_out_a <= lp_next_a >>> 7;
            lp_out_b <= lp_next_b >>> 7;
            lp_out_c <= lp_next_c >>> 7;
            lp_out_d <= lp_next_d >>> 7;
            lp_out_e <= lp_next_e >>> 7;

            if (decim_cnt >= 7'd75) begin
                decim_cnt <= 7'd0;
                // dt = 1 / 131072 s -> multiply flux delta by 2^17 (<<< 17).
                diff_a <= (lp_out_a - lp_prev_a) <<< 17;
                diff_b <= (lp_out_b - lp_prev_b) <<< 17;
                diff_c <= (lp_out_c - lp_prev_c) <<< 17;
                diff_d <= (lp_out_d - lp_prev_d) <<< 17;
                diff_e <= (lp_out_e - lp_prev_e) <<< 17;

                lp_prev_a <= lp_out_a;
                lp_prev_b <= lp_out_b;
                lp_prev_c <= lp_out_c;
                lp_prev_d <= lp_out_d;
                lp_prev_e <= lp_out_e;
            end else begin
                decim_cnt <= decim_cnt + 1'b1;
            end

            eA_mutual_S35_Q17 <= diff_a;
            eB_mutual_S35_Q17 <= diff_b;
            eC_mutual_S35_Q17 <= diff_c;
            eD_mutual_S35_Q17 <= diff_d;
            eE_mutual_S35_Q17 <= diff_e;
        end
    end

endmodule