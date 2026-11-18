`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:33:41 07/17/2026
// Design Name:   Clarke3Phase
// Module Name:   Z:/share/jul16_LCL/LCL_26JUL/test_clarke.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Clarke3Phase
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module test_clarke;

    // Inputs
    reg clk_180MHz;
    reg rst_n;
    reg signed [34:0] I_A_S35_Q25;
    reg signed [34:0] I_B_S35_Q25;
    reg signed [34:0] I_C_S35_Q25;

    // Outputs
    // Updated to match the S18Q9 outputs from the modified UUT
    wire signed [17:0] I_alpha_S18_Q9;
    wire signed [17:0] I_beta_S18_Q9;

    // Instantiate the Unit Under Test (UUT)
    Clarke3Phase uut (
        .clk_180MHz(clk_180MHz),
        .rst_n(rst_n),
        .I_A_S35_Q25(I_A_S35_Q25),
        .I_B_S35_Q25(I_B_S35_Q25),
        .I_C_S35_Q25(I_C_S35_Q25),
        .I_alpha_S18_Q9(I_alpha_S18_Q9), 
        .I_beta_S18_Q9(I_beta_S18_Q9)
    );

    // ---------------------------------------------------------
    // Clock Generation (180 MHz)
    // ---------------------------------------------------------
    initial begin
        clk_180MHz = 0;
        forever #2.778 clk_180MHz = ~clk_180MHz;
    end

    // ---------------------------------------------------------
    // Static Stimulus Process
    // ---------------------------------------------------------
    initial begin
        // Initialize Inputs
        rst_n = 0;
        I_A_S35_Q25 = 35'sd0;
        I_B_S35_Q25 = 35'sd0;
        I_C_S35_Q25 = 35'sd0;

        // Wait for global reset to finish
        #100;
        rst_n = 1;
        #100;

        // Test Case 1: Standard balanced input (0 degrees electrical)
        // I_A = 1.0, I_B = -0.5, I_C = -0.5 in Q25 format
        I_A_S35_Q25 =  35'sd33554432;
        I_B_S35_Q25 = -35'sd16777216;
        I_C_S35_Q25 = -35'sd16777216;
        #2000; // Increased simulation time for 10MHz clock domain stabilization

        // Test Case 2: A set of very close positive numbers
        // Designed to test truncation and small difference resolution
        I_A_S35_Q25 = 35'sd15000000;
        I_B_S35_Q25 = 35'sd15000100;
        I_C_S35_Q25 = 35'sd15000200;
        #2000;

        // Test Case 3: A set of very close negative numbers
        I_A_S35_Q25 = -35'sd8000000;
        I_B_S35_Q25 = -35'sd8000050;
        I_C_S35_Q25 = -35'sd8000100;
        #2000;
        
        // Test Case 4: Standard balanced input (90 degrees electrical)
        // I_A = 0, I_B = sqrt(3)/2 (0.866), I_C = -sqrt(3)/2 (-0.866)
        // 0.866 * 2^25 = 29057951
        I_A_S35_Q25 =  35'sd0;
        I_B_S35_Q25 =  35'sd29057951; 
        I_C_S35_Q25 = -35'sd29057951;
        #2000;
        
        // Test Case 5: Standard balanced input (120 degrees electrical)
        // I_A = -0.5, I_B = 1.0, I_C = -0.5
        I_A_S35_Q25 = -35'sd16777216;
        I_B_S35_Q25 =  35'sd33554432;
        I_C_S35_Q25 = -35'sd16777216;
        #2000;

        // Test Case 6: Unbalanced fault condition (Phase A single-phase excitation)
        // Verifies zero-sequence isolation characteristics of Clarke Transform
        I_A_S35_Q25 =  35'sd33554432;
        I_B_S35_Q25 =  35'sd0;
        I_C_S35_Q25 =  35'sd0;
        #2000;

        // Stop simulation
        $stop;
    end
      
endmodule
