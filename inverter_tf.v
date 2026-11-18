`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:29:13 01/15/2026
// Design Name:   inv_phi3_HB
// Module Name:   Z:/share/YS27savedrecovery/test2/inverter_tf.v
// Project Name:  LCL
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: inv_phi3_HB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
// module inverter_tf;

// 	// Inputs
// 	reg clk_180MHz;
// 	reg S1;
// 	reg S2;
// 	reg S3;
// 	reg S4;
// 	reg S5;
// 	reg S6;
// 	reg [17:0] Ia_S18_Q9;
// 	reg [17:0] Ib_S18_Q9;
// 	reg [17:0] Ic_S18_Q9;
// 	reg [15:0] Udc1P_S16_Q5;
// 	reg [15:0] Udc2P_S16_Q5;
// 	reg [15:0] Udc3P_S16_Q5;
// 	reg [15:0] Udc1N_S16_Q5;
// 	reg [15:0] Udc2N_S16_Q5;
// 	reg [15:0] Udc3N_S16_Q5;
// 	reg [15:0] Rd_S16_Q15;
// 	reg [15:0] Vd_S16_Q15;
// 	reg rst_n;

// 	// Outputs
// 	wire [34:0] x_1;
// 	wire [34:0] x_2;
// 	wire [34:0] x_3;
// 	wire [17:0] x_4;
// 	wire [17:0] x_5;
// 	wire [17:0] x_6;
// 	wire [17:0] x_7;

// 	// Instantiate the Unit Under Test (UUT)
// 	inv_phi3_HB uut (
// 		.clk_180MHz(clk_180MHz), 
// 		.S1(S1), 
// 		.S2(S2), 
// 		.S3(S3), 
// 		.S4(S4), 
// 		.S5(S5), 
// 		.S6(S6), 
// 		.Ia_S18_Q9(Ia_S18_Q9), 
// 		.Ib_S18_Q9(Ib_S18_Q9), 
// 		.Ic_S18_Q9(Ic_S18_Q9), 
// 		.Udc1P_S16_Q5(Udc1P_S16_Q5), 
// 		.Udc2P_S16_Q5(Udc2P_S16_Q5), 
// 		.Udc3P_S16_Q5(Udc3P_S16_Q5), 
// 		.Udc1N_S16_Q5(Udc1N_S16_Q5), 
// 		.Udc2N_S16_Q5(Udc2N_S16_Q5), 
// 		.Udc3N_S16_Q5(Udc3N_S16_Q5), 
// 		.Rd_S16_Q15(Rd_S16_Q15), 
// 		.Vd_S16_Q15(Vd_S16_Q15), 
// 		.rst_n(rst_n), 
// 		.x_1(x_1), 
// 		.x_2(x_2), 
// 		.x_3(x_3), 
// 		.x_4(x_4), 
// 		.x_5(x_5), 
// 		.x_6(x_6), 
// 		.x_7(x_7)
// 	);

// 	initial begin
// 		// Initialize Inputs
// 		clk_180MHz = 0;
// 		S1 = 0;
// 		S2 = 0;
// 		S3 = 0;
// 		S4 = 0;
// 		S5 = 0;
// 		S6 = 0;
// 		Ia_S18_Q9 = 0;
// 		Ib_S18_Q9 = 0;
// 		Ic_S18_Q9 = 0;
// 		Udc1P_S16_Q5 = 0;
// 		Udc2P_S16_Q5 = 0;
// 		Udc3P_S16_Q5 = 0;
// 		Udc1N_S16_Q5 = 0;
// 		Udc2N_S16_Q5 = 0;
// 		Udc3N_S16_Q5 = 0;
// 		Rd_S16_Q15 = 0;
// 		Vd_S16_Q15 = 0;
// 		rst_n = 0;

// 		// Wait 100 ns for global reset to finish
// 		#100;
// 		//S1 = 0;
// 		//S2 = 0;
// 		S3 = 0;
// 		S4 = 0;
// 		S5 = 0;
// 		S6 = 0;
// 		Ia_S18_Q9 = 0;
// 		Ib_S18_Q9 = 0;
// 		Ic_S18_Q9 = 0;
// 		Udc1P_S16_Q5 = 135;
// 		Udc2P_S16_Q5 = 135;
// 		Udc3P_S16_Q5 = 135;
// 		Udc1N_S16_Q5 = -135;
// 		Udc2N_S16_Q5 = -135;
// 		Udc3N_S16_Q5 = -135;
// 		Rd_S16_Q15 = 666;
// 		Vd_S16_Q15 = 888;
// 		rst_n = 1;  
// 		 end
// 		// Add stimulus here
// 		always #2.67 clk_180MHz = ~clk_180MHz;
// 		always #25 begin S1=~S1;
// 		S2=~S1;
// 		end
// 	initial begin
//     #100000; // ��������100us��ֹͣ
//     $stop;   // ֹͣ���棨$finish��ֱ���˳�������̣�
// 	end
      
// endmodule

module inverter_tf;

    // Inputs
    reg clk_180MHz;
    reg S1, S2, S3, S4, S5, S6;
    reg signed [34:0] Ia_S35_Q17;
    reg signed [34:0] Ib_S35_Q17;
    reg signed [34:0] Ic_S35_Q17;
    reg signed [15:0] Udc1P_S16_Q5;
    reg signed [15:0] Udc2P_S16_Q5;
    reg signed [15:0] Udc3P_S16_Q5;
    reg signed [15:0] Udc1N_S16_Q5;
    reg signed [15:0] Udc2N_S16_Q5;
    reg signed [15:0] Udc3N_S16_Q5;
    reg signed [15:0] Rd_S16_Q15;
    reg signed [15:0] Vd_S16_Q15;
    reg rst_n;

    // Outputs
    wire signed [34:0] x_1;
    wire signed [34:0] x_2;
    wire signed [34:0] x_3;
    wire signed [15:0] x_4;
    wire signed [15:0] x_5;
    wire signed [15:0] x_6;
    wire signed [15:0] x_7;

    // Instantiate the Unit Under Test (UUT)
    inv_phi3_HB uut (
        .clk_180MHz(clk_180MHz), 
        .S1(S1), .S2(S2), .S3(S3), 
        .S4(S4), .S5(S5), .S6(S6), 
        .Ia_S35_Q17(Ia_S35_Q17), 
        .Ib_S35_Q17(Ib_S35_Q17), 
        .Ic_S35_Q17(Ic_S35_Q17), 
        .Udc1P_S16_Q5(Udc1P_S16_Q5), 
        .Udc2P_S16_Q5(Udc2P_S16_Q5), 
        .Udc3P_S16_Q5(Udc3P_S16_Q5), 
        .Udc1N_S16_Q5(Udc1N_S16_Q5), 
        .Udc2N_S16_Q5(Udc2N_S16_Q5), 
        .Udc3N_S16_Q5(Udc3N_S16_Q5), 
        .Rd_S16_Q15(Rd_S16_Q15), 
        .Vd_S16_Q15(Vd_S16_Q15), 
        .rst_n(rst_n), 
        .x_1(x_1), .x_2(x_2), .x_3(x_3), 
        .x_4(x_4), .x_5(x_5), .x_6(x_6), .x_7(x_7)
    );

    // Clock generation (180 MHz = 5.55 ns period, 2.775 ns half-period)
    always #2.775 clk_180MHz = ~clk_180MHz;

    initial begin
        // Initialize Inputs
        clk_180MHz = 0;
        S1 = 0; S2 = 0; S3 = 0; S4 = 0; S5 = 0; S6 = 0;
        Ia_S35_Q17 = 0; Ib_S35_Q17 = 0; Ic_S35_Q17 = 0;
        
        // Define Test Voltages 
        // UdcP = 160 (Q5) -> 5.0, UdcN = -160 (Q5) -> -5.0
        // Udc1Over2 = (160 << 11) - (-160 << 11) = 327680 + 327680 = 655360 (Q17)
        Udc1P_S16_Q5 = 160; Udc2P_S16_Q5 = 160; Udc3P_S16_Q5 = 160;
        Udc1N_S16_Q5 = -160; Udc2N_S16_Q5 = -160; Udc3N_S16_Q5 = -160;
        
        // Rd is ignored in this TB since multiplier is commented out in source code.
        Rd_S16_Q15 = 0;
        
        // Vd = 16384 (Q15) -> 0.5
        // Vd_S35_Q17 = 16384 << 2 = 65536 (Q17)
        Vd_S16_Q15 = 16384; 
        rst_n = 0;

        // Reset phase
        #100;
        rst_n = 1;  
        
        // ----------------------------------------------------------------
        // TEST CASE 1: S1=1, S2=0 (Upper switch ON, Lower switch OFF)
        // Theoretical x_1 (UAO) = Udc1Over2 = 655360
        // ----------------------------------------------------------------
        #100;
        S1 = 1; S2 = 0; 
        S3 = 1; S4 = 0; 
        S5 = 1; S6 = 0;
        Ia_S35_Q17 = 131072; // 1.0 A in Q17
        
        // ----------------------------------------------------------------
        // TEST CASE 2: S1=0, S2=1 (Upper switch OFF, Lower switch ON)
        // Theoretical x_1 (UAO) = -Udc1Over2 = -655360
        // ----------------------------------------------------------------
        #50000; // wait 50us
        S1 = 0; S2 = 1;
        S3 = 0; S4 = 1;
        S5 = 0; S6 = 1;
        Ia_S35_Q17 = 131072; 

        // ----------------------------------------------------------------
        // TEST CASE 3: S1=0, S2=0, Ia > 0 (Dead time, Positive Current)
        // Theoretical x_1 (UAO) = -Udc1Over2 - Vd_S35_Q17 
        //                       = -655360 - 65536 = -720896
        // ----------------------------------------------------------------
        #50000;
        S1 = 0; S2 = 0;
        S3 = 0; S4 = 0;
        S5 = 0; S6 = 0;
        Ia_S35_Q17 = 131072; 

        // ----------------------------------------------------------------
        // TEST CASE 4: S1=0, S2=0, Ia < 0 (Dead time, Negative Current)
        // Theoretical x_1 (UAO) = Udc1Over2 + Vd_S35_Q17 
        //                       = 655360 + 65536 = 720896
        // ----------------------------------------------------------------
        #50000;
        S1 = 0; S2 = 0;
        Ia_S35_Q17 = -131072; // -1.0 A in Q17
        
        // ----------------------------------------------------------------
        // TEST CASE 5: High frequency dynamic PWM simulation
        // ----------------------------------------------------------------
        #50000;
        repeat(10) begin
            #5000 S1 = 1; S2 = 0; Ia_S35_Q17 = 65536;
            #200  S1 = 0; S2 = 0; Ia_S35_Q17 = 65536; // Dead time
            #5000 S1 = 0; S2 = 1; Ia_S35_Q17 = -65536;
            #200  S1 = 0; S2 = 0; Ia_S35_Q17 = -65536; // Dead time
        end

    end
    
    // Stop simulation at 500us
    initial begin
        #500000; 
        $display("Simulation Complete.");
        $stop;   
    end
      
endmodule

