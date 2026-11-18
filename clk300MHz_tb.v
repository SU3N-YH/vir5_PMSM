`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:39:08 10/16/2025
// Design Name:   clk300MHz
// Module Name:   E:/myFiles/ISEfiles/RTL/LCL/clk300MHz_tb.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk300MHz
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clk300MHz_tb;

	// Inputs
	reg clkin;
	reg rst_n;

	// Outputs
	wire clk300MHz;

	// Instantiate the Unit Under Test (UUT)
	clk300MHz uut (
		.clkin(clkin), 
		.rst_n(rst_n), 
		.clk300MHz(clk300MHz)
	);

	initial begin
		// Initialize Inputs
		clkin = 1;
		rst_n = 0;

		// Wait 100 ns for global reset to finish
		#100;
       rst_n = 1;
		// Add stimulus here
		#800
		rst_n = 0;
	end
	
	// 生成时钟信号 (50MHz)
    always #10 clkin = ~clkin;   
endmodule

