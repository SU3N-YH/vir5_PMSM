`timescale 1ns / 1ps
// D/E wrapper for the shared ABC inverter model.
// D -> A, E -> B; unused third-phase inputs are tied to zero.
module inv_phi2_HB_DE(
    input           clk_180MHz,
    input           S1,
    input           S2,
    input           S3,
    input           S4,
    input   signed  [34:0]  Id_S35_Q17,
    input   signed  [34:0]  Ie_S35_Q17,
    input   signed  [15:0]  Udc1P_S16_Q5,
    input   signed  [15:0]  Udc2P_S16_Q5,
    input   signed  [15:0]  Udc1N_S16_Q5,
    input   signed  [15:0]  Udc2N_S16_Q5,
    input   signed  [15:0]  Rd_S16_Q15,
    input   signed  [15:0]  Vd_S16_Q15,
    input           rst_n,
    output  wire signed  [34:0]  Vd_q17,
    output  wire signed  [34:0]  Ve_q17,
    output  wire signed  [15:0]  phase_d_lower_current_stm32,
    output  wire signed  [15:0]  phase_e_lower_current_stm32

);

// Reuse ABC timing, bridge arithmetic, reset and STM32 output conversion.
inv_phi3_HB INVERTER_DE (
    .clk_180MHz(clk_180MHz), .rst_n(rst_n),
    .S1(S1), .S2(S2), .S3(S3), .S4(S4),
    .S5(1'b0), .S6(1'b0),
    .Ia_S35_Q17(Id_S35_Q17), .Ib_S35_Q17(Ie_S35_Q17),
    .Ic_S35_Q17(35'sd0),
    .Udc1P_S16_Q5(Udc1P_S16_Q5), .Udc2P_S16_Q5(Udc2P_S16_Q5),
    .Udc3P_S16_Q5(16'sd0),
    .Udc1N_S16_Q5(Udc1N_S16_Q5), .Udc2N_S16_Q5(Udc2N_S16_Q5),
    .Udc3N_S16_Q5(16'sd0),
    .Rd_S16_Q15(Rd_S16_Q15), .Vd_S16_Q15(Vd_S16_Q15),
    .x_1(Vd_q17),
    .x_2(Ve_q17), 
    .x_3(),
    .x_4(phase_d_lower_current_stm32),
    .x_5(phase_e_lower_current_stm32),
    .x_6(), 
	 .x_7()
);
endmodule
