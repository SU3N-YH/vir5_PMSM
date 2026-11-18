`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:23:31 08/10/2026 
// Design Name: 
// Module Name:    bit18_to_16 
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
module bit18_to_16(
    input signed [17:0] in_18bit,
    output signed [15:0] out_16bit
    );

// Scale by right-shifting 2 bits (divide by 4)
// This directly maps +/- 131072 to +/- 32768
assign out_16bit = in_18bit[17:2];
endmodule