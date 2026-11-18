`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: 
// 
// Create Date:    07/23/2026 
// Design Name: 
// Module Name:    test_Mech
// Project Name: 
// Target Devices: Spartan-6
// Tool versions: ISE 14.7
// Description: Testbench for the Mechanical module to verify kinetic calculations.
//
// Dependencies: Mechanical.v
//
//////////////////////////////////////////////////////////////////////////////////

module test_Mech;
    // UUT Inputs
    reg clk_180MHz;
    reg rst_n;
    reg signed [15:0] Freq_Division_S16;
    reg signed [15:0] TsOverJ_S16_Q27;
    reg signed [15:0] TsOver2pi_S16_Q34; 
    reg signed [34:0] Te_S35_Q17;
    reg signed [34:0] TL_S35_Q17;
    reg signed [15:0] B_S16_Q11;
    reg signed [15:0] p_n_S16_Q0;

    // UUT Outputs
    wire signed [17:0] OMGm_S18_Q4;
    wire signed [17:0] ePOS_S18_360;

    // Loop variable for continuous signal generation
    integer i;

    // Instantiate the Unit Under Test (UUT)
    Mechanical uut (
        .clk_180MHz(clk_180MHz), 
        .rst_n(rst_n), 
        .Freq_Division_S16(Freq_Division_S16), 
        .TsOverJ_S16_Q27(TsOverJ_S16_Q27), 
        .TsOver2pi_S16_Q34(TsOver2pi_S16_Q34),
        .Te_S35_Q17(Te_S35_Q17), 
        .TL_S35_Q17(TL_S35_Q17), 
        .B_S16_Q11(B_S16_Q11), 
        .p_n_S16_Q0(p_n_S16_Q0), 
        .OMGm_S18_Q4(OMGm_S18_Q4), 
        .ePOS_S18_360(ePOS_S18_360)
    );

    // Clock generation (180MHz = 5.555ns period)
    initial begin
        clk_180MHz = 0;
        forever #2.778 clk_180MHz = ~clk_180MHz; 
    end

    initial begin
        // Initialize all inputs to zero to prevent 'X' propagation
        rst_n = 0;
        Freq_Division_S16 = 16'd0;
        TsOverJ_S16_Q27   = 16'd0;
        TsOver2pi_S16_Q34 = 16'd0;
        Te_S35_Q17        = 35'd0;
        TL_S35_Q17        = 35'd0;
        B_S16_Q11         = 16'd0;
        p_n_S16_Q0        = 16'd0;
        
        // Wait for reset stabilization
        #100;
        
        // Base global parameters
        B_S16_Q11         = 16'd15;       
        p_n_S16_Q0        = 16'd4;   // 4 pole pairs     
        
        rst_n = 1;

        // Base Configuration for Integration
        Freq_Division_S16 = 16'd10;       // 100kHz update rate
        TsOverJ_S16_Q27   = 16'd2684;     
        TsOver2pi_S16_Q34 = 16'd27343;    
        
        // TL is strictly constant at 10 Nm (10 * 2^17) for the entire simulation
        TL_S35_Q17        = 35'd1310720;  

        // =========================================================================
        // Phase 1: Constant Value Tests (Step Responses)
        // Verify steady states and integrator directions before dynamic changes.
        // =========================================================================

        // Test 1.1: Net Acceleration (Te = 20 Nm)
        // Te (20 Nm) > TL (10 Nm). OMGm should exhibit a linear positive slope.
        Te_S35_Q17 = 35'd2621440; 
        #200000;

        // Test 1.2: Steady State (Te = 10 Nm)
        // Te (10 Nm) == TL (10 Nm). OMGm should flatten and remain constant.
        Te_S35_Q17 = 35'd1310720; 
        #200000;

        // Test 1.3: Net Deceleration (Te = 0 Nm)
        // Te (0 Nm) < TL (10 Nm). OMGm should exhibit a linear negative slope.
        Te_S35_Q17 = 35'd0; 
        #200000;

        // Reset the system to clear integrators before Phase 2 for a clean observation
        rst_n = 0;
        Te_S35_Q17 = 35'd0; // Ensure Te starts at 0
        #100;
        rst_n = 1;
        #10000; 

        // =========================================================================
        // Phase 2: Continuous Torque Generation (Trapezoidal Profile)
        // =========================================================================

        // Sub-phase 2.1: Linear Ramp-Up
        // Increase Te continuously from 0 Nm to 40 Nm over 200us
        // 40 Nm = 5242880 in Q17 format.
        // 200 iterations with 1us step delay. Increment = 5242880 / 200 = 26214
        for (i = 0; i < 200; i = i + 1) begin
            Te_S35_Q17 = Te_S35_Q17 + 35'd26214; 
            #1000; 
        end

        // Sub-phase 2.2: Steady High Torque
        // Hold Te at roughly 40 Nm for 100us
        #100000; 

        // Sub-phase 2.3: Linear Ramp-Down
        // Decrease Te continuously from 40 Nm back to 0 Nm over 200us
        for (i = 0; i < 200; i = i + 1) begin
            Te_S35_Q17 = Te_S35_Q17 - 35'd26214; 
            #1000; 
        end

        // Sub-phase 2.4: Braking / Deceleration
        // Te is held at 0 Nm. Since TL is 10 Nm, the motor will decelerate.
        // Hold for 300us to observe speed drop and eventual stabilization/reversal.
        Te_S35_Q17 = 35'd0; 
        #300000; 

        $stop; 
    end

endmodule