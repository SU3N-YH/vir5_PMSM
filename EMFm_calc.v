`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Mutual inductance and flux integration for the three phase machine.
//
// Fixed point contract:
//   DIFov2_S16_Q12 : (Ld-Lq)/2, in mH
//   AVGov4_S16_Q10 : (Ld+Lq)/2/2, in mH
//   iA/B/C_S18_Q9        : phase currents
//   ePOS_S18_360         : electrical position, 131072 counts/revolution
//   outputs              : S35_Q17
//
// ePOS is converted to 2*ePOS in degrees (CORDIC Q16.16).  Three CORDIC
// instances generate cos(2*ePOS), cos(2*ePOS-120 deg), and
// cos(2*ePOS-240 deg).  One 18x35 multiplier is sufficient: three mutual
// products and nine L*I products fit in 14 of the 18 clocks in each frame.
//////////////////////////////////////////////////////////////////////////////////
module EMFm_calc (
    input  wire                 clk,
    input  wire                 rst_n,

    input  wire signed [15:0]   DIFov2_S16_Q12,     //in mH
    input  wire signed [15:0]   AVGov4_S16_Q10,    //in mH
    input  wire signed [17:0]   iA_S18_Q9,
    input  wire signed [17:0]   iB_S18_Q9,
    input  wire signed [17:0]   iC_S18_Q9,
    input  wire signed [17:0]   ePOS_S18_360,

    output reg  signed [34:0]   eA_mutual_S35_Q17,
    output reg  signed [34:0]   eB_mutual_S35_Q17,
    output reg  signed [34:0]   eC_mutual_S35_Q17

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
    // 2. CORDIC angle generation
    // -------------------------------------------------------------------------
    // 2*ePOS repeats after 65536 ePOS counts.  Keeping the low 16 bits
    // therefore wraps the angle into [0,360) degrees before the CORDIC call.
    wire [15:0] epos2_count = ePOS_S18_360[15:0];
    wire signed [31:0] epos2_count_ext = {16'd0, epos2_count};
    // 360 = 256 + 64 + 32 + 8; result is degrees in Q16.16.
    wire signed [31:0] angle_2epos_q16 =
          (epos2_count_ext <<< 8) + (epos2_count_ext <<< 6)
        + (epos2_count_ext <<< 5) + (epos2_count_ext <<< 3);
    localparam signed [31:0] ANGLE_120_Q16 = 32'sd7864320; 
    localparam signed [31:0] ANGLE_240_Q16 = 32'sd15728640;

    wire signed [31:0] angle_a_q16 = angle_2epos_q16;
    wire signed [31:0] angle_b_q16 = angle_2epos_q16 - ANGLE_120_Q16;
    wire signed [31:0] angle_c_q16 = angle_2epos_q16 - ANGLE_240_Q16;

    reg  cordic_busy;
    wire cordic_call = (Time_cnt == 5'd18) && !cordic_busy;
    wire cordic_done_a, cordic_done_b, cordic_done_c;
    wire signed [17:0] cordic_cos_a, cordic_cos_b, cordic_cos_c;
    wire signed [17:0] cordic_sin_unused_a, cordic_sin_unused_b, cordic_sin_unused_c;
    reg signed [17:0] cos_a_S18_Q17, cos_b_S18_Q17, cos_c_S18_Q17;

    CORDIC_STANDALONE u_cordic_a (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_a), .iData(angle_a_q16),
        .cos(cordic_cos_a), .sin(cordic_sin_unused_a),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_b (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_b), .iData(angle_b_q16),
        .cos(cordic_cos_b), .sin(cordic_sin_unused_b),
        .q_deg(), .q_y(), .q_x()
    );
    CORDIC_STANDALONE u_cordic_c (
        .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
        .oDone(cordic_done_c), .iData(angle_c_q16),
        .cos(cordic_cos_c), .sin(cordic_sin_unused_c),
        .q_deg(), .q_y(), .q_x()
    );

    // CORDIC holds its result after oDone.  Latch it one clock later, while
    // the multiplier frame continues to use the previous coherent triplet.
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            cordic_busy   <= 1'b0;
            cos_a_S18_Q17 <= 18'sd0;
            cos_b_S18_Q17 <= 18'sd0;
            cos_c_S18_Q17 <= 18'sd0;
        end else begin
            if (cordic_call)
                cordic_busy <= 1'b1;
            if (cordic_done_a || cordic_done_b || cordic_done_c) begin
                cordic_busy    <= 1'b0;
                cos_a_S18_Q17 <= cordic_cos_a;
                cos_b_S18_Q17 <= cordic_cos_b;
                cos_c_S18_Q17 <= cordic_cos_c;
            end
        end
    end

    // -------------------------------------------------------------------------
    // 3. One time-multiplexed 18x35 multiplier
    // -------------------------------------------------------------------------
    // The generated core is a two-STM32 implementation.  Although the XCO says
    // pipestages=1, the high/low partial-product cascade adds one additional
    // clock at the wrapper boundary.  The schedule below therefore samples p
    // two case slots after presenting a new input.
    reg  signed [34:0] mul_a;
    reg  signed [17:0] mul_b;
    wire signed [52:0] mul_result;

    MTPL_mutual_A u_mul (
        .clk(clk), .a(mul_a), .b(mul_b), .p(mul_result)
    );

    reg signed [34:0] M11_S35_Q17, M12_S35_Q17, M13_S35_Q17;
    reg signed [34:0] L0Ov2_S35_Q17;
    reg signed [34:0] L11_mH, L12_mH, L13_mH;  //inductance all in s35_q17 format
    reg signed [34:0] L21_mH, L22_mH, L23_mH;
    reg signed [34:0] L31_mH, L32_mH, L33_mH;

    reg signed [52:0] Phi_a1, Phi_a2, Phi_a3;   //flux in mWb, S53_Q26 format
    reg signed [52:0] Phi_b1, Phi_b2, Phi_b3;
    reg signed [52:0] Phi_c1, Phi_c2, Phi_c3;
    reg signed [34:0] Phi1_Wb_tmp, Phi2_Wb_tmp, Phi3_Wb_tmp;

    wire signed [34:0] difm_ext = {{19{DIFov2_S16_Q12[15]}}, DIFov2_S16_Q12};
    wire signed [34:0] avg_ext  = {AVGov4_S16_Q10, 19'b0};   //modified to 19'b0, formerly
    wire signed [34:0] cos_a_ext = {{17{cos_a_S18_Q17[17]}}, cos_a_S18_Q17};
    wire signed [34:0] cos_b_ext = {{17{cos_b_S18_Q17[17]}}, cos_b_S18_Q17};
    wire signed [34:0] cos_c_ext = {{17{cos_c_S18_Q17[17]}}, cos_c_S18_Q17};

    reg clk_10MHz = 1'b1;

    // Three 53-bit products need two guard bits before summation.
    wire signed [54:0] phi1_sum = {{2{Phi_a1[52]}}, Phi_a1}
                                  + {{2{Phi_a2[52]}}, Phi_a2}
                                  + {{2{Phi_a3[52]}}, Phi_a3};
    wire signed [54:0] phi2_sum = {{2{Phi_b1[52]}}, Phi_b1}
                                  + {{2{Phi_b2[52]}}, Phi_b2}
                                  + {{2{Phi_b3[52]}}, Phi_b3};
    wire signed [54:0] phi3_sum = {{2{Phi_c1[52]}}, Phi_c1}
                                  + {{2{Phi_c2[52]}}, Phi_c2}
                                  + {{2{Phi_c3[52]}}, Phi_c3};

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            mul_a <= 35'sd0;
            mul_b <= 18'sd0;
            M11_S35_Q17 <= 35'sd0; M12_S35_Q17 <= 35'sd0; M13_S35_Q17 <= 35'sd0;
            L0Ov2_S35_Q17 <= 35'sd0;
            clk_10MHz     <= 1'b1;
            L11_mH <= 35'sd0; L12_mH <= 35'sd0; L13_mH <= 35'sd0;
            L21_mH <= 35'sd0; L22_mH <= 35'sd0; L23_mH <= 35'sd0;
            L31_mH <= 35'sd0; L32_mH <= 35'sd0; L33_mH <= 35'sd0;
            Phi_a1 <= 53'sd0; Phi_a2 <= 53'sd0; Phi_a3 <= 53'sd0;
            Phi_b1 <= 53'sd0; Phi_b2 <= 53'sd0; Phi_b3 <= 53'sd0;
            Phi_c1 <= 53'sd0; Phi_c2 <= 53'sd0; Phi_c3 <= 53'sd0;
            Phi1_Wb_tmp <= 35'sd0; Phi2_Wb_tmp <= 35'sd0; Phi3_Wb_tmp <= 35'sd0;
        end else begin
            // Present one product per clock.  Mutual inputs are in cases
            // 18,1,2 and are sampled in cases 2,3,4.  pipline latch = 5.
            // Matrix construction is case 5.  The nine L*I inputs are in cases 6..14 and their
            // results are sampled in cases 8..16.  Phi sums are latched in
            // case 1 of the next frame after all products are complete.
            case (Time_cnt)
                5'd18: begin
                    mul_a <= cos_a_ext;
                    mul_b <= DIFov2_S16_Q12;
                    clk_10MHz <= 1'b1;
                end
                5'd1 : begin
                    mul_a <= cos_b_ext; mul_b <= DIFov2_S16_Q12;
                    Phi1_Wb_tmp <= phi1_sum >>> 31;
                    Phi2_Wb_tmp <= phi2_sum >>> 31;
                    Phi3_Wb_tmp <= phi3_sum >>> 31;
                end
                5'd2 : begin
                    M11_S35_Q17 <= mul_result[34:0];  
                    mul_a <= cos_c_ext; mul_b <= DIFov2_S16_Q12;
                end
                5'd3 : begin
                    M12_S35_Q17 <= mul_result[34:0];
                end
                5'd4 : begin
                    M13_S35_Q17 <= mul_result[34:0];
                end
                5'd5 : begin
                    L0Ov2_S35_Q17 <= avg_ext;
                    // Matrix follows the MATLAB cyclic mapping exactly.
                    L11_mH <= M11_S35_Q17;
                    L12_mH <= M12_S35_Q17 - avg_ext;
                    L13_mH <= M13_S35_Q17 - avg_ext;
                    L21_mH <= M12_S35_Q17 - avg_ext;
                    L22_mH <= M13_S35_Q17;
                    L23_mH <= M11_S35_Q17 - avg_ext;
                    L31_mH <= M13_S35_Q17 - avg_ext;
                    L32_mH <= M11_S35_Q17 - avg_ext;
                    L33_mH <= M12_S35_Q17;
                end
                5'd6 : begin mul_a <= L11_mH; mul_b <= iA_S18_Q9; end
                5'd7 : begin mul_a <= L12_mH; mul_b <= iB_S18_Q9; end
                5'd8 : begin Phi_a1 <= mul_result; mul_a <= L13_mH; mul_b <= iC_S18_Q9; end
                5'd9 : begin 
                    Phi_a2 <= mul_result; mul_a <= L21_mH; mul_b <= iA_S18_Q9; 
                    clk_10MHz <= 1'b0; // 10 MHz enable pulse
                end
                5'd10: begin Phi_a3 <= mul_result; mul_a <= L22_mH; mul_b <= iB_S18_Q9; end
                5'd11: begin Phi_b1 <= mul_result; mul_a <= L23_mH; mul_b <= iC_S18_Q9; end
                5'd12: begin Phi_b2 <= mul_result; mul_a <= L31_mH; mul_b <= iA_S18_Q9; end
                5'd13: begin Phi_b3 <= mul_result; mul_a <= L32_mH; mul_b <= iB_S18_Q9; end
                5'd14: begin Phi_c1 <= mul_result; mul_a <= L33_mH; mul_b <= iC_S18_Q9; end
                5'd15: begin Phi_c2 <= mul_result; end
                5'd16: begin Phi_c3 <= mul_result; end
                default: begin end
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // 4. Euler update, LP state, and 131072 Hz differentiated output
    // -------------------------------------------------------------------------
    reg signed [34:0] x1, x2, x3;
    reg signed [34:0] x4, x5, x6;
    reg signed [34:0] x7, x8, x9;
    reg signed [34:0] x10, x11, x12;
    reg [6:0] x15;

    // The generated 10 MHz pulse has one rising edge every 18 system clocks.
    // Use the equivalent clock-enable form to avoid a derived-clock path.
    always @(posedge clk_10MHz or negedge rst_n) begin // 10 MHz update
        if (!rst_n) begin
            x1 <= 35'sd0; x2 <= 35'sd0; x3 <= 35'sd0;
            x4 <= 35'sd0; x5 <= 35'sd0; x6 <= 35'sd0;
            x7 <= 35'sd0; x8 <= 35'sd0; x9 <= 35'sd0;
            x10 <= 35'sd0; x11 <= 35'sd0; x12 <= 35'sd0;
            x15 <= 7'd0;
            eA_mutual_S35_Q17 <= 35'sd0;
            eB_mutual_S35_Q17 <= 35'sd0;
            eC_mutual_S35_Q17 <= 35'sd0;

        end else begin
            // x1..x3 are the Euler accumulators; 
            // x4..x6 are the 1/32 LP state.
            x1 <= x1 + Phi1_Wb_tmp - x4;
            x2 <= x2 + Phi2_Wb_tmp - x5;
            x3 <= x3 + Phi3_Wb_tmp - x6;
            x4 <= (x1 + Phi1_Wb_tmp - x4) >>> 10;
            x5 <= (x2 + Phi2_Wb_tmp - x5) >>> 10;
            x6 <= (x3 + Phi3_Wb_tmp - x6) >>> 10;

            if (x15 >= 7'd75) begin
                x15 <= 7'd0;
                // Difference is S35_Q17; <<17 gives the requested S35_Q17
                // voltage scaling because dt = 1/131072 s.
                x10 <= (x4 - x7) <<< 17;
                x11 <= (x5 - x8) <<< 17;
                x12 <= (x6 - x9) <<< 17;
                x7 <= x4;
                x8 <= x5;
                x9 <= x6;
            end else begin
                x15 <= x15 + 1'b1;
            end

            eA_mutual_S35_Q17 <= x10;
            eB_mutual_S35_Q17 <= x11;
            eC_mutual_S35_Q17 <= x12;

        end
    end

endmodule
