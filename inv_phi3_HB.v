`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: y.S
// 
// Create Date:    15:31:02 01/08/2026 
// Design Name: 
// Module Name:    inv_phi3_HB 
// Project Name: 
// Target Devices: Spartan-6
// Tool versions:  ISE 14.7
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.04 - Added 16-bit truncated output voltages for STM32 observation
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module  inv_phi3_HB(
    input           clk_180MHz,
    input           S1,
    input           S2,
    input           S3,
    input           S4,
    input           S5,
    input           S6,
    input   signed  [34:0]  Ia_S35_Q17,
    input   signed  [34:0]  Ib_S35_Q17,
    input   signed  [34:0]  Ic_S35_Q17,
    input   signed  [15:0]  Udc1P_S16_Q5,
    input   signed  [15:0]  Udc2P_S16_Q5,
    input   signed  [15:0]  Udc3P_S16_Q5,
    input   signed  [15:0]  Udc1N_S16_Q5,
    input   signed  [15:0]  Udc2N_S16_Q5,
    input   signed  [15:0]  Udc3N_S16_Q5,
    input   signed  [15:0]  Rd_S16_Q15,
    input   signed  [15:0]  Vd_S16_Q15,
    input           rst_n,
    output  reg signed  [34:0]  x_1,
    output  reg signed  [34:0]  x_2,
    output  reg signed  [34:0]  x_3,
    output  reg signed  [15:0]  x_4,
    output  reg signed  [15:0]  x_5,
    output  reg signed  [15:0]  x_6,
    output  reg signed  [15:0]  x_7
    );

// Initialization
reg signed [34:0] UAO_S35_Q17 = 35'sd0;
reg signed [34:0] UBO_S35_Q17 = 35'sd0;
reg signed [34:0] UCO_S35_Q17 = 35'sd0;

reg signed [34:0] IQ1_S35_Q17 = 35'sd0;
reg signed [34:0] IQ3_S35_Q17 = 35'sd0;
reg signed [34:0] IQ5_S35_Q17 = 35'sd0;
reg signed [34:0] IQ2_S35_Q17 = 35'sd0;
reg signed [34:0] IQ4_S35_Q17 = 35'sd0;
reg signed [34:0] IQ6_S35_Q17 = 35'sd0;

reg signed [34:0] Volt_On_Switch12_S35_Q17 = 35'sd0;
reg signed [34:0] Volt_On_Switch34_S35_Q17 = 35'sd0;
reg signed [34:0] Volt_On_Switch56_S35_Q17 = 35'sd0;

wire signed [34:0] Vd_S35_Q17;
wire signed [34:0] Udc1Over2_S35_Q17;
wire signed [34:0] Udc2Over2_S35_Q17;
wire signed [34:0] Udc3Over2_S35_Q17;

wire signed [34:0] Temp1_S35_Q17;
wire signed [34:0] Temp2_S35_Q17;
wire signed [34:0] Temp3_S35_Q17;
wire signed [34:0] Temp4_S35_Q17;
wire signed [34:0] Temp5_S35_Q17;
wire signed [34:0] Temp6_S35_Q17;

reg  [4:0] Time_cnt = 5'd1; 
reg  clk_10MHz = 1'b1;

// Direct bit concatenation: 8 sign bits + 16 data bits + 11 zeros = 35 bits
assign Temp1_S35_Q17 = {{8{Udc1P_S16_Q5[15]}}, Udc1P_S16_Q5, 11'd0};
assign Temp2_S35_Q17 = {{8{Udc2P_S16_Q5[15]}}, Udc2P_S16_Q5, 11'd0};
assign Temp3_S35_Q17 = {{8{Udc3P_S16_Q5[15]}}, Udc3P_S16_Q5, 11'd0};
assign Temp4_S35_Q17 = {{8{Udc1N_S16_Q5[15]}}, Udc1N_S16_Q5, 11'd0};
assign Temp5_S35_Q17 = {{8{Udc2N_S16_Q5[15]}}, Udc2N_S16_Q5, 11'd0};
assign Temp6_S35_Q17 = {{8{Udc3N_S16_Q5[15]}}, Udc3N_S16_Q5, 11'd0};

assign Udc1Over2_S35_Q17 = Temp1_S35_Q17 - Temp4_S35_Q17;  
assign Udc2Over2_S35_Q17 = Temp2_S35_Q17 - Temp5_S35_Q17;  
assign Udc3Over2_S35_Q17 = Temp3_S35_Q17 - Temp6_S35_Q17;  

assign Vd_S35_Q17 = {{19{Vd_S16_Q15[15]}}, Vd_S16_Q15} <<< 2; 

// Clock division from 180MHz to 10MHz
always @(posedge clk_180MHz) begin
    if (Time_cnt == 5'd18) begin
        Time_cnt <= 5'd1;
        clk_10MHz <= 1'b1;
    end else begin
        Time_cnt <= Time_cnt + 1'b1;
        if (Time_cnt == 5'd8) begin
            clk_10MHz <= 1'b0;
        end
    end
end

// Modelling phase A bridge inverter
always @(posedge clk_10MHz) begin
    if (S1 === 1 && S2 === 0) begin         // Upper switch on, lower switch off
        IQ1_S35_Q17 <= Ia_S35_Q17;
        IQ2_S35_Q17 <= 0;
        UAO_S35_Q17 <= -Volt_On_Switch12_S35_Q17 + Udc1Over2_S35_Q17;
    end
    if (S1 === 0 && S2 === 1) begin         // Upper switch off, lower switch on
        IQ1_S35_Q17 <= 0;
        IQ2_S35_Q17 <= -Ia_S35_Q17;
        UAO_S35_Q17 <= -Volt_On_Switch12_S35_Q17 - Udc1Over2_S35_Q17;
    end
    if (S1 === 0 && S2 === 0 && Ia_S35_Q17 > 0) begin   // Dead time 
        IQ1_S35_Q17 <= 0;
        IQ2_S35_Q17 <= -Ia_S35_Q17;
        UAO_S35_Q17 <= -Udc1Over2_S35_Q17 - Vd_S35_Q17;
    end
    if (S1 === 0 && S2 === 0 && Ia_S35_Q17 < 0) begin
        IQ1_S35_Q17 <= Ia_S35_Q17;
        IQ2_S35_Q17 <= 0;
        UAO_S35_Q17 <= Udc1Over2_S35_Q17 + Vd_S35_Q17;
    end 
    if (S1 === 1 && S2 === 1) begin         // Both switches on, short circuit
        IQ1_S35_Q17 <= 32768;
        IQ2_S35_Q17 <= 32768;
        UAO_S35_Q17 <= 0;
    end
end

// Modelling phase B bridge inverter
always @(posedge clk_10MHz) begin
    if (S3 === 1 && S4 === 0) begin         // Upper switch on, lower switch off
        IQ3_S35_Q17 <= Ib_S35_Q17;
        IQ4_S35_Q17 <= 0;
        UBO_S35_Q17 <= -Volt_On_Switch34_S35_Q17 + Udc2Over2_S35_Q17;
    end
    if (S3 === 0 && S4 === 1) begin         // Upper switch off, lower switch on
        IQ3_S35_Q17 <= 0;
        IQ4_S35_Q17 <= -Ib_S35_Q17;
        UBO_S35_Q17 <= -Volt_On_Switch34_S35_Q17 - Udc2Over2_S35_Q17;
    end
    if (S3 === 0 && S4 === 0 && Ib_S35_Q17 > 0) begin   // Dead time
        IQ3_S35_Q17 <= 0;
        IQ4_S35_Q17 <= -Ib_S35_Q17;
        UBO_S35_Q17 <= -Udc2Over2_S35_Q17 - Vd_S35_Q17;
    end
    if (S3 === 0 && S4 === 0 && Ib_S35_Q17 < 0) begin
        IQ3_S35_Q17 <= Ib_S35_Q17;
        IQ4_S35_Q17 <= 0;
        UBO_S35_Q17 <= Udc2Over2_S35_Q17 + Vd_S35_Q17;
    end     
    if (S3 === 1 && S4 === 1) begin         // Both switches on, short circuit
        IQ3_S35_Q17 <= 32768;
        IQ4_S35_Q17 <= 32768;
        UBO_S35_Q17 <= 0;
    end
end

// Modelling phase C bridge inverter
always @(posedge clk_10MHz) begin
    if (S5 === 1 && S6 === 0) begin         // Upper switch on, lower switch off
        IQ5_S35_Q17 <= Ic_S35_Q17;
        IQ6_S35_Q17 <= 0;
        UCO_S35_Q17 <= -Volt_On_Switch56_S35_Q17 + Udc3Over2_S35_Q17;
    end
    if (S5 === 0 && S6 === 1) begin         // Upper switch off, lower switch on
        IQ5_S35_Q17 <= 0;
        IQ6_S35_Q17 <= -Ic_S35_Q17;
        UCO_S35_Q17 <= -Volt_On_Switch56_S35_Q17 - Udc3Over2_S35_Q17;
    end
    if (S5 === 0 && S6 === 0 && Ic_S35_Q17 > 0) begin   // Dead time
        IQ5_S35_Q17 <= 0;
        IQ6_S35_Q17 <= -Ic_S35_Q17;
        UCO_S35_Q17 <= -Udc3Over2_S35_Q17 - Vd_S35_Q17;
    end
    if (S5 === 0 && S6 === 0 && Ic_S35_Q17 < 0) begin
        IQ5_S35_Q17 <= Ic_S35_Q17;
        IQ6_S35_Q17 <= 0;
        UCO_S35_Q17 <= Udc3Over2_S35_Q17 + Vd_S35_Q17;
    end 
    if (S5 === 1 && S6 === 1) begin         // Both switches on, short circuit
        IQ5_S35_Q17 <= 32768;
        IQ6_S35_Q17 <= 32768;
        UCO_S35_Q17 <= 0;
    end
end

// Output assignment
always @(posedge clk_10MHz) begin
    if (!rst_n) begin
        x_1 <= 0;
        x_2 <= 0;
        x_3 <= 0;
        x_4 <= 0;
        x_5 <= 0;
        x_6 <= 0;
        x_7 <= 0;
    end else begin
        x_1 <= UAO_S35_Q17;
        x_2 <= UBO_S35_Q17;
        x_3 <= UCO_S35_Q17;
        x_4 <= {IQ2_S35_Q17[34], IQ2_S35_Q17[24:10]}; 
        x_5 <= {IQ4_S35_Q17[34], IQ4_S35_Q17[24:10]};
        x_6 <= {IQ6_S35_Q17[34], IQ6_S35_Q17[24:10]};
        x_7 <= x_4 + x_5 + x_6;
    end
end

endmodule