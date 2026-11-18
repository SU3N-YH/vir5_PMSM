`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: WANG Yilong
// 
// Create Date:    16:16:07 10/30/2025 
// Design Name: 
// Module Name:    PWM_DT 
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
module PWM_DT (
    input wire clk,           // 系统时钟
    input wire rst_n,         // 异步复位，低电平有效
    input wire pwm_in,        // 输入PWM信号
    input wire [15:0] deadtime, // 死区时间配置（以时钟周期为单位）
    output wire pwm_out_h,    // 高侧PWM输出
    output wire pwm_out_l     // 低侧PWM输出
);

    // 内部寄存器
    reg [15:0] counter_h;     // 高侧死区计数器
    reg [15:0] counter_l;     // 低侧死区计数器
    reg pwm_in_dly;           // 输入PWM延迟寄存器
    reg pwm_h_reg;            // 高侧PWM寄存器
    reg pwm_l_reg;            // 低侧PWM寄存器
    
    // 检测输入PWM的上升沿和下降沿
    wire pwm_rising_edge = pwm_in & ~pwm_in_dly;
    wire pwm_falling_edge = ~pwm_in & pwm_in_dly;
    
    // 输入PWM延迟
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            pwm_in_dly <= 1'b0;
        end else begin
            pwm_in_dly <= pwm_in;
        end
    end
    
    // 高侧PWM死区控制
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_h <= 16'b0;
            pwm_h_reg <= 1'b0;
        end else begin
            if (pwm_rising_edge) begin
                // 检测到上升沿，开始高侧死区延时
                counter_h <= deadtime;
                pwm_h_reg <= 1'b0;
            end else if (counter_h != 16'b0) begin
                // 死区计数
                counter_h <= counter_h - 1'b1;
                pwm_h_reg <= 1'b0;
            end else if (pwm_falling_edge) begin
                // 检测到下降沿，立即关闭高侧
                pwm_h_reg <= 1'b0;
            end else begin
                // 无死区延时，跟随输入（但确保互补）
                pwm_h_reg <= pwm_in & ~pwm_l_reg;
            end
        end
    end
    
    // 低侧PWM死区控制
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter_l <= 16'b0;
            pwm_l_reg <= 1'b0;
        end else begin
            if (pwm_falling_edge) begin
                // 检测到下降沿，开始低侧死区延时
                counter_l <= deadtime;
                pwm_l_reg <= 1'b0;
            end else if (counter_l != 16'b0) begin
                // 死区计数
                counter_l <= counter_l - 1'b1;
                pwm_l_reg <= 1'b0;
            end else if (pwm_rising_edge) begin
                // 检测到上升沿，立即关闭低侧
                pwm_l_reg <= 1'b0;
            end else begin
                // 无死区延时，跟随输入的反相（但确保互补）
                pwm_l_reg <= ~pwm_in & ~pwm_h_reg;
            end
        end
    end
    
    // 输出分配
    assign pwm_out_h = pwm_h_reg;
    assign pwm_out_l = pwm_l_reg;

endmodule
