`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:55:10 12/25/2025 
// Design Name: 
// Module Name:    bit16_bit36_1 
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
module bit16_bit36_1 (
    input  signed [15:0] din1,   // 输入�位有符号数，范围 [-32768, +32767]
    output signed [34:0] dout1   // 输出�位有符号� din << 10
);

    // 直接使用算术左移,不可�
    //assign dout = (din <<< 10);

    // 符号扩展后移位，可以
    assign dout1 = {{19{din1[15]}}, din1} <<< 10;

endmodule