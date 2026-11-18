`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 		WANG Yilong / Sunito
// 
// Create Date:    19:41:48 10/14/2025 
// Design Name: 
// Module Name:    PCI 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:  D0105T737
//
// Dependencies: 
//
// Revision: 
// Revision 0.03 - STM32 FMC/FSMC asynchronous 16-bit SRAM interface
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
/* STM32 pin -> FMC function -> FPGA net -> FPGA package pin
 * PD7   FMC_NE1      STM32_NE1_Low    E1
 * PD5   FMC_NWE      STM32_NWE_Low    E2
 * PD4   FMC_NOE      STM32_NOE_Low    K5
 * PE0   GPIO output  rst_n            N5   original model reset, active low
 * PF0..PG1 FMC_A0..A11 -> ADDRbus[0..11], FPGA pins H2,H1,G3,G1,F2,F1,K3,J4,J6,H5,H4,H3
 * PD14..PD10/PE7..PE15 FMC_D0..D15 -> DATAbus[0..15], FPGA pins M5,N4,R2,R1,P2,P1,N3,N1,M2,M1,L3,L1,K2,K1,J3,J1
 * No STM32 R/W direction input is required: NWE and NOE qualify each cycle.
 * FPGA clk_ex remains its board clock on E8. Common ground and 3.3 V logic.
 */

module PCI(   	
    // INPUT
    input               sub_clk,            // set to 50MHz		
    input      [11:0]   addrbus,			
    inout      [15:0]   STM32_Databus,
    input               STM32_NWE_Low,
    input               STM32_NOE_Low,
    input               STM32_NE1_Low,
    	
    // STM32 to FPGA DATA (Read by FPGA internal logic)
    output     [15:0]   STM32toFPGA_Signal_1,
    output     [15:0]   STM32toFPGA_Signal_2,
    output     [15:0]   STM32toFPGA_Signal_3,
    output     [15:0]   STM32toFPGA_Signal_4,
    output     [15:0]   STM32toFPGA_Signal_5,
    output     [15:0]   STM32toFPGA_Signal_6,
    output     [15:0]   STM32toFPGA_Signal_7,
    output     [15:0]   STM32toFPGA_Signal_8,
    output     [15:0]   STM32toFPGA_Signal_9,
    output     [15:0]   STM32toFPGA_Signal_10,
    output     [15:0]   STM32toFPGA_Signal_11,
    output     [15:0]   STM32toFPGA_Signal_12,
    output     [15:0]   STM32toFPGA_Signal_13,
    output     [15:0]   STM32toFPGA_Signal_14,
    output     [15:0]   STM32toFPGA_Signal_15,
    output     [15:0]   STM32toFPGA_Signal_16,
	
    // FPGA to STM32 DATA (Written to STM32)
    input      [15:0]   FPGAtoSTM32_Signal_1,
    input      [15:0]   FPGAtoSTM32_Signal_2,
    input      [15:0]   FPGAtoSTM32_Signal_3,
    input      [15:0]   FPGAtoSTM32_Signal_4,
    input      [15:0]   FPGAtoSTM32_Signal_5,
    input      [15:0]   FPGAtoSTM32_Signal_6,
    input      [15:0]   FPGAtoSTM32_Signal_7,
    input      [15:0]   FPGAtoSTM32_Signal_8,
    input      [15:0]   FPGAtoSTM32_Signal_9,
    input      [15:0]   FPGAtoSTM32_Signal_10,
    input      [15:0]   FPGAtoSTM32_Signal_11,
    input      [15:0]   FPGAtoSTM32_Signal_12,
    input      [15:0]   FPGAtoSTM32_Signal_13,
    input      [15:0]   FPGAtoSTM32_Signal_14,
    input      [15:0]   FPGAtoSTM32_Signal_15,
    input      [15:0]   FPGAtoSTM32_Signal_16,
    input      [15:0]   FPGAtoSTM32_Signal_17,
    input      [15:0]   FPGAtoSTM32_Signal_18
); 	  	

// Combinational logic variable for STM32 Read operation
reg [15:0] Data_out_comb;

// Empty memory-mapped test port, independent of every model signal.
// Word address 0xCBA -> STM32 CPU byte address 0x60001974.
// A valid write stores all 16 bits; reads return the last stored word.
// Retains its value across model rst_n; initialized on FPGA configuration.
localparam [11:0] LOOPBACK_ADDR = 12'hcba;
reg [15:0] Loopback_Data = 16'h0000;

// Registers for data written from STM32 to the FPGA model
reg [15:0] Data_1  = 16'h0000;
reg [15:0] Data_2  = 16'h0000;	
reg [15:0] Data_3  = 16'h0000;	
reg [15:0] Data_4  = 16'h0000;	
reg [15:0] Data_5  = 16'h0000;	
reg [15:0] Data_6  = 16'h0000;	
reg [15:0] Data_7  = 16'h0000;	
reg [15:0] Data_8  = 16'h0000;	
reg [15:0] Data_9  = 16'h0000;	
reg [15:0] Data_10 = 16'h0000;	
reg [15:0] Data_11 = 16'h0000;	
reg [15:0] Data_12 = 16'h0000;	
reg [15:0] Data_13 = 16'h0000;	
reg [15:0] Data_14 = 16'h0000;	
reg [15:0] Data_15 = 16'h0000;	
reg [15:0] Data_16 = 16'h0000;	

// Bundled-data crossing: STM32 holds address/data throughout NWE low.
// With the supplied FMC timings NWE is low >= 200 ns and inactive >= 40 ns.
// Wait two synchronizer stages before sampling; do not delay a capture until
// after the physical strobe has ended. No per-bit synchronization of the bus.
wire write_active = !STM32_NE1_Low && !STM32_NWE_Low && STM32_NOE_Low;
(* ASYNC_REG = "TRUE" *) reg write_meta = 1'b0;
(* ASYNC_REG = "TRUE" *) reg write_sync = 1'b0;
reg write_seen = 1'b0;
always @(posedge sub_clk) begin
    write_meta <= write_active;
    write_sync <= write_meta;
    if (!write_sync)
        write_seen <= 1'b0;
    else if (write_active)
        write_seen <= 1'b1;
end	

// Tri-state buffer for the bidirectional STM32 data bus
// High-Z is properly applied here at the pin driver level
assign STM32_Databus = ((!STM32_NOE_Low) && (!STM32_NE1_Low) && STM32_NWE_Low) ? Data_out_comb : 16'hz;

// =======================================================================
// FSMC READ: asynchronous mux; STM32 must supply sufficient read wait states
// =======================================================================
always @(*) begin
    case(addrbus)					
        // [2026-11-10 16:00 CST] Legacy port 1 decode retained below as a comment.
        // 12'h120: Data_out_comb = FPGAtoSTM32_Signal_1;
        // [2026-11-03 16:30 CST] Port 1 read matches STM32 Bank1 address offset 0x000.
        12'h000: Data_out_comb = FPGAtoSTM32_Signal_1;  //left port
        12'h132: Data_out_comb = FPGAtoSTM32_Signal_2;
        12'h162: Data_out_comb = FPGAtoSTM32_Signal_3;
        12'h088: Data_out_comb = FPGAtoSTM32_Signal_4;
        12'h0a2: Data_out_comb = FPGAtoSTM32_Signal_5;
        12'h1b6: Data_out_comb = FPGAtoSTM32_Signal_6;
        12'h0c4: Data_out_comb = FPGAtoSTM32_Signal_7;
        12'h118: Data_out_comb = FPGAtoSTM32_Signal_8;
        12'h128: Data_out_comb = FPGAtoSTM32_Signal_9;
        12'h076: Data_out_comb = FPGAtoSTM32_Signal_10;
        12'h19a: Data_out_comb = FPGAtoSTM32_Signal_11;
        12'h096: Data_out_comb = FPGAtoSTM32_Signal_12;
        12'h018: Data_out_comb = FPGAtoSTM32_Signal_13;
        12'h13c: Data_out_comb = FPGAtoSTM32_Signal_14;
        12'h01c: Data_out_comb = FPGAtoSTM32_Signal_15;
        12'h17e: Data_out_comb = FPGAtoSTM32_Signal_16;
        12'h1aa: Data_out_comb = FPGAtoSTM32_Signal_17;
        12'h1ca: Data_out_comb = FPGAtoSTM32_Signal_18;

        12'hff0: Data_out_comb = 16'hf723; // Interface identifier

        LOOPBACK_ADDR: Data_out_comb = Loopback_Data;
        12'h200: Data_out_comb = Data_1; // Parameter readback
        12'h114: Data_out_comb = Data_2; 
        12'h136: Data_out_comb = Data_3; 
        12'h078: Data_out_comb = Data_4; 
        12'h13a: Data_out_comb = Data_5; 
        12'h17a: Data_out_comb = Data_6; 
        12'h05c: Data_out_comb = Data_7; 
        12'h172: Data_out_comb = Data_8; 
        12'h182: Data_out_comb = Data_9; 
        12'h058: Data_out_comb = Data_10;
        12'h1a8: Data_out_comb = Data_11;
        12'h068: Data_out_comb = Data_12;
        12'h1c3: Data_out_comb = Data_13;
        12'h1d2: Data_out_comb = Data_14;
        12'h0c2: Data_out_comb = Data_15;
        12'h1e6: Data_out_comb = Data_16;

        default: Data_out_comb = 16'h0000; // Internal logic defaults to 0, not High-Z
    endcase
end

// =======================================================================
// FSMC WRITE: one capture per qualified strobe using the 50 MHz clock
// =======================================================================
always @(posedge sub_clk) begin
    if (write_sync && !write_seen && write_active) begin
        case(addrbus) 
            LOOPBACK_ADDR: Loopback_Data <= STM32_Databus;
        // [2026-11-10 16:00 CST] Legacy port 1 decode retained below as a comment.
            // 12'h102: Data_1  <= STM32_Databus;
            // [2026-11-03 16:30 CST] Port 1 write matches STM32 Bank1 address offset 0x200.
            12'h200: Data_1  <= STM32_Databus;
            12'h114: Data_2  <= STM32_Databus;
            12'h136: Data_3  <= STM32_Databus;
            12'h078: Data_4  <= STM32_Databus;
            12'h13a: Data_5  <= STM32_Databus;
            12'h17a: Data_6  <= STM32_Databus;
            12'h05c: Data_7  <= STM32_Databus;
            12'h172: Data_8  <= STM32_Databus;
            12'h182: Data_9  <= STM32_Databus;
            12'h058: Data_10 <= STM32_Databus;
            12'h1a8: Data_11 <= STM32_Databus;
            12'h068: Data_12 <= STM32_Databus;
            // [2026-11-05 03:06 EST] Keep Data_13 separate from Data_9 and match its readback address.
            // 12'h182: Data_13 <= STM32_Databus;
            12'h1c3: Data_13 <= STM32_Databus;
            12'h1d2: Data_14 <= STM32_Databus;
            12'h0c2: Data_15 <= STM32_Databus;
            12'h1e6: Data_16 <= STM32_Databus;
            default: begin
                Loopback_Data <= Loopback_Data;
                Data_1  <= Data_1;
                Data_2  <= Data_2;
                Data_3  <= Data_3;
                Data_4  <= Data_4;
                Data_5  <= Data_5;
                Data_6  <= Data_6;
                Data_7  <= Data_7;
                Data_8  <= Data_8;
                Data_9  <= Data_9;
                Data_10 <= Data_10;
                Data_11 <= Data_11;
                Data_12 <= Data_12;
                Data_13 <= Data_13;
                Data_14 <= Data_14;
                Data_15 <= Data_15;
                Data_16 <= Data_16;
            end
        endcase
    end		
end
// Assign internal registers to output ports
assign STM32toFPGA_Signal_1  = Data_1;							
assign STM32toFPGA_Signal_2  = Data_2;							
assign STM32toFPGA_Signal_3  = Data_3;							
assign STM32toFPGA_Signal_4  = Data_4;							
assign STM32toFPGA_Signal_5  = Data_5;							
assign STM32toFPGA_Signal_6  = Data_6;							
assign STM32toFPGA_Signal_7  = Data_7;							
assign STM32toFPGA_Signal_8  = Data_8;							
assign STM32toFPGA_Signal_9  = Data_9;							
assign STM32toFPGA_Signal_10 = Data_10;						
assign STM32toFPGA_Signal_11 = Data_11;						
assign STM32toFPGA_Signal_12 = Data_12;						
assign STM32toFPGA_Signal_13 = Data_13;						
assign STM32toFPGA_Signal_14 = Data_14;						
assign STM32toFPGA_Signal_15 = Data_15;						
assign STM32toFPGA_Signal_16 = Data_16;						                                                                                                

endmodule
