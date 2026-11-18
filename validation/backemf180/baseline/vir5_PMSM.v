`timescale 1ns / 1ps
`default_nettype none

// Verilog top for Spartan-6, originally migrated from main.sch.
// [2026-11-10 16:00 CST] Replace native five-phase description.
// // The current Inductor has five phases; D/E use extra PWM inputs and STM32 readback.
// Two current modules implement A/B/C + D/E using independent multiplier IPs.
// [2026-11-10 15:56 CST] The old three-phase motor blocks remain commented below.
// Clarke/Park/mutual-EMF examples remain three-phase; neutral averaging is five-phase.
// Active current/bridge wiring is a grounded-neutral, zero-EMF RL bench configuration.
// [2026-11-10 16:39 CST] Unused observation paths are commented; active bridge feedback is driven.
// Open pins and the undriven electrical position are deliberately preserved.
// No schematic drawing attributes or placement/routing constraints are carried over.
module vir5_PMSM (
    input  wire         STM32_NE1_Low,
    input  wire         clk_ex,
    inout  wire [15:0]  DATAbus,
    input  wire         STM32_NWE_Low,
    input  wire         STM32_NOE_Low,
    input  wire [11:0]  ADDRbus,
    input  wire         epwm_1A,
    input  wire         epwm_1B,
    input  wire         epwm_2A,
    input  wire         epwm_2B,
    input  wire         epwm_3A,
    input  wire         epwm_3B,
    input  wire         epwm_4A,
    input  wire         epwm_4B,
    input  wire         epwm_5A,
    input  wire         epwm_5B,
    input  wire         rst_n,
    // [2026-11-10 16:39 CST] Disable the unused PWM input; GPIO61 drives grid channel 1.
    // input  wire         epwm_7A,
    input  wire         GPIO61,
    output wire         ePWM_ua_Grid,
    input  wire         epwm_8A,
    output wire         ePWM_ub_Grid
);

    // Internal nets; comments retain the source schematic names for traceability.
    // Fixed-point arithmetic remains inside the existing child modules.
    wire [15:0]  I_ov_20L; // main.sch: XLXN_1007(15:0)
    wire [15:0]  R_idct_q12; // main.sch: XLXN_1005(15:0)
    wire [34:0]  phase_a_current; 
    wire [34:0]  phase_b_current; 
    wire [34:0]  phase_c_current; 
    wire [34:0]  phase_d_current;
    wire [34:0]  phase_e_current;
 
    wire [34:0]  bEMF_a_q17; 
    wire [34:0]  bEMF_b_q17; 
    wire [34:0]  bEMF_c_q17; 
    wire [34:0]  bEMF_d_q17;
    wire [34:0]  bEMF_e_q17;
    wire [34:0]  SUM_phase_V_q17;
    wire [34:0]  SUM_bEMF_q17; 
    wire [34:0]  SUM_mutEMF_q17; 
    // [2026-11-10 16:39 CST] Reserved net for disabled model/observation logic.
    // wire [15:0]  half_flux_q15; // main.sch: XLXN_1524(15:0)
    // [2026-11-10 16:39 CST] Reserved net for disabled model/observation logic.
    // wire [17:0]  i_beta_q9; // main.sch: XLXN_1528(17:0)
    wire [34:0]  V_a_q17; 
    wire [34:0]  V_b_q17; 
    wire [34:0]  V_c_q17;
    wire [34:0]  V_d_q17;
    wire [34:0]  V_e_q17;

    // Intentionally NO DRIVER: Mechanical is absent from the current main.sch.
    // Shared by BackEMF, Park2dq, EMFm_calc and the STM32 position converter.
    // [2026-11-10 16:39 CST] Reserved net for disabled model/observation logic.
    // wire [17:0]  electrical_position_undriven; // main.sch: XLXN_1554(17:0)
    wire [34:0]  V_N_q17; 
    // [2026-11-10 16:39 CST] Reserved net for disabled model/observation logic.
    // wire [15:0]  ld_minus_lq_q12_unused;
    wire [15:0]  switch_R_q15; 
    wire [15:0]  diode_voltage_q15; 
    wire [15:0]  ePOS_in;
    wire [15:0]  eOMG_in;
    wire [15:0]  half_flux_q15;
    // [2026-11-10 16:39 CST] Reserved net for disabled model/observation logic.
    // wire [15:0]  position_stm32; 

    // [2026-11-03 16:30 CST] Port 1 loopback; PCI decode matches STM32 offsets 0x200/0x000.
    wire [15:0]  FMC_test1;
    wire [15:0]  FMC_test2;
    wire [15:0]  FMC_test3;
    wire [15:0]  FMC_test4;
    wire [15:0]  FMC_test5;

    wire         clk_180mhz; 
    wire         clk_50mhz;
    wire [15:0]  dc_voltage_q5; 
    wire [15:0]  negative_dc_voltage_q5; 
    wire [15:0]  bEMF_a_stm32;

    wire [34:0] phase_a_current_q17;
    wire [34:0] phase_b_current_q17;
    wire [34:0] phase_c_current_q17;
    wire [34:0] phase_d_current_q17;
    wire [34:0] phase_e_current_q17;
    // [2026-11-10 16:39 CST] Restore driven Q17 current feedback required by dead-time diode decisions.
    // assign phase_a_current_q17 = $signed(phase_a_current) >>> 8;
    // assign phase_b_current_q17 = $signed(phase_b_current) >>> 8;
    // assign phase_c_current_q17 = $signed(phase_c_current) >>> 8;
    // assign phase_d_current_q17 = $signed(phase_d_current) >>> 8;
    // assign phase_e_current_q17 = $signed(phase_e_current) >>> 8;

    // STM32 register interface; register numbering and data bus direction are unchanged.
    PCI u_pci (
        .sub_clk(clk_180mhz),
        .STM32_NWE_Low(STM32_NWE_Low),
        .STM32_NOE_Low(STM32_NOE_Low),
        .STM32_NE1_Low(STM32_NE1_Low),
        .addrbus(ADDRbus),
    /////////////////////TO_STM32////////////////////////
        .FPGAtoSTM32_Signal_1(phase_a_current),
        .FPGAtoSTM32_Signal_2(phase_b_current),
        .FPGAtoSTM32_Signal_3(phase_c_current),
        .FPGAtoSTM32_Signal_4(phase_d_current),
        .FPGAtoSTM32_Signal_5(phase_e_current),
        .FPGAtoSTM32_Signal_6(bEMF_a_stm32),
        .FPGAtoSTM32_Signal_7(ePOS_in),
        .FPGAtoSTM32_Signal_8(eOMG_in),
        .FPGAtoSTM32_Signal_9(half_flux_q15),
        .FPGAtoSTM32_Signal_10(Vn_stm32),
        .FPGAtoSTM32_Signal_11(FMC_test1),  //loopback test
        .FPGAtoSTM32_Signal_12(FMC_test2),
        .FPGAtoSTM32_Signal_13(FMC_test3),
        .FPGAtoSTM32_Signal_14(),
        .FPGAtoSTM32_Signal_15(),
        .FPGAtoSTM32_Signal_16(16'd666), //static test value
        .FPGAtoSTM32_Signal_17(16'd777),
        .FPGAtoSTM32_Signal_18(16'd888), 

        .STM32_Databus(DATAbus),
    /////////////////////FROM_STM32////////////////////////
        .STM32toFPGA_Signal_1(dc_voltage_q5),
        .STM32toFPGA_Signal_2(R_idct_q12),
        .STM32toFPGA_Signal_3(I_ov_20L),
        .STM32toFPGA_Signal_4(diode_voltage_q15),
        .STM32toFPGA_Signal_5(switch_R_q15),
        .STM32toFPGA_Signal_6(ePOS_in),
        .STM32toFPGA_Signal_7(eOMG_in),
        .STM32toFPGA_Signal_8(half_flux_q15), 
        .STM32toFPGA_Signal_9(), 
        .STM32toFPGA_Signal_10(),
        .STM32toFPGA_Signal_11(FMC_test1),
        .STM32toFPGA_Signal_12(FMC_test2),
        .STM32toFPGA_Signal_13(FMC_test3),
        .STM32toFPGA_Signal_14(),
        .STM32toFPGA_Signal_15(), 
        .STM32toFPGA_Signal_16() // Intentionally open
    );

    // Existing three-phase inverter.
    // main.sch: XLXI_60
    inv_phi3_HB u_inverter (
        .clk_180MHz(clk_180mhz),
        .S1(epwm_1A),
        .S2(epwm_1B),
        .S3(epwm_2A),
        .S4(epwm_2B),
        .S5(epwm_3A),
        .S6(epwm_3B),
        .rst_n(rst_n),
        // [2026-11-10 15:59 CST] Preserve former unscaled feedback as comments.
        // .Ia_S35_Q17(phase_a_current),
        // .Ib_S35_Q17(phase_b_current),
        // .Ic_S35_Q17(phase_c_current),
        .Ia_S35_Q17(phase_a_current_q17),
        .Ib_S35_Q17(phase_b_current_q17),
        .Ic_S35_Q17(phase_c_current_q17),
        .Udc1P_S16_Q5(dc_voltage_q5),
        .Udc2P_S16_Q5(dc_voltage_q5),
        .Udc3P_S16_Q5(dc_voltage_q5),
        .Udc1N_S16_Q5(negative_dc_voltage_q5),
        .Udc2N_S16_Q5(negative_dc_voltage_q5),
        .Udc3N_S16_Q5(negative_dc_voltage_q5),
        .Rd_S16_Q15(switch_R_q15),
        .Vd_S16_Q15(diode_voltage_q15),

/////////////////output////////////////////////
        .x_1(V_a_q17),
        .x_2(V_b_q17),
        .x_3(V_c_q17),
        .x_4(), 
        .x_5(), 
        .x_6(), 
        .x_7(), 
    // [2026-11-10 16:39 CST] Leave the unused observation output open; PCI returns test data.
    // .x_8(phase_a_voltage_stm32),
        .x_8(),
        .x_9(), // Intentionally open, as in main.sch.
    // [2026-11-10 16:39 CST] Leave the unused observation output open; PCI returns test data.
    // .x_10(phase_c_voltage_stm32)
        .x_10()
    );
 
    // [2026-11-10 16:00 CST] D/E bridge uses the copied two-leg module; no sixth leg is instantiated.
    // extension: EXT_INVERTER_DE
    inv_phi2_HB_DE u_inverter_de (
        .clk_180MHz(clk_180mhz), 
		.rst_n(rst_n),
        .S1(epwm_4A), 
		.S2(epwm_4B), 
		.S3(epwm_5A), 
		.S4(epwm_5B),
        // .S5(1'b0), .S6(1'b0), // Third bridge leg disabled in copied module.
        // [2026-11-10 15:59 CST] Match the original bridge input fixed-point format.
        // .Id_S35_Q17(phase_d_current), .Ie_S35_Q17(phase_e_current),
        .Id_S35_Q17(phase_d_current_q17), 
        .Ie_S35_Q17(phase_e_current_q17),
        .Udc1P_S16_Q5(dc_voltage_q5), 
        .Udc2P_S16_Q5(dc_voltage_q5),
        .Udc1N_S16_Q5(negative_dc_voltage_q5), 
        .Udc2N_S16_Q5(negative_dc_voltage_q5),
        .Rd_S16_Q15(switch_R_q15), 
        .Vd_S16_Q15(diode_voltage_q15),
        .Vd_q17(V_d_q17), 
        .Ve_q17(V_e_q17),
        .phase_d_lower_current_stm32(), 
        .phase_e_lower_current_stm32(),
    // [2026-11-10 16:39 CST] Leave the unused observation output open; PCI returns test data.
    // .phase_d_voltage_stm32(phase_d_voltage_stm32), 
        .phase_d_voltage_stm32(),
    // [2026-11-10 16:39 CST] Leave the unused observation output open; PCI returns test data.
    // .phase_e_voltage_stm32(phase_e_voltage_stm32)
        .phase_e_voltage_stm32()
    );

    // [2026-11-10 16:00 CST] Verified A/B/C module, using mul18x35_1225_BySunY.
    // main.sch: XLXI_61
    Inductor u_inductor (
        .clk_180MHz(clk_180mhz), .rst_n(rst_n),
        .UAO_P_S35(V_a_q17), .UAO_N_S35(V_N_q17),
        .UBO_P_S35(V_b_q17), .UBO_N_S35(V_N_q17),
        .UCO_P_S35(V_c_q17), .UCO_N_S35(V_N_q17),
        .bEMF_A_S35_Q17(bEMF_a_q17), 
        .bEMF_B_S35_Q17(bEMF_b_q17),
        .bEMF_C_S35_Q17(bEMF_c_q17),
        .I_OV_20LinuH_Q18(I_ov_20L), 
        .Res_S16_Q12(R_idct_q12),
        .x_1(phase_a_current), 
        .x_2(phase_b_current),
        .x_3(phase_c_current),
    // [2026-11-10 16:39 CST] Unused split-current observations are disconnected from the PCI bench.
    // .Curt1_H15(current_a_high_stm32), .Curt1_L15(current_a_low_stm32),
        .Curt1_H15(), .Curt1_L15(),
    // [2026-11-10 16:39 CST] Unused split-current observations are disconnected from the PCI bench.
    // .Curt2_H15(current_b_high_stm32), .Curt2_L15(current_b_low_stm32),
        .Curt2_H15(), .Curt2_L15(),
    // [2026-11-10 16:39 CST] Unused split-current observations are disconnected from the PCI bench.
    // .Curt3_H15(current_c_high_stm32), .Curt3_L15(current_c_low_stm32)
        .Curt3_H15(), .Curt3_L15()
    );

    // [2026-11-10 16:00 CST] D/E copy of the verified module, using mul_inductor_2.
    // extension: EXT_INDUCTOR_DE
    Inductor_DE u_inductor_de (
        .clk_180MHz(clk_180mhz), .rst_n(rst_n),
        .UDO_P_S35(V_d_q17), .UEO_P_S35(V_e_q17),
        .UDO_N_S35(V_N_q17), .UEO_N_S35(V_N_q17),
        .bEMF_D_S35_Q17(bEMF_d_q17), 
        .bEMF_E_S35_Q17(bEMF_e_q17),
        .I_OV_20LinuH_Q18(I_ov_20L), 
        .Res_S16_Q12(R_idct_q12),
        .x_4(phase_d_current), 
        .x_5(phase_e_current),
    // [2026-11-10 16:39 CST] Unused split-current observations are disconnected from the PCI bench.
    // .Curt4_H15(current_d_high_stm32), .Curt4_L15(current_d_low_stm32),
        .Curt4_H15(), .Curt4_L15(),
    // [2026-11-10 16:39 CST] Unused split-current observations are disconnected from the PCI bench.
    // .Curt5_H15(current_e_high_stm32), .Curt5_L15(current_e_low_stm32)
        .Curt5_H15(), .Curt5_L15()
        // .x_3(), .Curt3_H15(), .Curt3_L15() // Third phase disabled in copied module.
    );

    // Five-phase averages for neutral-point calculation
    add5ov5 div5 (
        .clk_fast(clk_180mhz),
        .rst_n(rst_n),
        .Ua1_S35_Q17(35'sd131072), //(V_a_q17),
        .Ub1_S35_Q17(35'sd32768), //(V_b_q17),
        .Uc1_S35_Q17(35'sd0), //(V_c_q17),
        .Ud1_S35_Q17(35'sd0), //(V_d_q17),
        .Ue1_S35_Q17(35'sd0), //(V_e_q17),
        .Ua2_S35_Q17(bEMF_a_q17),
        .Ub2_S35_Q17(bEMF_b_q17),
        .Uc2_S35_Q17(bEMF_c_q17),
        .Ud2_S35_Q17(bEMF_d_q17),
        .Ue2_S35_Q17(bEMF_e_q17),
        .Ua3_S35_Q17(35'sd0), //mutual_emf_a_q17
        .Ub3_S35_Q17(35'sd0), //mutual_emf_b_q17
        .Uc3_S35_Q17(35'sd0), //mutual_emf_c_q17
        .Ud3_S35_Q17(35'sd0), //mutual_emf_d_q17
        .Ue3_S35_Q17(35'sd0), //mutual_emf_e_q17
        .U1_S35_Q17(SUM_phase_V_q17),
        .U2_S35_Q17(SUM_bEMF_q17),
        .U3_S35_Q17(SUM_mutEMF_q17)
    );


    wire [15:0]  Vn_stm32; 
    // Neutral-point voltage.
    Volt_N_calc u_neutral_voltage (
        .clk(clk_180mhz),
        .rst_n(rst_n),
        .sum_uX0_ovr5(SUM_phase_V_q17),
        .sum_eX_ovr5(SUM_bEMF_q17),
        .sum_eMUTUAL_ovr5(SUM_mutEMF_q17),
        .U_N_S35_Q17(V_N_q17),
        .U_N_STM32(Vn_stm32)
    );

    // Negative DC voltage shared by all three bridge legs.
    Neg_Pos_converter u_negative_dc_voltage (
        .data_in(dc_voltage_q5),
        .data_out(negative_dc_voltage_q5)
    );

    // Permanent-magnet back EMF; speed input is open in the source schematic.
    BackEMF u_back_EMF (
        .clk(clk_180mhz),
        .rst_n(rst_n),
        .epos_S16_360(ePOS_in),
        .eOMG_S16_Q2(eOMG_in), // Intentionally open, as in main.sch.
        .Phir_Half_S16_Q15(half_flux_q15),
        .eA_S35_Q17(bEMF_a_q17),
        .eB_S35_Q17(bEMF_b_q17),
        .eC_S35_Q17(bEMF_c_q17),
        .eD_S35_Q17(bEMF_d_q17),
        .eE_S35_Q17(bEMF_e_q17),
        .eA_STM32_S16(bEMF_a_stm32)
    );

    // Three-phase Clarke transform (module is defined in Clarke2alphabeta.v).
    // main.sch: XLXI_97
    // Clarke3Phase u_clarke (
    //     .clk_180MHz(clk_180mhz),
    //     .rst_n(rst_n),
    //     .I_A_S35_Q25(phase_a_current),
    //     .I_B_S35_Q25(phase_b_current),
    //     .I_C_S35_Q25(phase_c_current),
    //     .I_alpha_STM32_Out(i_alpha_stm32),
    //     .I_beta_STM32_Out(i_beta_stm32),
    //     .I_alpha_S18_Q9(i_alpha_q9),
    //     .I_beta_S18_Q9(i_beta_q9),
    //     .Ia_S18_Q9(current_a_q9),
    //     .Ib_S18_Q9(current_b_q9),
    //     .Ic_S18_Q9(current_c_q9)
    // );

    // Park transform; dq outputs have no torque-model consumer in main.sch.
    // main.sch: XLXI_94
    // Park2dq u_park (
    //     .clk_180MHz(clk_180mhz),
    //     .rst_n(rst_n),
    //     .epos_S18(electrical_position_undriven),
    //     .I_beta_S18_Q9(i_beta_q9),
    //     .I_d_S18_Q9(i_d_q9_unused),
    //     .I_q_S18_Q9(i_q_q9_unused),
    //     .I_alpha_S18_Q9(i_alpha_q9),
    //     .I_d_STM32_Out(i_d_stm32),
    //     .I_q_STM32_Out(i_q_stm32)
    // );

    // Clock wrapper; only the 50 MHz and 180 MHz outputs are connected.
    // main.sch: XLXI_59
    clk300MHz u_clock (
        .clkin(clk_ex),
        .clk300MHz(), 
        .clk50MHz(clk_50mhz),
        .clk180MHz(clk_180mhz)
    );

    // Electrical position observation; source net has no driver in main.sch.
    // main.sch: XLXI_113
    // [2026-11-10 16:39 CST] Disable the unused position observation whose source is undriven.
    // bit18_to_16 u_position_to_stm32 (
    // .in_18bit(electrical_position_undriven),
    // .out_16bit(position_stm32)
    // );

    // Three-phase mutual-inductance EMF.
    // main.sch: XLXI_116
    // EMFm_calc u_mutual_emf (
    //     .clk(clk_180mhz),
    //     .rst_n(rst_n),
    //     .DIFov2_S16_Q12(mutual_diff_over2_q12),
    //     .AVGov4_S16_Q10(mutual_avg_over4_q10),
    //     .iA_S18_Q9(current_a_q9),
    //     .iB_S18_Q9(current_b_q9),
    //     .iC_S18_Q9(current_c_q9),
    //     .ePOS_S18_360(electrical_position_undriven),
    //     .eA_mutual_S35_Q17(mutual_emf_a_q17),
    //     .eB_mutual_S35_Q17(mutual_emf_b_q17),
    //     .eC_mutual_S35_Q17(mutual_emf_c_q17)
    // );

    // Schematic: PE5/TIM9_CH1 -> GPIO61 (T4, IO_L63N_2) -> ePWM_ua_Grid (B16).
    // B16 feeds external U2 PWM_In1/Out1; PA4/DAC_OUT1 feeds Analog_In4/Out4.
    // Combinational passthrough: independent of rst_n, PLL and the FMC model.
    // main.sch: XLXI_117
    In2Out grid_pwm_passthru (
        .In1(GPIO61),
        .In2(epwm_8A),
        .In3(1'b0),

        .Out1(ePWM_ua_Grid),
        .Out2(ePWM_ub_Grid),
        .Out3() // Intentionally open, as in main.sch.
    );

endmodule

`default_nettype wire
