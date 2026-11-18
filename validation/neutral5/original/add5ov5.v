`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name:    add5ov5
// Description:    Five-phase group averaging,  (Ua+Ub+Uc+Ud+Ue) / 5
//                 for three independent input groups.
//
//   Direct replacement for add3over3, extended from 3 to 5 phases per group.
//   Used to build the neutral-point voltage:
//       U_N = sum_uX0/5 - sum_eX/5 - sum_eMUTUAL/5
//
//   The divide-by-5 is done with a fixed-point MULTIPLY, exactly as the
//   original add3over3 did for /3.  Only the multiplier core changed:
//   MUL_add3ov3 (18x35)  ->  MUL_add5ov5 (24x38).  The new core is dedicated
//   to this module and is not shared with any other module in the project.
//
// --------------------------------------------------------------------------
// WIDTH SIZING (this is where add3over3 silently lost information)
// --------------------------------------------------------------------------
//   Inputs are S35_Q17.  A five-term sum reaches 5*(2^34-1) = 8.59e10, which
//   needs 37 value bits + sign.  add3over3 declared the sum as S35 ("no
//   overflow expected from A+B+C"), which only holds while |x| < 2^34/5.
//   Here the sum is S38_Q17, so it is exact for the full S35 input range.
//
// --------------------------------------------------------------------------
// CHOICE OF THE 1/5 CONSTANT  (the real precision question)
// --------------------------------------------------------------------------
//   1/5 = 0.0011_0011_0011...b, periodic, so any finite constant is biased.
//   Relative gain error of C/2^n with C = round(2^n/5):
//
//       n : 15      17       19       23       26       28
//       e : 6.1e-5  1.5e-5   3.8e-6   2.4e-7   1.5e-8   3.7e-9
//
//   The original add3over3 used 10923 = round(2^15/3), i.e. Q15, e = 1.5e-5.
//   For 1/5 the same n is WORSE, because 0.2 < 0.3333: with the same absolute
//   rounding of 0.5 LSB the relative error grows by 3/5 -> 6.1e-5 at n=15.
//
//   Why it matters: U_N is formed by SUBTRACTING three such terms.  A gain
//   error e on a 100 V bridge voltage and on a 100 V back-EMF does not cancel
//   in U_N, so e scales the LARGEST of the terms, not the small result.
//
//   Chosen here: C = 1677722 = round(2^23/5), Q23, e = +2.4e-7.  24-bit signed
//   constant (max 8388607, so 1677722 fits with 2 spare bits), 38-bit operand.
//   Cost: the 24x38 product maps to roughly 4 DSP48A1 slices instead of 2 for
//   the old 18x35.  It is time-multiplexed, so there is still ONE core total.
//
//   The residual error after this is dominated by the final truncation, which
//   is rounded (+2^22) rather than truncated toward -inf, so there is no DC
//   bias in U_N.
//
// --------------------------------------------------------------------------
// SCALING / BIT SLICING
// --------------------------------------------------------------------------
//   a : S24, Q23   (the 1/5 constant)
//   b : S38, Q17   (five-term sum, exact)
//   p : S62        (24+38, Q40)
//   result = p / 2^23, i.e. Q40 -> Q17, which is the bit range p[57:23].
//   p's top bits [61:58] are pure sign extension for any legal input:
//   |p| <= 1677722 * 5 * 2^34 = 1.44e17 < 2^58.
//
// --------------------------------------------------------------------------
// PIPELINE / TDM SCHEDULING
// --------------------------------------------------------------------------
//   One multiplier is shared by the three groups.  MUL_add5ov5 has 2 clocks of
//   latency (input reg + product reg):
//       edge s   : mul_a/mul_b written       -> new values after edge s
//       edge s+1 : core samples a_r,b_r
//       edge s+2 : p updates                 -> readable at edge s+3
//   so capture edge = load edge + MUL_LAT + 1.
//
//   Slot length SLOT = MUL_LAT + 2 keeps one clock of slack after the capture.
//   Frame = 3*SLOT = 12 clocks = 66.7 ns at 180 MHz, faster than the 10 MHz
//   (100 ns) rate at which the phase voltages / back-EMF are refreshed.
//
//   Each output is written EXACTLY ONCE per frame.  add3over3 wrote each output
//   on all three clocks of its slot, which meant two of the three writes
//   carried the PREVIOUS group's product; anything sampling the port every
//   clock (Volt_N_calc does) consequently saw stale cross-group values for 2/3
//   of the time.  Writing once per frame removes that.
//
// Dependencies: MUL_add5ov5
//////////////////////////////////////////////////////////////////////////////////
module add5ov5 (
    input  wire                 clk_fast,        // High-speed system clock (180 MHz)
    input  wire                 rst_n,

    // Group 1 Inputs (S35_Q17) - e.g. bridge-arm voltages uA0..uE0
    input  wire signed [34:0]   Ua1_S35_Q17,
    input  wire signed [34:0]   Ub1_S35_Q17,
    input  wire signed [34:0]   Uc1_S35_Q17,
    input  wire signed [34:0]   Ud1_S35_Q17,
    input  wire signed [34:0]   Ue1_S35_Q17,

    // Group 2 Inputs (S35_Q17) - e.g. back-EMF eA..eE
    input  wire signed [34:0]   Ua2_S35_Q17,
    input  wire signed [34:0]   Ub2_S35_Q17,
    input  wire signed [34:0]   Uc2_S35_Q17,
    input  wire signed [34:0]   Ud2_S35_Q17,
    input  wire signed [34:0]   Ue2_S35_Q17,

    // Group 3 Inputs (S35_Q17) - e.g. mutual / zero-sequence correction
    input  wire signed [34:0]   Ua3_S35_Q17,
    input  wire signed [34:0]   Ub3_S35_Q17,
    input  wire signed [34:0]   Uc3_S35_Q17,
    input  wire signed [34:0]   Ud3_S35_Q17,
    input  wire signed [34:0]   Ue3_S35_Q17,

    // Outputs (S35_Q17) - sum/5 of each group
    output reg  signed [34:0]   U1_S35_Q17,
    output reg  signed [34:0]   U2_S35_Q17,
    output reg  signed [34:0]   U3_S35_Q17
);

    // =========================================================================
    // 1. Group sums, S38_Q17.  Exact: 5*(2^34-1) < 2^37.
    //    Each input is explicitly sign-extended so the add can never wrap.
    // =========================================================================
    wire signed [37:0] sum1_S38_Q17 =
          {{3{Ua1_S35_Q17[34]}}, Ua1_S35_Q17}
        + {{3{Ub1_S35_Q17[34]}}, Ub1_S35_Q17}
        + {{3{Uc1_S35_Q17[34]}}, Uc1_S35_Q17}
        + {{3{Ud1_S35_Q17[34]}}, Ud1_S35_Q17}
        + {{3{Ue1_S35_Q17[34]}}, Ue1_S35_Q17};

    wire signed [37:0] sum2_S38_Q17 =
          {{3{Ua2_S35_Q17[34]}}, Ua2_S35_Q17}
        + {{3{Ub2_S35_Q17[34]}}, Ub2_S35_Q17}
        + {{3{Uc2_S35_Q17[34]}}, Uc2_S35_Q17}
        + {{3{Ud2_S35_Q17[34]}}, Ud2_S35_Q17}
        + {{3{Ue2_S35_Q17[34]}}, Ue2_S35_Q17};

    wire signed [37:0] sum3_S38_Q17 =
          {{3{Ua3_S35_Q17[34]}}, Ua3_S35_Q17}
        + {{3{Ub3_S35_Q17[34]}}, Ub3_S35_Q17}
        + {{3{Uc3_S35_Q17[34]}}, Uc3_S35_Q17}
        + {{3{Ud3_S35_Q17[34]}}, Ud3_S35_Q17}
        + {{3{Ue3_S35_Q17[34]}}, Ue3_S35_Q17};

    // =========================================================================
    // 2. Dedicated 24x38 signed multiplier (2-clock latency)
    // =========================================================================
    reg  signed [23:0] mul_a;
    reg  signed [37:0] mul_b;
    wire signed [61:0] mul_p;

    MUL_add5ov5 u_mul_add5ov5 (
        .clk (clk_fast),
        .a   (mul_a),
        .b   (mul_b),
        .p   (mul_p)
    );

    // 1/5 in Q23: round(2^23 / 5) = 1677722, gain error +2.38e-7
    localparam [23:0] K_ONE_FIFTH_S24_Q23 = 24'd1677722;

    // =========================================================================
    // 3. TDM schedule.  Derived from the core latency, do not hardcode.
    // =========================================================================
    localparam integer MUL_LAT = 2;             // MUL_add5ov5 pipeline depth
    localparam integer SLOT    = MUL_LAT + 2;   // clocks per group
    localparam integer FRAME   = 3 * SLOT;      // clocks per full update

    localparam integer T1_LOAD = 1;
    localparam integer T1_CAP  = T1_LOAD + MUL_LAT + 1;
    localparam integer T2_LOAD = SLOT + 1;
    localparam integer T2_CAP  = T2_LOAD + MUL_LAT + 1;
    localparam integer T3_LOAD = 2*SLOT + 1;
    localparam integer T3_CAP  = T3_LOAD + MUL_LAT + 1;

    // Round instead of truncating toward -inf when dropping 23 fractional bits.
    localparam signed [61:0] ROUND_HALF = 62'sd4194304;   // 2^22

    wire signed [61:0] mul_p_rnd = mul_p + ROUND_HALF;

    reg [5:0] Time_cnt;

    always @(posedge clk_fast or negedge rst_n) begin
        if (!rst_n) begin
            Time_cnt   <= 6'd1;
            mul_a      <= 24'sd0;
            mul_b      <= 38'sd0;
            U1_S35_Q17 <= 35'sd0;
            U2_S35_Q17 <= 35'sd0;
            U3_S35_Q17 <= 35'sd0;
        end else begin
            if (Time_cnt == FRAME)
                Time_cnt <= 6'd1;
            else
                Time_cnt <= Time_cnt + 6'd1;

            // ---- load the multiplier input for the selected group ----
            if (Time_cnt == T1_LOAD) begin
                mul_a <= K_ONE_FIFTH_S24_Q23;
                mul_b <= sum1_S38_Q17;
            end
            if (Time_cnt == T2_LOAD) begin
                mul_a <= K_ONE_FIFTH_S24_Q23;
                mul_b <= sum2_S38_Q17;
            end
            if (Time_cnt == T3_LOAD) begin
                mul_a <= K_ONE_FIFTH_S24_Q23;
                mul_b <= sum3_S38_Q17;
            end

            // ---- capture Q40 -> Q17, one write per group per frame ----
            if (Time_cnt == T1_CAP)
                U1_S35_Q17 <= mul_p_rnd[57:23];
            if (Time_cnt == T2_CAP)
                U2_S35_Q17 <= mul_p_rnd[57:23];
            if (Time_cnt == T3_CAP)
                U3_S35_Q17 <= mul_p_rnd[57:23];
        end
    end

endmodule
