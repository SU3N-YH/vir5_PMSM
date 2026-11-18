`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:54 12/26/2025 
// Design Name: 
// Module Name:    noisekiller 
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

module noisekiller(
    input  clk,
    input  [15:0] din,  //data input
    output [15:0] dout//data output
    );	 
reg [7:0]  LogicLevel_Cnt=0;
reg [15:0] LogicLevel_Last=0;
reg [15:0] LogicLevel_out_Temp;
parameter  LogicLevel_Level=2;// every 6 sampling window
assign     dout=LogicLevel_out_Temp;
always@(posedge clk)
begin
    if (LogicLevel_Last==din) 
    LogicLevel_Cnt<=LogicLevel_Cnt+1;
    else
	 begin
	 LogicLevel_Cnt<=0;
	 LogicLevel_Last<=din;
	 end
    if (LogicLevel_Cnt>=LogicLevel_Level) 
	 begin
    LogicLevel_out_Temp<=LogicLevel_Last;
	 LogicLevel_Cnt<=0;
	 end
	 else
	 LogicLevel_out_Temp<=LogicLevel_out_Temp;
end


endmodule
