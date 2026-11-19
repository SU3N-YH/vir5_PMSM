`timescale 1ns / 1ps
`default_nettype none

// Five-phase complementary, active-high gate commands.
// Each phase reference and gate command is ONE BIT. clk_50MHz MUST be 50 MHz.
// deadtime is an unsigned integer number of clock periods, NOT fixed point:
//     Tdead = deadtime * 20 ns = deadtime / 50000.0 ms.
// deadtime must be synchronous to 50 MHz; use PWM_Deadzn_Config below to
// transfer PCI.STM32toFPGA_Signal_9 from its 180 MHz clock domain.
// At each sampled reference transition, turn the conducting switch off,
// then turn the opposite switch on exactly deadtime clocks later.
// Thus reference rising edges delay high-side turn-on; reference falling
// edges delay low-side turn-on. Both gate-output falling edges are immediate
// at the sampled transition. deadtime=0 permits simultaneous off/on.
// A new reference edge cancels/restarts a pending turn-on. Pulses no longer
// than the dead time are suppressed. Configuration is sampled per edge;
// changing deadtime never shortens a countdown already in progress.
module PWM_Deadzn (
    input  wire        clk_50MHz,
    input  wire        rst_n,
    input  wire [15:0] deadtime,

    // 5-phase reference PWM inputs
    input  wire        A_Ref,
    input  wire        B_Ref,
    input  wire        C_Ref,
    input  wire        D_Ref,
    input  wire        E_Ref,

    // 5-phase complementary gate drive outputs with dead-time
    output wire        A_Hi,
    output wire        A_Lo,
    output wire        B_Hi,
    output wire        B_Lo,
    output wire        C_Hi,
    output wire        C_Lo,
    output wire        D_Hi,
    output wire        D_Lo,
    output wire        E_Hi,
    output wire        E_Lo
);
    // Asynchronous assertion, synchronous release in the gate-clock domain.
    (* ASYNC_REG = "TRUE" *) reg [1:0] reset_release;
    always @(posedge clk_50MHz or negedge rst_n) begin
        if (!rst_n)
            reset_release <= 2'b00;
        else
            reset_release <= {reset_release[0], 1'b1};
    end
    wire reset_50_n = reset_release[1];

    // Five independent controllers, each with one-bit PWM input and outputs.
    PWM_Deadzn_Phase u_phase_a (
        .clk(clk_50MHz), .rst_n(reset_50_n), .deadtime(deadtime),
        .pwm_ref(A_Ref), .gate_hi(A_Hi), .gate_lo(A_Lo));
    PWM_Deadzn_Phase u_phase_b (
        .clk(clk_50MHz), .rst_n(reset_50_n), .deadtime(deadtime),
        .pwm_ref(B_Ref), .gate_hi(B_Hi), .gate_lo(B_Lo));
    PWM_Deadzn_Phase u_phase_c (
        .clk(clk_50MHz), .rst_n(reset_50_n), .deadtime(deadtime),
        .pwm_ref(C_Ref), .gate_hi(C_Hi), .gate_lo(C_Lo));
    PWM_Deadzn_Phase u_phase_d (
        .clk(clk_50MHz), .rst_n(reset_50_n), .deadtime(deadtime),
        .pwm_ref(D_Ref), .gate_hi(D_Hi), .gate_lo(D_Lo));
    PWM_Deadzn_Phase u_phase_e (
        .clk(clk_50MHz), .rst_n(reset_50_n), .deadtime(deadtime),
        .pwm_ref(E_Ref), .gate_hi(E_Hi), .gate_lo(E_Lo));
endmodule

// Single-phase controller. Only the time setting/counter uses 16 bits.
module PWM_Deadzn_Phase (
    input  wire        clk,
    input  wire        rst_n,
    input  wire [15:0] deadtime,
    input  wire        pwm_ref,
    output reg         gate_hi,
    output reg         gate_lo
);
    // Two-stage synchronization adds common sampling latency to both edges;
    // the interval from one gate turning off to its opposite turning on is N*20ns.
    (* ASYNC_REG = "TRUE" *) reg pwm_meta;
    (* ASYNC_REG = "TRUE" *) reg pwm_sync;
    reg [1:0] pwm_valid;
    reg previous_pwm;
    reg started;
    reg [15:0] remaining;
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pwm_meta <= 1'b0;
            pwm_sync <= 1'b0;
            pwm_valid <= 2'b00;
        end else begin
            pwm_meta <= pwm_ref;
            pwm_sync <= pwm_meta;
            pwm_valid <= {pwm_valid[0], 1'b1};
        end
    end
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            previous_pwm <= 1'b0;
            started <= 1'b0;
            remaining <= 16'd0;
            gate_hi <= 1'b0;
            gate_lo <= 1'b0;
        end else if (!pwm_valid[1]) begin
            previous_pwm <= 1'b0;
            started <= 1'b0;
            remaining <= 16'd0;
            gate_hi <= 1'b0;
            gate_lo <= 1'b0;
        end else begin
            previous_pwm <= pwm_sync;
            if (!started || (pwm_sync != previous_pwm)) begin
                started <= 1'b1;
                remaining <= deadtime;
                gate_hi <= (deadtime == 16'd0) && pwm_sync;
                gate_lo <= (deadtime == 16'd0) && !pwm_sync;
            end else if (remaining > 16'd1) begin
                remaining <= remaining - 16'd1;
                gate_hi <= 1'b0;
                gate_lo <= 1'b0;
            end else begin
                // Open on clock N, without an extra load/decrement cycle.
                remaining <= 16'd0;
                gate_hi <= pwm_sync;
                gate_lo <= !pwm_sync;
            end
        end
    end
endmodule

// Bundled-data mailbox: hold the complete bus until the destination has
// sampled it and acknowledged the synchronized request. Individual data-bit
// synchronizers would not guarantee a coherent 16-bit configuration word.
// Rapid writes are coalesced to the latest value; allow 0.5 us after the final
// FMC write for the 180 -> 50 MHz transfer, then the next reference edge uses it.
module PWM_Deadzn_Config (
    input  wire        src_clk,
    input  wire        dst_clk,
    input  wire        rst_n,
    input  wire [15:0] data_src,
    output reg  [15:0] data_dst,
    output reg         valid_dst
);
    reg [15:0] data_hold;
    reg request;
    reg first_sent;
    reg acknowledge;
    (* ASYNC_REG = "TRUE" *) reg ack_meta, ack_sync;
    (* ASYNC_REG = "TRUE" *) reg req_meta, req_sync;
    always @(posedge src_clk or negedge rst_n) begin
        if (!rst_n) begin
            data_hold <= 16'd0;
            request <= 1'b0;
            first_sent <= 1'b0;
            ack_meta <= 1'b0;
            ack_sync <= 1'b0;
        end else begin
            ack_meta <= acknowledge;
            ack_sync <= ack_meta;
            if ((request == ack_sync) && (!first_sent || data_src != data_hold)) begin
                data_hold <= data_src;
                request <= !request;
                first_sent <= 1'b1;
            end
        end
    end
    always @(posedge dst_clk or negedge rst_n) begin
        if (!rst_n) begin
            req_meta <= 1'b0;
            req_sync <= 1'b0;
            acknowledge <= 1'b0;
            data_dst <= 16'd0;
            valid_dst <= 1'b0;
        end else begin
            req_meta <= request;
            req_sync <= req_meta;
            if (req_sync != acknowledge) begin
                data_dst <= data_hold;
                acknowledge <= req_sync;
                valid_dst <= 1'b1;
            end
        end
    end
endmodule

`default_nettype wire
