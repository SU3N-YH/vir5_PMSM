`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:22:06 02/01/2026 
// Design Name: 
// Module Name:    Iindctr_sub_Iload 
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
module Iindctr_sub_Iload(
    input  signed [34:0] Idct_1,
    input  signed [34:0] Idct_2,
    input  signed [34:0] Idct_3,
    input  signed [34:0] Load_1,
    input  signed [34:0] Load_2,
    input  signed [34:0] Load_3,
    
    output signed [34:0] I_1,
    output signed [34:0] I_2,
    output signed [34:0] I_3
);
    assign    I_1 = Idct_1 - Load_1;
    assign    I_2 = Idct_2 - Load_2;
    assign    I_3 = Idct_3 - Load_3;
endmodule
