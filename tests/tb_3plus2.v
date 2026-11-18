`timescale 1ns / 1ps
// [2026-11-10 15:58 CST] Structural-IP regression for the verified 3+2 current modules.
module tb_3plus2;
    reg clk=0;
    always #2.777778 clk=~clk;
    reg rst_n=0;
    reg signed [34:0] vd=-35'sd262144, ve=35'sd327680;
    reg signed [34:0] vn=0, ed=0, ee=0;
    reg [15:0] resistance=0;
    wire signed [34:0] ia,ib,ic,id,ie,ref_d,ref_e;
    reg signed [34:0] sa,sb,sc,sd,se;
    integer errors=0, i, j;
    Inductor abc (
        .clk_180MHz(clk),.rst_n(rst_n),
        .UAO_P_S35(35'sd65536),.UBO_P_S35(-35'sd131072),.UCO_P_S35(35'sd196608),
        .UAO_N_S35(35'd0),.UBO_N_S35(35'd0),.UCO_N_S35(35'd0),
        .bEMF_A_S35_Q17(35'd0),.bEMF_B_S35_Q17(35'd0),.bEMF_C_S35_Q17(35'd0),
        .I_OV_20LinuH_Q18(16'd256),.Res_S16_Q12(16'd0),
        .x_1(ia),.x_2(ib),.x_3(ic)
    );
    Inductor_DE de (
        .clk_180MHz(clk),.rst_n(rst_n),
        .UDO_P_S35(vd),.UEO_P_S35(ve),.UDO_N_S35(vn),.UEO_N_S35(vn),
        .bEMF_D_S35_Q17(ed),.bEMF_E_S35_Q17(ee),
        .I_OV_20LinuH_Q18(16'd256),.Res_S16_Q12(resistance),.x_4(id),.x_5(ie)
    );
    // The unchanged third phase is deliberately driven independently in the reference.
    Inductor reference_de (
        .clk_180MHz(clk),.rst_n(rst_n),
        .UAO_P_S35(vd),.UBO_P_S35(ve),.UCO_P_S35(35'sd7654321),
        .UAO_N_S35(vn),.UBO_N_S35(vn),.UCO_N_S35(-35'sd1234567),
        .bEMF_A_S35_Q17(ed),.bEMF_B_S35_Q17(ee),.bEMF_C_S35_Q17(35'sd456789),
        .I_OV_20LinuH_Q18(16'd256),.Res_S16_Q12(resistance),.x_1(ref_d),.x_2(ref_e)
    );
    // Exercise both real generated two-stage multiplier netlists with identical vectors.
    reg signed [17:0] ma=0;
    reg signed [34:0] mb=0;
    wire signed [52:0] pa,pd;
    reg signed [52:0] expected, previous;
    mul18x35_1225_BySunY ip_abc(.clk(clk),.a(ma),.b(mb),.p(pa));
    mul_inductor_2 ip_de(.clk(clk),.a(ma),.b(mb),.p(pd));

    reg [11:0] addr=0;
    reg cs=1,we_n=1,oe_n=1,drive=0;
    reg [15:0] tx=0;
    wire [15:0] bus;
    reg p4a=1,p4b=0,p5a=0,p5b=1;
    assign bus=drive ? tx : 16'hzzzz;
    vir5_PMSM dut (
        .STM32_NE1_Low(cs),.STM32_NWE_Low(we_n),.STM32_NOE_Low(oe_n),
        .clk_ex(clk),.DATAbus(bus),.ADDRbus(addr),
        .epwm_1A(1'b1),.epwm_1B(1'b0),.epwm_2A(1'b0),.epwm_2B(1'b1),
        .epwm_3A(1'b1),.epwm_3B(1'b0),
        .epwm_4A(p4a),.epwm_4B(p4b),.epwm_5A(p5a),.epwm_5B(p5b),
        // [2026-11-10 16:39 CST] Unused epwm_7A top-level input is disabled.
        // .epwm_7A(1'b0),
        .rst_n(rst_n),.GPIO61(1'b0),.epwm_8A(1'b1),
        .ePWM_ua_Grid(),.ePWM_ub_Grid()
    );
    task write_word;
        input [11:0] address;
        input [15:0] value;
        begin
            @(negedge clk); addr=address;tx=value;drive=1;cs=0;we_n=0;
            repeat(40) @(negedge clk);
            we_n=1;cs=1;drive=0;
            repeat(10) @(negedge clk);
        end
    endtask
    task read_word;
        input [11:0] address;
        input [15:0] value;
        begin
            addr=address;cs=0;oe_n=0; #1;
            if(bus !== value) begin
                $display("FAIL: read %h got %h expected %h",address,bus,value);errors=errors+1;
            end
            cs=1;oe_n=1;#1;
            if(bus !== 16'hzzzz) begin $display("FAIL: bus not released");errors=errors+1;end
        end
    endtask
    task check_pci;
        begin
            @(negedge clk); read_word(12'h000,dut.FMC_test1);
            @(negedge clk); read_word(12'h132,dut.FMC_test2);
            @(negedge clk); read_word(12'h162,dut.FMC_test3);
            @(negedge clk); read_word(12'h088,dut.FMC_test4);
            @(negedge clk); read_word(12'h0a2,dut.FMC_test5);
            @(negedge clk); read_word(12'h1b6,16'd5);
            @(negedge clk); read_word(12'h0c4,16'd6);
            @(negedge clk); read_word(12'h118,16'd7);
            @(negedge clk); read_word(12'h128,16'd8);
            @(negedge clk); read_word(12'h076,16'd9);
            @(negedge clk); read_word(12'h19a,16'd10);
            @(negedge clk); read_word(12'h096,16'd11);
            @(negedge clk); read_word(12'h018,16'd12);
            @(negedge clk); read_word(12'h13c,16'd13);
            @(negedge clk); read_word(12'h01c,16'd14);
            @(negedge clk); read_word(12'h17e,16'd15);
            @(negedge clk); read_word(12'h1aa,16'd16);
            @(negedge clk); read_word(12'h1ca,16'd17);
        end
    endtask
    initial begin
        // Isolate the board PLL only; model and PCI signals run through actual RTL.
        force dut.clk_180mhz=clk;
        #300;
        for(i=0;i<140;i=i+1) begin
            @(negedge clk);
            case(i)
                0:begin ma=0;mb=0;end
                1:begin ma=18'sh20000;mb=35'sh400000000;end
                2:begin ma=18'sh1ffff;mb=35'sh3ffffffff;end
                default:begin ma=$random;mb={$random,$random};end
            endcase
            expected=ma*mb;
            @(posedge clk);#1;
            if(i>0 && (pa!==previous || pd!==previous)) begin
                $display("FAIL: multiplier vector %0d",i);errors=errors+1;
            end
            previous=expected;
        end
        $display("Checked 139 signed multiplier vectors against both generated IPs");
        @(negedge clk);rst_n=1;
        repeat(18*20) @(posedge clk);#1;
        sa=ia;sb=ib;sc=ic;sd=id;se=ie;
        repeat(18*10) @(posedge clk);#1;
        if(ia-sa!==35'sd327680 || ib-sb!==-35'sd655360 || ic-sc!==35'sd983040 ||
           id-sd!==-35'sd1310720 || ie-se!==35'sd1638400) begin
            $display("FAIL: five-phase slopes A=%d B=%d C=%d D=%d E=%d",ia-sa,ib-sb,ic-sc,id-sd,ie-se);errors=errors+1;
        end
        for(i=0;i<100;i=i+1) begin
            @(negedge clk);
            vd=$signed($random)%2000000;ve=$signed($random)%2000000;
            vn=$signed($random)%100000;ed=$signed($random)%200000;ee=$signed($random)%200000;
            resistance=i%4096;
            for(j=0;j<36;j=j+1) begin
                @(posedge clk);#1;
                if(id!==ref_d || ie!==ref_e || (^id)===1'bx || (^ie)===1'bx) begin
                    $display("FAIL: D/E differs from verified three-phase reference at %0d/%0d",i,j);errors=errors+1;
                end
            end
        end
        $display("Checked 3600 D/E comparisons with nonzero R, neutral, EMF and independent third phase");
        write_word(12'h200,16'd640); // Udc input, Q5.
        write_word(12'h114,16'd256); // R input, Q12.
        write_word(12'h136,16'd256); // Inverse inductance input.
        write_word(12'h078,16'd1234);
        write_word(12'h13a,16'd1024); // Diode drop input, Q15.
        #3000;
        if(dut.dc_voltage_q5!==16'd640 || dut.resistance_q12!==16'd256 || dut.inv_inductance_q18!==16'd256) begin
            $display("FAIL: STM32 parameter fanout");errors=errors+1;
        end
        if($signed(dut.phase_d_voltage_q17)<=0 || $signed(dut.phase_e_voltage_q17)>=0 ||
           (^dut.phase_d_current)===1'bx || (^dut.phase_e_current)===1'bx ||
           dut.phase_d_current===35'd0 || dut.phase_e_current===35'd0) begin
            $display("FAIL: live D/E bridge-current loop");errors=errors+1;
        end
        check_pci;
        // [2026-11-10 16:00 CST] Verify signed Q25-to-Q17 feedback at the bridge boundary.
        // Cast both operands: an unsigned comparison context would change the reference shift.
        if($signed(dut.phase_d_current_q17) !== ($signed(dut.phase_d_current) >>> 8) ||
           $signed(dut.phase_e_current_q17) !== ($signed(dut.phase_e_current) >>> 8)) begin
            $display("FAIL: bridge current fixed-point conversion");errors=errors+1;
        end
        p4a=0;p4b=1;p5a=1;p5b=0;#1000;
        if($signed(dut.phase_d_voltage_q17)>=0 || $signed(dut.phase_e_voltage_q17)<=0) begin
            $display("FAIL: PWM reversal");errors=errors+1;
        end
        // Controlled current signs exercise the existing diode/dead-time branches.
        force dut.phase_d_current=35'sd131072;
        force dut.phase_e_current=-35'sd131072;
        #1;
        if(dut.phase_d_current_q17!==35'sd512 || dut.phase_e_current_q17!==-35'sd512) begin
            $display("FAIL: signed bridge feedback conversion");errors=errors+1;
        end
        p4a=0;p4b=0;p5a=0;p5b=0;#500;
        if(dut.phase_d_voltage_q17!==-35'sd2625536 || dut.phase_e_voltage_q17!==35'sd2625536) begin
            $display("FAIL: D/E dead-time current sign feedback");errors=errors+1;
        end
        release dut.phase_d_current;release dut.phase_e_current;
        rst_n=0;repeat(18*4) @(posedge clk);#1;
        if(ia!==0 || ib!==0 || ic!==0 || id!==0 || ie!==0) begin
            $display("FAIL: reset");errors=errors+1;
        end
        if(errors==0) $display("PASS: 3+2 equivalence, multiplier latency, slopes, PWM, dead time, reset and STM32 integration");
        else $display("FAIL: %0d errors",errors);
        $finish;
    end
    initial begin #100000;$display("FAIL: timeout");$finish;end
endmodule
