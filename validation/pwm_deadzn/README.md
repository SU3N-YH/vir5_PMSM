# 五相 PWM 互补输出与死区

`PWM_Deadzn.v` 中 `A_Ref`、`B_Ref`、`C_Ref`、`D_Ref`、`E_Ref` 均为独立的一位开关输入。
每相输出两路独立的一位、高电平有效信号，例如 `A_Hi` 和 `A_Lo`。

顶层 `vir5_PMSM.v` 接线：

| 原输入 | 参考输入 | 输出 | 逆变器输入 |
| --- | --- | --- | --- |
| epwm_1A | A_Ref | A_Hi / A_Lo | u_inverter S1 / S2 |
| epwm_2A | B_Ref | B_Hi / B_Lo | u_inverter S3 / S4 |
| epwm_3A | C_Ref | C_Hi / C_Lo | u_inverter S5 / S6 |
| epwm_4A | D_Ref | D_Hi / D_Lo | u_inverter_de S1 / S2 |
| epwm_5A | E_Ref | E_Hi / E_Lo | u_inverter_de S3 / S4 |

原 epwm_1B～epwm_5B 不再参与逆变器控制。输出在顶层内部接入模型。

## STM32 设置

使用已有写参数 **port 9**，`STM32toFPGA_Signal_9`。
FPGA 字地址为 `0x182`，STM32 的 16 位 FMC 字节地址为
`0x60000000 + (0x182 << 1) = 0x60000304`。
现有 STM32 程序已经在 `FSMC_Write()` 中写这个参数，无需改变地址。

```c
FSMC_WriteData.port9 = 50U;  // 50 * 20 ns = 1 us = 0.001 ms
FSMC_Write();               // 将设置写入 FPGA
```

五相共用 16 位无符号整数 N，非定点格式。
50 MHz 时钟的周期为 20 ns，所以 **死区时间 = N × 0.00002 ms**。

| N（十进制） | 死区时间 |
| --- | --- |
| 0 | 0 ms |
| 1 | 0.00002 ms（20 ns） |
| 50 | 0.001 ms（1 us） |
| 100 | 0.002 ms（2 us） |
| 500 | 0.01 ms（10 us） |
| 50000 | 1 ms |
| 65535 | 1.3107 ms |

默认上电为 0；需要非零死区时，先写 port 9，再运行相应 PWM。
现有 `FSMC_WriteData.port9` 的初值也是 0。

`PCI` 仍运行在原 180 MHz 域；同文件的 `PWM_Deadzn_Config` 通过保持数据和请求/应答握手，
将完整 16 位参数传到 50 MHz 域。连续写入时最终跟随最新值，最后一次 FMC 写入后留出
0.5 us 供参数传输。每相在参考信号翻转时锁存当前参数，修改设置不影响已经开始的倒计时。
模型复位时关断所有输出，配置恢复到 50 MHz 域后再启动。

## 边沿行为

- 参考信号上升：在同步采样到该边沿时关下管，经过 N 个周期开上管。
- 参考信号下降：在同步采样到该边沿时关上管，经过 N 个周期开下管。
- 延迟的是开通；关断不会额外延迟 N 个周期。死区中两管都关断。
- 参考输入通过两级同步器，另有控制寄存器采样延迟。N × 20 ns 表示两管关断到开通的间隔，
  原始外部参考边沿到输出还包含同步采样延迟。
- 不长于死区的输入脉冲被抑制；新的参考翻转取消并重启未完成的开通等待。
- N=0 表示不插入死区，输出仍有同步采样延迟。低有效复位异步关断所有输出。

## 验证与构建

```powershell
.\tools\run_pwm_deadzn_sim.ps1
.\tools\build_pwm_deadzn.ps1
# 可选：整机实现，要求原有 180 MHz 运算路径也通过时序
.\tools\build_pwm_deadzn.ps1 -FullTop
```

模块仿真检查 0/1/2/50/65535 个周期、逐相切换、短脉冲、运行中修改参数及复位。
顶层仿真使用真实 20 MHz 输入和 PLL 的 50 MHz 输出，检查 port 9 FMC 读写、
1 us 双向死区及十路输出到逆变器的连线。
默认构建单独检查 PWM_Deadzn 的 50 MHz 布局布线时序，输出在 `module_build/`。
整机实现输出在 `build/`，通过全部时序后才生成 bitstream；不覆盖根目录既有 bitstream。

顶层编译所需的小修复：恢复 `Volt_N_calc.v` 中被注释但顶层一直使用的
`U_N_STM32` 输出声明；原有饱和转换逻辑保持原样。

本次验证结果（2026-11-19）：模块仿真、真实 PLL 顶层仿真和原完整模型回归均通过；
PWM 模块独立布局布线在 50 MHz 约束下时序错误为 0。
完整顶层 XST 综合错误为 0，新增握手通道的约束已被 NGDBUILD/MAP 接受。
整机试实现的中间报告出现原反电势 CORDIC 的 180 MHz 超限路径；完整 PAR 未完成，
未生成新的整机 bitstream，不能将独立 PWM 时序通过等同于整机时序通过。
