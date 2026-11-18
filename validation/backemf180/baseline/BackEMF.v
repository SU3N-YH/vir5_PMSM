`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Sunito.SUEN
// 
// Create Date:    15:02:22 07/13/2026 
// Design Name: 
// Module Name:    BackEMF 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Real-time 5-phase Back-EMF calculation module using a
//              time-multiplexed hardware multiplier based on the Inductor model.
//              - Clock: 180MHz system clock, divided into 18 time steps (10MHz rate).
//              - Slots: magnitude 1-3, A 4-6, B 7-9, C 10-12,
//                       D 13-15, E 16-18.
//              - All five outputs update together every 18 system clocks.
// Dependencies: CORDIC_STANDALONE, MUL18x18_bEMF (IP core)
//////////////////////////////////////////////////////////////////////////////////
// Native five-phase permanent-magnet back EMF, 180 MHz / 18 = 10 MHz.
// e[k] = -magnitude * sin(theta - k*72 degrees), k = 0..4 (A..E).
// Preserve the original flux scaling, Q formats and STM32 mapping.
// One signed 18x18 multiplier IP, shared by magnitude and all five phases.
module BackEMF (
    input  wire                 clk,
    input  wire                 rst_n,
    input  wire signed [15:0]   epos_S16_360,   // FMC signed angle: 32768 counts/revolution
    input  wire signed [15:0]   eOMG_S16_Q2,    // FMC signed velocity: Q2 -> internal Q4
    input  wire signed [15:0]   Phir_Half_S16_Q15,
    output reg  signed [34:0]   eA_S35_Q17, eB_S35_Q17, eC_S35_Q17,
    output reg  signed [34:0]   eD_S35_Q17, eE_S35_Q17,
    output wire signed [15:0]   eA_STM32_S16
);

// 1. Angle/flux conversion. Angle arithmetic is registered below before
// entering the CORDIC quadrant-normalization path.
// Append zeros for an EXACT signed 16-to-18-bit left shift by two.
// Do not shift in a 16-bit temporary: the upper/sign bits would be lost.
wire signed [17:0] epos_S18_360 = {epos_S16_360, 2'b0};
wire signed [17:0] eOMG_S18_Q4  = {eOMG_S16_Q2, 2'b0};

// One revolution = 131072 counts. Low 17 bits wrap either rotation
// direction into [0,360); 18-bit arithmetic wrap would mean TWO revolutions.
wire signed [31:0] epos_count = {15'd0, epos_S18_360[16:0]};
reg signed [31:0] theta_coarse_q16, theta_fine_q16;
reg signed [31:0] theta_deg_q16;

wire signed [31:0] temp_S32_Q15 =
      {Phir_Half_S16_Q15, 16'd0}
    + {{6{Phir_Half_S16_Q15[15]}}, Phir_Half_S16_Q15, 10'd0}
    + {{7{Phir_Half_S16_Q15[15]}}, Phir_Half_S16_Q15, 9'd0}
    + {{11{Phir_Half_S16_Q15[15]}}, Phir_Half_S16_Q15, 5'd0}
    + {{14{Phir_Half_S16_Q15[15]}}, Phir_Half_S16_Q15, 2'd0};
wire signed [17:0] phir_S18_Q17 = temp_S32_Q15[31:14];   //equals to *4.096

// 2. Five CORDICs, sharing one start/busy handshake and registered data.
reg [4:0] Time_cnt;
reg cordic_busy;
reg cordic_prepare;
wire cordic_call = (Time_cnt == 5'd18) && !cordic_busy && cordic_prepare;
wire [4:0] cordic_done;
reg signed [31:0] phase_angle_q16 [0:4];
wire signed [31:0] phase_offset_q16 [0:4];
wire signed [17:0] cordic_sin_S18_Q17 [0:4];
wire signed [17:0] nsin_S18_Q17 [0:4];
reg signed [17:0] nsin_complete_S18_Q17 [0:4];
reg signed [17:0] nsin_frame_S18_Q17 [0:4];

// Sample one angle at count 15. Break counts*180 into two parallel adds,
// then a registered sum at 16, then registered phase offsets at 17.
// iCall at 18 sees the previous cycle's phase registers. Hold the entire
// input pipeline while busy; external angle changes cannot alter a batch.
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        theta_coarse_q16 <= 32'sd0;
        theta_fine_q16 <= 32'sd0;
        theta_deg_q16 <= 32'sd0;
        cordic_prepare <= 1'b0;
    end else begin
        if (Time_cnt == 5'd18)
            cordic_prepare <= 1'b0;
        if (!cordic_busy) begin
            if (Time_cnt == 5'd15) begin
                cordic_prepare <= 1'b1;
                theta_coarse_q16 <= (epos_count <<< 7) + (epos_count <<< 5);
                theta_fine_q16 <= (epos_count <<< 4) + (epos_count <<< 2);
            end
            if ((Time_cnt == 5'd16) && cordic_prepare)
                theta_deg_q16 <= theta_coarse_q16 + theta_fine_q16;
        end
    end
end

// Fixed Q16.16 offsets: 0, 72, 144, 216 and 288 electrical degrees.
assign phase_offset_q16[0] = 32'sd0;
assign phase_offset_q16[1] = 32'sd4718592;
assign phase_offset_q16[2] = 32'sd9437184;
assign phase_offset_q16[3] = 32'sd14155776;
assign phase_offset_q16[4] = 32'sd18874368;

genvar idx;
generate
    for (idx = 0; idx < 5; idx = idx + 1) begin : u_cordic_gen
        always @(posedge clk or negedge rst_n) begin
            if (!rst_n) begin
                phase_angle_q16[idx] <= 32'sd0;
                nsin_complete_S18_Q17[idx] <= 18'sd0;
                nsin_frame_S18_Q17[idx] <= 18'sd0;
            end else begin
                if ((Time_cnt == 5'd17) && !cordic_busy && cordic_prepare)
                    phase_angle_q16[idx] <= theta_deg_q16 - phase_offset_q16[idx];
                // oDone is synchronous with registered sin outputs. Capture
                // all five together, without assuming an iteration count.
                if (cordic_busy && (&cordic_done))
                    nsin_complete_S18_Q17[idx] <= nsin_S18_Q17[idx];
                // Count 2 allows a completion at count 1 to reach this frame.
                // This snapshot stays fixed through phase loads 4/7/10/13/16.
                if (Time_cnt == 5'd2)
                    nsin_frame_S18_Q17[idx] <= nsin_complete_S18_Q17[idx];
            end
        end
        CORDIC_STANDALONE u_cordic_bkEMF (
            .CLOCK(clk), .RESET(rst_n), .iCall(cordic_call),
            .oDone(cordic_done[idx]), .iData(phase_angle_q16[idx]),
            .cos(), .sin(cordic_sin_S18_Q17[idx]),
            .q_deg(), .q_y(), .q_x()
        );
        // Saturate -(-1.0): +131072 is not representable in S18_Q17.
        assign nsin_S18_Q17[idx] =
            (cordic_sin_S18_Q17[idx] == 18'sh20000)
            ? 18'sh1ffff : -cordic_sin_S18_Q17[idx];
    end
endgenerate

// Busy clears only after all five results have been captured. With the
// supplied core, launches are 36 clocks apart. A longer core latency simply
// holds the previous complete/frame values and skips launches while busy.
// Periodic calls also calculate a static zero angle after reset.
always @(posedge clk or negedge rst_n) begin
    if (!rst_n)
        cordic_busy <= 1'b0;
    else if (cordic_busy && (&cordic_done))
        cordic_busy <= 1'b0;
    else if (cordic_call)
        cordic_busy <= 1'b1;
end

// 3. One signed 18x18 IP (full P=36, pipeline stages=1).
// Magnitude: Q4 * Q17 = Q21 -> S18_Q8 using product bits [30:13].
// This retains the original truncation/wrap behavior (no saturation).
// Phase: Q8 * Q17 = Q25 -> Q17, sign-extended to 35 bits.
// Ports are clk, a, b, p, with no CE/reset.
reg signed [17:0] mul_a1;
reg signed [17:0] mul_b1;
wire signed [35:0] mul_result1;
reg signed [17:0] mag_BackEMF_S18_Q8;

MUL18x18_bEMF u_mul1 (
    .clk(clk), .a(mul_a1), .b(mul_b1), .p(mul_result1)
);

// A-D wait in shadow registers; E is captured directly at publication.
reg signed [34:0] TMP_eA_S35_Q17, TMP_eB_S35_Q17, TMP_eC_S35_Q17;
reg signed [34:0] TMP_eD_S35_Q17;

// Register input at N; IP samples at N+1; capture at N+2.
// Magnitude 1->3; A 4->6; B 7->9; C 10->12; D 13->15; E 16->18.
// Count 18 captures E and publishes A-D together, without a stale E shadow.
// Speed/flux are sampled at count 1. Count 2 snapshots the latest completed
// angle batch for all five phases; it is independent of that speed sample.
always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        Time_cnt <= 5'd1;
        mul_a1 <= 18'sd0;
        mul_b1 <= 18'sd0;
        mag_BackEMF_S18_Q8 <= 18'sd0;
        TMP_eA_S35_Q17 <= 35'sd0;
        TMP_eB_S35_Q17 <= 35'sd0;
        TMP_eC_S35_Q17 <= 35'sd0;
        TMP_eD_S35_Q17 <= 35'sd0;
        eA_S35_Q17 <= 35'sd0;
        eB_S35_Q17 <= 35'sd0;
        eC_S35_Q17 <= 35'sd0;
        eD_S35_Q17 <= 35'sd0;
        eE_S35_Q17 <= 35'sd0;
    end else begin
        if (Time_cnt == 5'd18)
            Time_cnt <= 5'd1;
        else
            Time_cnt <= Time_cnt + 1'b1;

        case (Time_cnt)
            5'd1: begin
                mul_a1 <= eOMG_S18_Q4;
                mul_b1 <= phir_S18_Q17;
            end
            5'd3: mag_BackEMF_S18_Q8 <= mul_result1[30:13]; // Q21 -> Q8
            5'd4: begin
                mul_a1 <= nsin_frame_S18_Q17[0]; // A
                mul_b1 <= mag_BackEMF_S18_Q8;
            end
            5'd6: begin // Q25 -> Q17; extend the signed 28-bit result to 35 bits
                TMP_eA_S35_Q17 <= {{7{mul_result1[35]}}, mul_result1[35:8]};
            end
            5'd7: begin
                mul_a1 <= nsin_frame_S18_Q17[1]; // B; magnitude on B stays held
            end
            5'd9: begin
                TMP_eB_S35_Q17 <= {{7{mul_result1[35]}}, mul_result1[35:8]};
            end
            5'd10: begin
                mul_a1 <= nsin_frame_S18_Q17[2]; // C
            end
            5'd12: begin
                TMP_eC_S35_Q17 <= {{7{mul_result1[35]}}, mul_result1[35:8]};
            end
            5'd13: begin
                mul_a1 <= nsin_frame_S18_Q17[3]; // D
            end
            5'd15: begin
                TMP_eD_S35_Q17 <= {{7{mul_result1[35]}}, mul_result1[35:8]};
            end
            5'd16: begin
                mul_a1 <= nsin_frame_S18_Q17[4]; // E
            end
            5'd18: begin
                eA_S35_Q17 <= TMP_eA_S35_Q17;
                eB_S35_Q17 <= TMP_eB_S35_Q17;
                eC_S35_Q17 <= TMP_eC_S35_Q17;
                eD_S35_Q17 <= TMP_eD_S35_Q17;
                eE_S35_Q17 <= {{7{mul_result1[35]}}, mul_result1[35:8]};
            end
            default: begin end
        endcase
    end
end

assign eA_STM32_S16 = eA_S35_Q17 >>> 15;

endmodule