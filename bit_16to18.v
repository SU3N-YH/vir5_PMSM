`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:00 08/10/2026 
// Design Name: 
// Module Name:    bit_16to18 
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
module bit_16to18(
    input  signed [15:0] in_16bit,
    output signed [17:0] out_18bit
);
    assign out_18bit = {{{in_16bit[15]}}, in_16bit} <<< 2;
endmodule