`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:57:00 10/14/2025
// Design Name:   Phi3_Load_4X1024A
// Module Name:   E:/myFiles/ISEfiles/RTL/LCL/Load.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Phi3_Load_4X1024A
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Load;

	// Inputs
	reg clk_300MHz;
	reg rst_n;
	reg [15:0] Ra_Load_Q1_10_5;
	reg [15:0] Rb_Load_Q1_10_5;
	reg [15:0] Rc_Load_Q1_10_5;
	reg [31:0] Ia_PCC_Q1_10_5;
	reg [31:0] Ib_PCC_Q1_10_5;
	reg [31:0] Ic_PCC_Q1_10_5;
	reg [31:0] Ia_Dev1_Q1_10_5;
	reg [31:0] Ib_Dev1_Q1_10_5;
	reg [31:0] Ic_Dev1_Q1_10_5;

	// Outputs
	wire [15:0] out1;
	wire [15:0] out2;
	wire [15:0] out3;

	// Instantiate the Unit Under Test (UUT)
	Phi3_Load_4X1024A uut (
		.clk_300MHz(clk_300MHz), 
		.rst_n(rst_n), 
		.Ra_Load_Q1_10_5(Ra_Load_Q1_10_5), 
		.Rb_Load_Q1_10_5(Rb_Load_Q1_10_5), 
		.Rc_Load_Q1_10_5(Rc_Load_Q1_10_5), 
		.Ia_PCC_Q1_10_5(Ia_PCC_Q1_10_5), 
		.Ib_PCC_Q1_10_5(Ib_PCC_Q1_10_5), 
		.Ic_PCC_Q1_10_5(Ic_PCC_Q1_10_5), 
		.Ia_Dev1_Q1_10_5(Ia_Dev1_Q1_10_5), 
		.Ib_Dev1_Q1_10_5(Ib_Dev1_Q1_10_5), 
		.Ic_Dev1_Q1_10_5(Ic_Dev1_Q1_10_5), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3)
	);

	initial begin
		// Initialize Inputs
		clk_300MHz = 0;
		rst_n = 0;
		Ra_Load_Q1_10_5 = 10;
		Rb_Load_Q1_10_5 = 10;
		Rc_Load_Q1_10_5 = 10;
		Ia_PCC_Q1_10_5 = 10000;
		Ib_PCC_Q1_10_5 = 5000;
		Ic_PCC_Q1_10_5 = 20000;
		Ia_Dev1_Q1_10_5 = 5000;
		Ib_Dev1_Q1_10_5 = 5000;
		Ic_Dev1_Q1_10_5 = 5000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		rst_n = 1;
	end
	// 时钟生成：300MHz (周期约3.33ns)
	always begin
    #1.667 clk_300MHz = ~clk_300MHz;
	end
      
endmodule

