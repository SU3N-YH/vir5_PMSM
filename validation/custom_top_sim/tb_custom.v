`timescale 1ns/1ps
module tb_custom;
 reg clk=0; always #2.778 clk=~clk;
 reg rst_n=1; reg signed [15:0] angle=16'sh1400, speed=16'sh0190, flux=16'shE000;
 wire signed [34:0] a,b,c,d,e; wire signed [15:0] astm;
 wire signed [34:0] m1,m2,m3, neutral; wire signed [15:0] stm;
 BackEMF bk(.clk(clk),.rst_n(rst_n),.epos_S16_360(angle),.eOMG_S16_Q2(speed),.Phir_Half_S16_Q15(flux),.eA_S35_Q17(a),.eB_S35_Q17(b),.eC_S35_Q17(c),.eD_S35_Q17(d),.eE_S35_Q17(e),.eA_STM32_S16(astm));
 add5ov5 av(.clk_fast(clk),.rst_n(rst_n),.Ua1_S35_Q17(35'sd131072),.Ub1_S35_Q17(35'sd32768),.Uc1_S35_Q17(35'sd0),.Ud1_S35_Q17(35'sd0),.Ue1_S35_Q17(35'sd0),.Ua2_S35_Q17(a),.Ub2_S35_Q17(b),.Uc2_S35_Q17(c),.Ud2_S35_Q17(d),.Ue2_S35_Q17(e),.Ua3_S35_Q17(35'sd0),.Ub3_S35_Q17(35'sd0),.Uc3_S35_Q17(35'sd0),.Ud3_S35_Q17(35'sd0),.Ue3_S35_Q17(35'sd0),.U1_S35_Q17(m1),.U2_S35_Q17(m2),.U3_S35_Q17(m3));
 Volt_N_calc vn(.clk(clk),.rst_n(rst_n),.sum_uX0_ovr5(m1),.sum_eX_ovr5(m2),.sum_eMUTUAL_ovr5(m3),.U_N_S35_Q17(neutral),.U_N_STM32(stm));
 integer n=0;
 initial begin rst_n=0; repeat(4) @(negedge clk); rst_n=1; repeat(30) @(negedge clk); repeat(360) begin @(negedge clk); if(n==359) $display("n=%0d a=%0d b=%0d c=%0d d=%0d e=%0d m1=%0d m2=%0d m3=%0d neutral=%0d stm=%0d hex=%h",n,a,b,c,d,e,m1,m2,m3,neutral,stm,stm); n=n+1; end $finish; end
endmodule




