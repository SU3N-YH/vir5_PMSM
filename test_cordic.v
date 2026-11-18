`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:39:40 07/17/2026
// Design Name:   CORDIC_STANDALONE
// Module Name:   test_cordic.v
// Project Name:  LCL
// Target Device: Spartan-6
// Tool versions: ISE 14.7
// Description: 
//
// Verilog Test Fixture created by ISE for module: CORDIC_STANDALONE
//
// Dependencies:
// 
// Revision:
// Revision 0.03 - Synchronized output ports to 18-bit (S18_Q17 format)
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module test_cordic;

    // Inputs
    reg CLOCK;
    reg RESET;
    reg iCall;
    reg signed [31:0] iData;

    // Outputs
    // UPDATED: Output ports are now 18-bit to match the natively S18_Q17 outputs
    wire oDone;
    wire signed [17:0] cos;
    wire signed [17:0] sin;
    wire signed [31:0] q_deg;
    wire signed [31:0] q_y;
    wire signed [31:0] q_x;

    // Instantiate the Unit Under Test (UUT)
    CORDIC_STANDALONE uut (
        .CLOCK(CLOCK), 
        .RESET(RESET), 
        .iCall(iCall), 
        .oDone(oDone), 
        .iData(iData), 
        .cos(cos), 
        .sin(sin), 
        .q_deg(q_deg), 
        .q_y(q_y), 
        .q_x(q_x)
    );

    // Clock generation: 180MHz, period is approx 5.556 ns (half period is 2.778 ns)
    always #2.778 CLOCK = ~CLOCK;

    initial begin
        // Initialize Inputs
        CLOCK = 0;
        RESET = 0; 
        iCall = 0;
        iData = 0;

        // Wait for global reset
        #100;
        RESET = 1; 
        #50;
        
        // ==========================================
        // Test Case 1: 45.50 degrees (Fractional)
        // Calculation: 45.50 * 65536 = 2981888
        // Expected cos (Q17): 0.700909 * 131072 = approx 91869
        // Expected sin (Q17): 0.713250 * 131072 = approx 93487
        // ==========================================
        iData = 32'd2981888; 
        iCall = 1;
        @(posedge oDone); 
        iCall = 0;
        #100;             
        
        // ==========================================
        // Test Case 2: 45.51 degrees (High Precision Comparison)
        // Calculation: 45.51 * 65536 = 2982543
        // Expected cos (Q17): 0.700785 * 131072 = approx 91853
        // Expected sin (Q17): 0.713374 * 131072 = approx 93503
        // Observation: Compares precision capability with Test Case 1.
        // ==========================================
        iData = 32'd2982543;
        iCall = 1;
        @(posedge oDone);
        iCall = 0;
        #100;              
        
        // ==========================================
        // Test Case 3: 135.25 degrees (Quadrant 2 Fractional)
        // Calculation: 135.25 * 65536 = 8863744
        // Expected cos (Q17): -0.710185 * 131072 = approx -93085
        // Expected sin (Q17): 0.704014 * 131072 = approx 92276
        // ==========================================
        iData = 32'd8863744;
        iCall = 1;
        @(posedge oDone);
        iCall = 0;
        #100;             

        // ==========================================
        // Test Case 4: -30.75 degrees (Negative Fractional)
        // Calculation: -30.75 * 65536 = -2015232
        // Expected cos (Q17): 0.859406 * 131072 = approx 112643
        // Expected sin (Q17): -0.511293 * 131072 = approx -67016
        // ==========================================
        iData = -32'sd2015232;
        iCall = 1;
        @(posedge oDone);
        iCall = 0;
        #100;              

        // End simulation safely
        $display("Simulation Finished.");
        $finish;
    end
      
endmodule