`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:24:18 01/08/2026 
// Design Name: 
// Module Name:    Neg_Pos_converter 
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
module Neg_Pos_converter(
input [15:0] data_in,  
    output[15:0] data_out  
);
  assign data_out = 0 - data_in;

endmodule