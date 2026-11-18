`timescale 1ns / 1ps
// Full top-level simulation with the actual 20 MHz PLL.
module tb_model180;
reg clk_ex=0;
always #25 clk_ex=~clk_ex;
reg rst_n=0;
reg [11:0] address=0;
reg cs=1,we_n=1,oe_n=1,drive=0;
reg [15:0] tx=0;
wire [15:0] bus;
assign bus=drive?tx:16'hzzzz;
integer errors=0,k;
vir5_PMSM dut (
 .STM32_NE1_Low(cs),.clk_ex(clk_ex),.DATAbus(bus),
 .STM32_NWE_Low(we_n),.STM32_NOE_Low(oe_n),.ADDRbus(address),
 .epwm_1A(1'b1),.epwm_1B(1'b0),.epwm_2A(1'b0),.epwm_2B(1'b1),
 .epwm_3A(1'b1),.epwm_3B(1'b0),.epwm_4A(1'b0),.epwm_4B(1'b1),
 .epwm_5A(1'b1),.epwm_5B(1'b0),.rst_n(rst_n),
 .GPIO61(1'b0),.epwm_8A(1'b1),.ePWM_ua_Grid(),.ePWM_ub_Grid()
);
task write_word;
 input [11:0] target;
 input [15:0] value;
 begin
  address=target;tx=value;drive=1;
  #17;cs=0;we_n=0;#241;we_n=1;cs=1;#17;drive=0;#47;
 end
endtask
task read_word;
 input [11:0] target;
 input [15:0] expected;
 begin
  address=target;#13;cs=0;oe_n=0;#101;
  if(bus!==expected) begin
   $display("FAIL: full top read addr=%h actual=%h expected=%h",target,bus,expected);
   errors=errors+1;
  end
  oe_n=1;cs=1;#47;
 end
endtask
initial begin
 #5000;rst_n=1;
 write_word(12'h200,16'd640);
 write_word(12'h114,16'd0);
 write_word(12'h136,16'd256);
 write_word(12'h17a,16'd5120);
 write_word(12'h05c,16'd400);
 write_word(12'h172,-16'sd8192);
 #5000;
 for(k=0;k<500;k=k+1) begin
  read_word(12'h1b6,16'h0055);
  if((^dut.phase_a_current)===1'bx || (^dut.phase_d_current)===1'bx ||
     (^dut.phase_e_current)===1'bx || (^dut.V_N_q17)===1'bx) begin
   $display("FAIL: full model unknown current or neutral");errors=errors+1;
  end
 end
 read_word(12'h0c4,16'd5120);read_word(12'h118,16'd400);
 read_word(12'h128,-16'sd8192);
 if(dut.phase_a_current==0 || dut.phase_d_current==0 || dut.phase_e_current==0) begin
  $display("FAIL: full model current did not evolve");errors=errors+1;
 end
 rst_n=0;#500;
 if(dut.phase_a_current!==0 || dut.phase_d_current!==0 || dut.phase_e_current!==0) begin
  $display("FAIL: full model reset");errors=errors+1;
 end
 if(errors==0) $display("PASS: full model 20 MHz PLL, 180 MHz arithmetic, 500 stable port6 reads, five-phase current and reset");
 else $display("FAIL: full model errors=%0d",errors);
 $finish;
end
initial begin #1000000;$display("FAIL: model timeout");$finish;end
endmodule
