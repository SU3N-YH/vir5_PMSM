`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:42:55 11/24/2025 
// Design Name: 
// Module Name:    Toggle 
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
module Toggle(
    input clk_300MHz,
    output reg toggle
    );

parameter [15:0] counterMAX = 16'd30000;
reg [15:0] counter = 16'd0;

always @(posedge clk_300MHz) begin
	if(counter >= counterMAX)
	toggle = 1'b1;
	else
	toggle = 1'b0;
end

always @(posedge clk_300MHz) begin
	if(counter >= counterMAX<<1)
		counter <=1'b0;
	else
		counter <= counter+1'b1; 
end


endmodule
