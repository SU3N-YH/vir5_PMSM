`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:08:56 07/16/2026
// Design Name:   Park2dq
// Module Name:   test_park.v
// Project Name:  LCL
// Target Device: Spartan-6
// Tool versions: ISE 14.7 
// Description: 
//
// Verilog Test Fixture created by ISE for module: Park2dq
// 
////////////////////////////////////////////////////////////////////////////////
module test_park;

    // Inputs
    reg clk_180MHz;
    reg rst_n;
    reg signed [17:0] epos_S18;
    reg signed [17:0] I_alpha_S18_Q9;
    reg signed [17:0] I_beta_S18_Q9;

    // Outputs
    wire signed [17:0] I_d_S18_Q9;
    wire signed [17:0] I_q_S18_Q9;

    // Instantiate the Unit Under Test (UUT)
    Park2dq uut (
        .clk_180MHz(clk_180MHz), 
        .rst_n(rst_n), 
        .epos_S18(epos_S18), 
        .I_alpha_S18_Q9(I_alpha_S18_Q9), 
        .I_beta_S18_Q9(I_beta_S18_Q9), 
        .I_d_S18_Q9(I_d_S18_Q9), 
        .I_q_S18_Q9(I_q_S18_Q9)
    );

    // ---------------------------------------------------------
    // Clock generation: 180MHz (Period is approximately 5.556ns)
    // ---------------------------------------------------------
    initial begin
        clk_180MHz = 0;
        forever #2.778 clk_180MHz = ~clk_180MHz; 
    end

    // ---------------------------------------------------------
    // Global Simulation Control Block
    // ---------------------------------------------------------
    initial begin
        // Significantly extended simulation time to 100 us for dynamic observation
        #100000; 
        $display("Simulation Finished Automatically at %0t", $time);
        $finish; 
    end

    // ---------------------------------------------------------
    // Stimulus Input Control Block
    // ---------------------------------------------------------
    initial begin
        // Initial state
        rst_n = 0;
        epos_S18 = 0;
        I_alpha_S18_Q9 = 0;
        I_beta_S18_Q9  = 0;

        #100;
        rst_n = 1; // Release reset
        #123;      // Introduce an asymmetrical startup delay

        // ==========================================
        // Test Case 1: Electrical angle 0 degrees
        // ==========================================
        epos_S18       = 18'sd0; 
        I_alpha_S18_Q9 = 18'sd5120; // 10.0 A in Q9
        I_beta_S18_Q9  = 18'sd2560; // 5.0 A in Q9
        #430; 

        // ==========================================
        // Test Case 2: Electrical angle 90 degrees
        // ==========================================
        epos_S18       = 18'sd32768; 
        I_alpha_S18_Q9 = 18'sd5120; // 10.0 A in Q9
        I_beta_S18_Q9  = 18'sd2560; // 5.0 A in Q9
        #720; 
        
        // ==========================================
        // Test Case 3: Electrical angle 30 degrees
        // ==========================================
        epos_S18       = 18'sd10922; 
        I_alpha_S18_Q9 = 18'sd5120; // 10.0 A in Q9
        I_beta_S18_Q9  = 18'sd2560; // 5.0 A in Q9
        #615;
        
        // ==========================================
        // Test Case 4: Dynamic Rotor Sweeping
        // Simulates a spinning motor to observe continuous d-q currents.
        // ==========================================
        // Set constant stationary frame currents for clear observation
        I_alpha_S18_Q9 = 18'sd5120; // 10.0 A in Q9
        I_beta_S18_Q9  = 18'sd0;    // 0.0 A in Q9
        epos_S18       = -18'sd131072; // Start from -360 electrical degrees (assuming full range)

        // Enter a continuous loop until the global simulation time expires
        forever begin
            // The wait time must be > 200ns to allow CORDIC and TDM multiplier to finish
            #500; 
            
            // Increment angle step-by-step
            // Natural overflow of 18-bit signed register will wrap around correctly
            epos_S18 = epos_S18 + 18'sd512; 
        end
    end

endmodule