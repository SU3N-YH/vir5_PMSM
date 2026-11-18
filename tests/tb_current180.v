`timescale 1ns / 1ps
// Independent five-phase recurrence scoreboard.
module tb_current180;
reg clk=0, rst_n=0;
always #2.778 clk=~clk;
reg signed [34:0] voltage[0:4], neutral[0:4], emf[0:4];
reg [15:0] resistance=0, inverse=256;
wire signed [34:0] current[0:4];
Inductor abc (
 .clk_180MHz(clk),.rst_n(rst_n),
 .UAO_P_S35(voltage[0]),.UBO_P_S35(voltage[1]),.UCO_P_S35(voltage[2]),
 .UAO_N_S35(neutral[0]),.UBO_N_S35(neutral[1]),.UCO_N_S35(neutral[2]),
 .bEMF_A_S35_Q17(emf[0]),.bEMF_B_S35_Q17(emf[1]),.bEMF_C_S35_Q17(emf[2]),
 .I_OV_20LinuH_Q18(inverse),.Res_S16_Q12(resistance),
 .x_1(current[0]),.x_2(current[1]),.x_3(current[2])
);
Inductor_DE de (
 .clk_180MHz(clk),.rst_n(rst_n),
 .UDO_P_S35(voltage[3]),.UEO_P_S35(voltage[4]),
 .UDO_N_S35(neutral[3]),.UEO_N_S35(neutral[4]),
 .bEMF_D_S35_Q17(emf[3]),.bEMF_E_S35_Q17(emf[4]),
 .I_OV_20LinuH_Q18(inverse),.Res_S16_Q12(resistance),
 .x_4(current[3]),.x_5(current[4])
);
integer count=1, errors=0, updates=0, p, n;
reg signed [52:0] state_ref[0:4], increment_ref[0:4];
reg signed [34:0] output_ref[0:4], drop_ref[0:4], previous_emf[0:4];
reg signed [34:0] emf_now, emf_sum;
reg signed [63:0] wide;
integer inverse_frame;
always @(posedge clk) begin
 if(!rst_n) begin
  count=1; inverse_frame=0;
  for(p=0;p<5;p=p+1) begin
   state_ref[p]=0;increment_ref[p]=0;output_ref[p]=0;
   drop_ref[p]=0;previous_emf[p]=0;
  end
 end else begin
  if(count==1) begin
   inverse_frame=inverse;
   for(p=0;p<5;p=p+1) begin
    wide=$signed(output_ref[p]);
    wide=wide*resistance;
    drop_ref[p]=wide>>>20;
   end
  end
  if(count==4) begin
   updates=updates+1;
   for(p=0;p<5;p=p+1) begin
    output_ref[p]={state_ref[p][52],state_ref[p][43:10]};
    state_ref[p]=state_ref[p]+increment_ref[p];
   end
  end
  for(p=0;p<5;p=p+1) begin
   if(count==7+3*((p>=3)?p-3:p)) begin
    emf_now=voltage[p]-neutral[p]-drop_ref[p]-emf[p];
    emf_sum=emf_now+previous_emf[p];
    previous_emf[p]=emf_now;
    wide=$signed(emf_sum);
    increment_ref[p]=wide*inverse_frame;
   end
  end
  count=(count==18)?1:count+1;
 end
 #0.001;
 for(p=0;p<5;p=p+1) begin
  if(current[p]!==output_ref[p]) begin
   $display("FAIL: current phase=%0d actual=%0d expected=%0d",p,current[p],output_ref[p]);
   errors=errors+1;
  end
 end
end
initial begin
 for(n=0;n<5;n=n+1) begin voltage[n]=(n+1)*65536;neutral[n]=0;emf[n]=0;end
 repeat(24) @(negedge clk); rst_n=1;
 for(n=0;n<9000;n=n+1) begin
  @(negedge clk);
  // Change every clock: coefficient snapshots and per-phase voltage sampling differ.
  if(n>360) begin
   resistance=$random;
   inverse=$random;
   for(j=0;j<5;j=j+1) begin
    voltage[j]={$random,$random}; neutral[j]={$random,$random}; emf[j]={$random,$random};
   end
  end
  if(n==5001) rst_n=0;
  if(n==5004) rst_n=1;
 end
 if(errors==0 && updates>450)
  $display("PASS: current180 five-phase recurrence updates=%0d, signed wrap, R, EMF, coefficient snapshots and reset",updates);
 else $display("FAIL: current180 errors=%0d updates=%0d",errors,updates);
 $finish;
end
integer j;
initial begin #1000000;$display("FAIL: current180 timeout");$finish;end
endmodule
