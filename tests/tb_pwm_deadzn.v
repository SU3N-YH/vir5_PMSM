`timescale 1ns / 1ps
module tb_pwm_deadzn;
    reg clk = 0;
    always #10 clk = ~clk;
    reg rst_n = 0;
    reg [4:0] reference = 0;
    reg [15:0] deadtime = 0;
    wire [4:0] high_gate, low_gate;
    integer errors = 0;
    integer p, k;
    PWM_Deadzn dut(.clk_50MHz(clk), .rst_n(rst_n), .deadtime(deadtime),
        .A_Ref(reference[0]), .B_Ref(reference[1]), .C_Ref(reference[2]),
        .D_Ref(reference[3]), .E_Ref(reference[4]),
        .A_Hi(high_gate[0]), .A_Lo(low_gate[0]),
        .B_Hi(high_gate[1]), .B_Lo(low_gate[1]),
        .C_Hi(high_gate[2]), .C_Lo(low_gate[2]),
        .D_Hi(high_gate[3]), .D_Lo(low_gate[3]),
        .E_Hi(high_gate[4]), .E_Lo(low_gate[4]));

    task tick;
        begin @(posedge clk); #1; end
    endtask
    task expect_gates;
        input [4:0] h, l;
        begin
            if (high_gate !== h || low_gate !== l) begin
                $display("FAIL: gates H=%b L=%b expected H=%b L=%b t=%t",
                         high_gate, low_gate, h, l, $time);
                errors = errors + 1;
            end
        end
    endtask
    // Independently verify the externally visible off-to-on interval,
    // including unchanged phases while one reference changes.
    task transition;
        input [4:0] value;
        input integer count;
        reg [4:0] changed, old_value;
        integer n;
        begin
            old_value = reference;
            changed = old_value ^ value;
            @(negedge clk); deadtime = count; reference = value;
            tick; tick;
            expect_gates(old_value, ~old_value);
            tick;
            if (count == 0) expect_gates(value, ~value);
            else begin
                expect_gates(old_value & ~changed, ~old_value & ~changed);
                for (n = 1; n <= count; n = n + 1) begin
                    tick;
                    if (n < count)
                        expect_gates(old_value & ~changed, ~old_value & ~changed);
                    else expect_gates(value, ~value);
                end
            end
        end
    endtask

    always @(posedge clk) begin
        #2;
        if ((high_gate & low_gate) !== 5'b00000) begin
            $display("FAIL: gate overlap or unknown at %t", $time);
            errors = errors + 1;
        end
    end

    initial begin
        #1; expect_gates(0, 0);
        #40; rst_n = 1;
        repeat (10) tick;
        expect_gates(0, 31);
        transition(31, 0); transition(0, 0);
        transition(31, 1); transition(0, 1);
        transition(31, 2); transition(0, 2);
        transition(31, 50); transition(0, 50);
        transition(31, 65535); transition(0, 65535);
        for (p = 0; p < 5; p = p + 1) begin
            transition(1 << p, 3 + p);
            transition(0, 3 + p);
        end
        // 20-clock deadtime; a five-clock input pulse must never turn on H.
        @(negedge clk); deadtime = 20; reference = 31;
        repeat (3) tick;
        expect_gates(0, 0);
        repeat (4) tick;
        @(negedge clk); reference = 0;
        repeat (3) tick;
        expect_gates(0, 0);
        for (k = 1; k <= 20; k = k + 1) begin
            tick;
            if (k < 20) expect_gates(0, 0);
            else expect_gates(0, 31);
        end
        // Lowering the configuration during a pending delay must not shorten it.
        @(negedge clk); reference = 31;
        repeat (3) tick;
        @(negedge clk); deadtime = 1;
        for (k = 1; k <= 20; k = k + 1) begin
            tick;
            if (k < 20) expect_gates(0, 0);
            else expect_gates(31, 0);
        end
        transition(0, 1);
        // Asynchronous shutdown while conducting, and restart with a HIGH
        // initial reference: no fictitious low-side pulse during synchronization.
        #3; rst_n = 0; #1; expect_gates(0, 0);
        reference = 31; deadtime = 5;
        #27; rst_n = 1;
        repeat (9) begin tick; expect_gates(0, 0); end
        tick; expect_gates(31, 0);
        // Reset during an unfinished countdown clears it too.
        @(negedge clk); reference = 0;
        repeat (4) tick;
        #3; rst_n = 0; #1; expect_gates(0, 0);
        if (errors == 0)
            $display("PASS: five-phase exact 0/1/2/50/65535-cycle deadtime, independent phases, short pulses, config snapshot and reset");
        else $display("FAIL: %0d errors", errors);
        $finish;
    end
    initial begin #10000000; $display("FAIL: timeout"); $finish; end
endmodule
