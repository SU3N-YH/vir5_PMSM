`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:24:36 01/06/2026
// Design Name:   mul18x35_1225_BySunY
// Module Name:   Z:/share/WYLver_original/test2_1/test2/mul_tf.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mul18x35_1225_BySunY
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mul_tf;

	// Inputs
	reg clk;
	reg [17:0] a;
	reg [34:0] b;

	// Outputs
	wire [52:0] p;

	// Instantiate the Unit Under Test (UUT)
	mul18x35_1225_BySunY uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.p(p)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
      a=18'sd123;
		b=35'sd456;
		// Add stimulus here

	end
   always #1.67 clk = ~clk;   
	always #8.35 a=a+1;
	always #8.35 b=b+1;

endmodule

