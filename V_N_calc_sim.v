`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:38:41 07/15/2026
// Design Name:   Volt_N_calc
// Module Name:   E:/SUEN27/Feb1_finale/LCL_26JUL/V_N_calc_sim.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Volt_N_calc
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module V_N_calc_sim;

	// Inputs
	reg clk;
	reg rst_n;
	reg [34:0] uA0_S35_Q17;
	reg [34:0] uB0_S35_Q17;
	reg [34:0] uC0_S35_Q17;
	reg [34:0] uD0_S35_Q17;
	reg [34:0] uE0_S35_Q17;
	reg [34:0] uF0_S35_Q17;
	reg [34:0] eA_S35_Q17;
	reg [34:0] eB_S35_Q17;
	reg [34:0] eC_S35_Q17;
	reg [34:0] eD_S35_Q17;
	reg [34:0] eE_S35_Q17;
	reg [34:0] eF_S35_Q17;
	reg [34:0] u_mutual_sum_S35_Q17;

	// Outputs
	wire [34:0] U_N_S35_Q17;

	// Instantiate the Unit Under Test (UUT)
	Volt_N_calc uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.uA0_S35_Q17(uA0_S35_Q17), 
		.uB0_S35_Q17(uB0_S35_Q17), 
		.uC0_S35_Q17(uC0_S35_Q17), 
		.uD0_S35_Q17(uD0_S35_Q17), 
		.uE0_S35_Q17(uE0_S35_Q17), 
		.uF0_S35_Q17(uF0_S35_Q17), 
		.eA_S35_Q17(eA_S35_Q17), 
		.eB_S35_Q17(eB_S35_Q17), 
		.eC_S35_Q17(eC_S35_Q17), 
		.eD_S35_Q17(eD_S35_Q17), 
		.eE_S35_Q17(eE_S35_Q17), 
		.eF_S35_Q17(eF_S35_Q17), 
		.u_mutual_sum_S35_Q17(u_mutual_sum_S35_Q17), 
		.U_N_S35_Q17(U_N_S35_Q17)
	);



always #2.778 clk = ~clk;
	initial begin
		// Initialize Inputs[cite: 2]
		clk = 0;
		rst_n = 0;
		uA0_S35_Q17 = 0;
		uB0_S35_Q17 = 0;
		uC0_S35_Q17 = 0;
		uD0_S35_Q17 = 0;
		uE0_S35_Q17 = 0;
		uF0_S35_Q17 = 0;
		eA_S35_Q17 = 0;
		eB_S35_Q17 = 0;
		eC_S35_Q17 = 0;
		eD_S35_Q17 = 0;
		eE_S35_Q17 = 0;
		eF_S35_Q17 = 0;
		u_mutual_sum_S35_Q17 = 0;

		// Wait 100 ns for global reset to finish[cite: 2]
		#100;
        rst_n = 1;
        #20; // Add a short delay to shift the clock edge and simulate realistic register output updates.
        
        // ==========================================================
        // Test case 1: positive-number calculation test
        // Assume the external phase voltage uA0 = 24.0 V and back-EMF eA = 10.0 V
        // Q17 format conversion: 24.0 * (2^17) = 3145728
        //                        10.0 * (2^17) = 1310720
        // ==========================================================
        uA0_S35_Q17 = 35'sd3145728;
        eA_S35_Q17  = 35'sd1310720;
        
        // Theoretical expectation
        // Numerator = 24.0 - 10.0 = 14.0
        // U_N = 14.0 / 3 = 4.666666...
        // Expected Q17 result = 4.666666 * 131072 ≈ 611669
        
        // Wait for pipeline execution (the previous code uses a 3-stage pipeline, so wait for at least 3 clocks)
        #30; 

        // ==========================================================
        // Test case 2: negative-number and sign-bit overflow-resistance test
        // Assume the external phase voltage uA0 = -15.0 V and back-EMF eA = 5.0 V
        // Q17 format conversion: -15.0 * (2^17) = -1966080
        //                         5.0 * (2^17) = 655360
        // ==========================================================
        uA0_S35_Q17 = -35'sd1966080;
        eA_S35_Q17  = 35'sd655360;
        
        // Theoretical expectation
        // Numerator = -15.0 - 5.0 = -20.0
        // U_N = -20.0 / 3 = -6.666666...
        // Expected Q17 result = -6.666666 * 131072 ≈ -873813
        
        #30;
        
        // ==========================================================
        // Test case 3: full reset to zero test
        // ==========================================================
        uA0_S35_Q17 = 35'sd0;
        eA_S35_Q17  = 35'sd0;
        
        #50;
        $stop; // Pause simulation
	end
      
endmodule

