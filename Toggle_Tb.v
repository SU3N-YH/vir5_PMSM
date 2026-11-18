`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:48:46 11/24/2025
// Design Name:   Toggle
// Module Name:   E:/myFiles/ISEfiles/RTL/LCL/Toggle_Tb.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Toggle
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Toggle_Tb;

	// Inputs
	reg clk_300MHz;

	// Outputs
	wire toggle;

	// Instantiate the Unit Under Test (UUT)
	Toggle uut (
		.clk_300MHz(clk_300MHz), 
		.toggle(toggle)
	);

	initial begin
		// Initialize Inputs
		clk_300MHz = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	// 时钟生成：300MHz (周期约3.33ns)
	always begin
    #1.667 clk_300MHz = ~clk_300MHz;
	end
      
endmodule

