`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:36:18 10/16/2025 
// Design Name: 
// Module Name:    clk300MHz 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clk300MHz(
    input clkin,
    //input rst_n,
    output clk300MHz,
	 output clk50MHz,
	 output clk180MHz
    );
//wire rst;
//assign rst = ~rst_n;

/////20MHz-->300MHz

  pll300MHz CLOCK
   (// Clock in ports
    .CLK_IN(clkin),      // IN
    // Clock out ports
    .CLK_300MHz(clk300MHz),     // OUT
    .CLK_OUT2(clk50MHz),  // OUT
	 .CLK_OUT3(clk180MHz)
	 );

endmodule
