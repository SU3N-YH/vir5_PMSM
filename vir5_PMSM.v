`timescale 1ns / 1ps
`default_nettype none

// Verilog top for Spartan-6, originally migrated from main.sch.
// [2026-11-10 16:00 CST] Replace native five-phase description.
// // The current Inductor has five phases; D/E use extra PWM inputs and STM32 readback.
// Two current modules implement A/B/C + D/E using independent multiplier IPs.
// [2026-11-10 15:56 CST] The old three-phase motor blocks remain commented below.
// Five-phase permanent-magnet and mutual voltages feed the current and neutral models.
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
    // input  wire         epwm_1B,
    input  wire         epwm_2A,
    // input  wire         epwm_2B,
    input  wire         epwm_3A,
    // input  wire         epwm_3B,
    input  wire         epwm_4A,
    // input  wire         epwm_4B, 
    input  wire         epwm_5A,
    // input  wire         epwm_5B,
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
    wire signed [34:0] mutual_emf_a_q17;
    wire signed [34:0] total_emf_a_q17 = $signed(bEMF_a_q17) + mutual_emf_a_q17;
    wire signed [34:0] mutual_emf_b_q17;
    wire signed [34:0] total_emf_b_q17 = $signed(bEMF_b_q17) + mutual_emf_b_q17;
    wire signed [34:0] mutual_emf_c_q17;
    wire signed [34:0] total_emf_c_q17 = $signed(bEMF_c_q17) + mutual_emf_c_q17;
    wire signed [34:0] mutual_emf_d_q17;
    wire signed [34:0] total_emf_d_q17 = $signed(bEMF_d_q17) + mutual_emf_d_q17;
    wire signed [34:0] mutual_emf_e_q17;
    wire signed [34:0] total_emf_e_q17 = $signed(bEMF_e_q17) + mutual_emf_e_q17;

    wire signed [15:0] mutual_diff_q12, mutual_avg_q12, mutual_sine_q12, mutual_skew_q12;

    wire [34:0]  SUM_phase_V_q17;
    wire [34:0]  SUM_bEMF_q17; 
    wire [34:0]  SUM_mutEMF_q17; 

    wire [34:0]  V_a_q17; 
    wire [34:0]  V_b_q17; 
    wire [34:0]  V_c_q17;
    wire [34:0]  V_d_q17;
    wire [34:0]  V_e_q17;

    wire [34:0]  V_N_q17; 

    wire [15:0]  switch_R_q15; 
    wire [15:0]  diode_voltage_q15; 
    wire [15:0]  ePOS_in;
    wire [15:0]  eOMG_in;
    wire [15:0]  half_flux_q15;

    wire [15:0]  FMC_test1;
    wire [15:0]  FMC_test2;
    wire [15:0]  FMC_test3;


    wire         clk_180mhz; 
    wire         clk_50mhz;
    wire [15:0]  pwm_deadtime_cycles;
    // wire [15:0]  pwm_deadtime_50mhz;
    // wire         pwm_deadtime_valid;
    wire A_Hi, A_Lo; // One-bit complementary gate commands per phase.
    wire B_Hi, B_Lo;
    wire C_Hi, C_Lo;
    wire D_Hi, D_Lo;
    wire E_Hi, E_Lo;
    wire [15:0]  half_Vdc_q5; 

    wire [34:0] phase_a_current_q17;
    wire [34:0] phase_b_current_q17;
    wire [34:0] phase_c_current_q17;
    wire [34:0] phase_d_current_q17;
    wire [34:0] phase_e_current_q17;

    // STM32 register interface; register numbering and data bus direction are unchanged.
    PCI u_pci (
        .sub_clk(clk_180mhz),
        .STM32_NWE_Low(STM32_NWE_Low),
        .STM32_NOE_Low(STM32_NOE_Low),
        .STM32_NE1_Low(STM32_NE1_Low),
        .addrbus(ADDRbus),
    /////////////////////TO_STM32////////////////////////
        .FPGAtoSTM32_Signal_1(phase_a_current[34:19]), // upper 16 bits of S35Q25 current
        .FPGAtoSTM32_Signal_2(phase_b_current[34:19]), 
        .FPGAtoSTM32_Signal_3(phase_c_current[34:19]), 
        .FPGAtoSTM32_Signal_4(phase_d_current[34:19]), 
        .FPGAtoSTM32_Signal_5(phase_e_current[34:19]), 
        .FPGAtoSTM32_Signal_6(bEMF_a_q17[34:15]),
        .FPGAtoSTM32_Signal_7(ePOS_in),
        .FPGAtoSTM32_Signal_8(eOMG_in),
        .FPGAtoSTM32_Signal_9(half_flux_q15),
        .FPGAtoSTM32_Signal_10(Vn_stm32),
        .FPGAtoSTM32_Signal_11(),  //loopback test
        .FPGAtoSTM32_Signal_12(),
        .FPGAtoSTM32_Signal_13(),
        .FPGAtoSTM32_Signal_14(V_a_q17[24:9]), 
        .FPGAtoSTM32_Signal_15(),
        .FPGAtoSTM32_Signal_16(FMC_test1), 
        .FPGAtoSTM32_Signal_17(FMC_test2),
        .FPGAtoSTM32_Signal_18(FMC_test3), 

        .STM32_Databus(DATAbus),
    /////////////////////FROM_STM32////////////////////////
        .STM32toFPGA_Signal_1(half_Vdc_q5),
        .STM32toFPGA_Signal_2(R_idct_q12),
        .STM32toFPGA_Signal_3(I_ov_20L),
        .STM32toFPGA_Signal_4(diode_voltage_q15),
        .STM32toFPGA_Signal_5(switch_R_q15),
        .STM32toFPGA_Signal_6(ePOS_in),
        .STM32toFPGA_Signal_7(eOMG_in),
        .STM32toFPGA_Signal_8(half_flux_q15), 
        .STM32toFPGA_Signal_9(pwm_deadtime_cycles), // port9: N * 20 ns
        .STM32toFPGA_Signal_10(mutual_diff_q12), // word 0x058
        .STM32toFPGA_Signal_11(mutual_avg_q12),  // word 0x1d2
        .STM32toFPGA_Signal_12(mutual_sine_q12), // word 0x0c2
        .STM32toFPGA_Signal_13(mutual_skew_q12), // word 0x1e6
        .STM32toFPGA_Signal_14(FMC_test1),
        .STM32toFPGA_Signal_15(FMC_test2),
        .STM32toFPGA_Signal_16(FMC_test3) 
    );

    wire signed [15:0]  NEG_half_Vdc_q5 = - half_Vdc_q5; 

    // One reference per phase; external epwm_1B..epwm_5B are no longer used.
    // Port 9: FPGA word 0x182 / STM32 byte address 0x60000304.
    // Transfer the complete 16-bit setting atomically from PCI's clock domain.
    // PWM_Deadzn_Config u_pwm_config (
    //     .src_clk(clk_180mhz),
    //     .dst_clk(clk_50mhz),
    //     .rst_n(rst_n),
    //     .data_src(pwm_deadtime_cycles),
    //     .data_dst(pwm_deadtime_50mhz),
    //     .valid_dst(pwm_deadtime_valid)
    // );
    PWM_Deadzn u_pwm_deadzn (
        .clk_50MHz(clk_50mhz),
        .rst_n(rst_n), // && pwm_deadtime_valid),
        .deadtime(pwm_deadtime_cycles),
        .A_Ref(epwm_1A),
        .B_Ref(epwm_2A),
        .C_Ref(epwm_3A),
        .D_Ref(epwm_4A),
        .E_Ref(epwm_5A),
        .A_Hi(A_Hi), .A_Lo(A_Lo),
        .B_Hi(B_Hi), .B_Lo(B_Lo),
        .C_Hi(C_Hi), .C_Lo(C_Lo),
        .D_Hi(D_Hi), .D_Lo(D_Lo),
        .E_Hi(E_Hi), .E_Lo(E_Lo)
    );

    // Existing three-phase inverter.
    inv_phi3_HB u_inverter (
        .clk_180MHz(clk_180mhz),
        .S1(A_Hi),
        .S2(A_Lo),
        .S3(B_Hi),
        .S4(B_Lo),
        .S5(C_Hi),
        .S6(C_Lo),
        .rst_n(rst_n),
        .Ia_S35_Q17(phase_a_current_q17),
        .Ib_S35_Q17(phase_b_current_q17),
        .Ic_S35_Q17(phase_c_current_q17),
        .Udc1P_S16_Q5(half_Vdc_q5),
        .Udc2P_S16_Q5(half_Vdc_q5),
        .Udc3P_S16_Q5(half_Vdc_q5),
        .Udc1N_S16_Q5(NEG_half_Vdc_q5),
        .Udc2N_S16_Q5(NEG_half_Vdc_q5),
        .Udc3N_S16_Q5(NEG_half_Vdc_q5),
        .Rd_S16_Q15(switch_R_q15),
        .Vd_S16_Q15(diode_voltage_q15),

/////////////////output////////////////////////
        .x_1(V_a_q17),
        .x_2(V_b_q17),
        .x_3(V_c_q17),
        .x_4(), 
        .x_5(), 
        .x_6(), 
        .x_7()
    );
 
    // [2026-11-10 16:00 CST] D/E bridge uses the copied two-leg module; no sixth leg is instantiated.
    // TIM8 CH1/CH2: D/E complementary switches include programmable deadtime.
    // extension: EXT_INVERTER_DE
    inv_phi2_HB_DE u_inverter_de (
        .clk_180MHz(clk_180mhz), 
		.rst_n(rst_n),
        .S1(D_Hi),
		.S2(D_Lo),
		.S3(E_Hi),
		.S4(E_Lo),
        // .S5(1'b0), .S6(1'b0), // Third bridge leg disabled in copied module.
        // [2026-11-10 15:59 CST] Match the original bridge input fixed-point format.
        // .Id_S35_Q17(phase_d_current), .Ie_S35_Q17(phase_e_current),
        .Id_S35_Q17(phase_d_current_q17), 
        .Ie_S35_Q17(phase_e_current_q17),
        .Udc1P_S16_Q5(half_Vdc_q5), 
        .Udc2P_S16_Q5(half_Vdc_q5),
        .Udc1N_S16_Q5(NEG_half_Vdc_q5), 
        .Udc2N_S16_Q5(NEG_half_Vdc_q5),
        .Rd_S16_Q15(switch_R_q15), 
        .Vd_S16_Q15(diode_voltage_q15),
        .Vd_q17(V_d_q17), 
        .Ve_q17(V_e_q17),
        .phase_d_lower_current_stm32(), 
        .phase_e_lower_current_stm32()
    );

    // [2026-11-10 16:00 CST] Verified A/B/C module, using mul18x35_1225_BySunY.
    // main.sch: XLXI_61
    Inductor u_inductor (
        .clk_180MHz(clk_180mhz), .rst_n(rst_n),
        .UAO_P_S35(V_a_q17), 
        .UAO_N_S35(V_N_q17),
        .UBO_P_S35(V_b_q17), 
        .UBO_N_S35(V_N_q17),
        .UCO_P_S35(V_c_q17), 
        .UCO_N_S35(V_N_q17),
        .bEMF_A_S35_Q17(total_emf_a_q17),
        .bEMF_B_S35_Q17(total_emf_b_q17),
        .bEMF_C_S35_Q17(total_emf_c_q17),
        .I_OV_20LinuH_Q18(I_ov_20L), 
        .Res_S16_Q12(R_idct_q12),
        .x_1(phase_a_current), 
        .x_2(phase_b_current),
        .x_3(phase_c_current)
    );

    // [2026-11-10 16:00 CST] D/E copy of the verified module, using mul_inductor_2.
    // extension: EXT_INDUCTOR_DE
    Inductor_DE u_inductor_de (
        .clk_180MHz(clk_180mhz), .rst_n(rst_n),
        .UDO_P_S35(V_d_q17), .UEO_P_S35(V_e_q17),
        .UDO_N_S35(V_N_q17), .UEO_N_S35(V_N_q17),
        .bEMF_D_S35_Q17(total_emf_d_q17),
        .bEMF_E_S35_Q17(total_emf_e_q17),
        .I_OV_20LinuH_Q18(I_ov_20L), 
        .Res_S16_Q12(R_idct_q12),
        .x_4(phase_d_current), 
        .x_5(phase_e_current)
    );

    // Five-phase averages for neutral-point calculation
    add5ov5 div5 (
        .clk_fast(clk_180mhz),
        .rst_n(rst_n),
        .Ua1_S35_Q17(V_a_q17),
        .Ub1_S35_Q17(V_b_q17),
        .Uc1_S35_Q17(V_c_q17),
        .Ud1_S35_Q17(V_d_q17),
        .Ue1_S35_Q17(V_e_q17),
        .Ua2_S35_Q17(bEMF_a_q17),
        .Ub2_S35_Q17(bEMF_b_q17),
        .Uc2_S35_Q17(bEMF_c_q17),
        .Ud2_S35_Q17(bEMF_d_q17),
        .Ue2_S35_Q17(bEMF_e_q17),
        .Ua3_S35_Q17(mutual_emf_a_q17),
        .Ub3_S35_Q17(mutual_emf_b_q17),
        .Uc3_S35_Q17(mutual_emf_c_q17),
        .Ud3_S35_Q17(mutual_emf_d_q17),
        .Ue3_S35_Q17(mutual_emf_e_q17),
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

    // [2026-11-16 19:30 CST] BackEMF and PCI parameter registers share 180 MHz.
    BackEMF u_back_EMF (
        .clk(clk_180mhz),
        .rst_n(rst_n),
        .epos_S16_360(ePOS_in),
        .eOMG_S16_Q2(eOMG_in),
        .Phir_Half_S16_Q15(half_flux_q15),
        .eA_S35_Q17(bEMF_a_q17),
        .eB_S35_Q17(bEMF_b_q17),
        .eC_S35_Q17(bEMF_c_q17),
        .eD_S35_Q17(bEMF_d_q17),
        .eE_S35_Q17(bEMF_e_q17)
    );

    // Match BackEMF's electrical angle and retain the fixed self-inductance in Inductor.
    // Saturate on Q25 -> Q9 conversion if a branch exceeds the S18 current range.
    function signed [17:0] mutual_current_q9;
        input signed [34:0] current_q25;
        begin
            if (current_q25[34] != current_q25[33])
                mutual_current_q9 = current_q25[34] ? 18'sh20000 : 18'sh1ffff;
            else
                mutual_current_q9 = current_q25[33:16];
        end
    endfunction

    EMFm_calc u_mutual_emf (
        .clk(clk_180mhz),
        .rst_n(rst_n),
        .LdMinusLq_ov5_S16_Q12(mutual_diff_q12),
        .LdPlusLq_ov5_S16_Q12(mutual_avg_q12),
        .L1PlusL2_ov5_S16_Q12(mutual_sine_q12),
        .L1MinusL2_ov5_S16_Q12(mutual_skew_q12),
        .iA_S18_Q9(mutual_current_q9(phase_a_current)),
        .iB_S18_Q9(mutual_current_q9(phase_b_current)),
        .iC_S18_Q9(mutual_current_q9(phase_c_current)),
        .iD_S18_Q9(mutual_current_q9(phase_d_current)),
        .iE_S18_Q9(mutual_current_q9(phase_e_current)),
        .ePOS_S18_360({ePOS_in, 2'b0}),
        .eA_mutual_S35_Q17(mutual_emf_a_q17),
        .eB_mutual_S35_Q17(mutual_emf_b_q17),
        .eC_mutual_S35_Q17(mutual_emf_c_q17),
        .eD_mutual_S35_Q17(mutual_emf_d_q17),
        .eE_mutual_S35_Q17(mutual_emf_e_q17)
    );

    // Clock wrapper; only the 50 MHz and 180 MHz outputs are connected.
    clk300MHz u_clock (
        .clkin(clk_ex),
        .clk300MHz(), 
        .clk50MHz(clk_50mhz),
        .clk180MHz(clk_180mhz)
    );


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
