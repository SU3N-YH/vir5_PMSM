# Verilog 顶层与五相电感模型接入说明

2026-11-13 工程登记更新：`Inductor_DE` 的 `mul_inductor_2` 与 `add5ov5` 的
`division5` 已改为由主工程直接登记 `.xco`，并保留对应的 CoreGen `.xise` 关联，
与 `Inductor` 的乘法器登记方式一致。主工程不再单独登记这两个核心的 `.v` / `.ngc`；
磁盘上的生成模型及网表保留供编译使用。下文较早的 HDL/NGC 登记记录为历史方案。

工程入口为 `vir5_PMSM.xise`，综合顶层为 `vir5_PMSM.v` 中的 `vir5_PMSM`，
器件为 Spartan-6 `xc6slx25-2-ftg256`。原 `main.sch` 保留作历史参照，不再参与综合。

## 当前接入范围

顶层最初由三相 `main.sch` 迁移；本次按更新后的 `Inductor.v` 接入五相电流模型。
该模型文件本身未作修改。

- A/B/C 相仍使用原逆变器输出，D/E 相新增 `epwm_4A`、`epwm_4B`、
  `epwm_5A`、`epwm_5B` 四路外部 PWM 输入。
- `u_inverter_de` 复用 `inv_phi3_HB` 的前两个桥臂生成 D/E 相电压。
  第三桥臂不使用，综合会裁剪其无用逻辑。
- `u_inductor` 接入新增的 D/E 相正、负端电压及五相电流输出。
  五相负端暂共用现有 `neutral_voltage_q17`。
- 删除新版模型已不存在的 `bEMF_A_S35_Q17`、`bEMF_B_S35_Q17`、
  `bEMF_C_S35_Q17` 实例端口；未额外添加反电势补偿运算。
- 35 位电压/电流信号均留在 FPGA 内部，通过原 STM32 总线新增电流读回。
- `main.ucf` 的原有引脚约束保留。四路新 PWM 输入设置为 `LVCMOS33`，
  **尚未分配 LOC，需按板卡接线补齐后再上板**。

本次没有扩展原三相 Clarke、Park、反电势、互感反电势及中性点计算。
它们仍使用 A/B/C 三相，尤其当前中性点仍是三相模型，不能据此认定整机物理模型
已经完成五相化。后续扩展应同时更新这些模块。

## 乘法器 IP

两个核心均使用 ISE 14.7 Core Generator `mult_gen v11.2` 实际生成，
目标器件为 `xc6slx25-2-ftg256`，配置为有符号 `18 × 35 → 53` 位、两级流水线、
STM32 硬件乘法器，无 CE 和同步清零端口。

| 核心 | 本次处理 |
| --- | --- |
| `mul18x35_1225_BySunY` | 原配置实际为一级流水线，重新生成为两级，与新版模型的采样时序匹配 |
| `mul_inductor_2` | 补齐第二个电流增量乘法器 |

`ipcore_dir/` 中包含 `.xco` 配置、`.ngc` 实现网表、结构仿真 `.v` 及实例模板等文件。
新核心已加入 `vir5_PMSM.xise` 和 `vir5_PMSM.prj`。
原 RxI 核文件备份在 `validation/inductor_update/original_ip/`。

## 保留的原理图缺失连接

按之前确认的范围，未补回 `Te_calc`、`Mechanical` 或转速转换模块。
`electrical_position_undriven` 仍无驱动；BackEMF 转速输入、PCI 的第 14/17 路
读回输入及未用的第三路 PWM 透传输入仍悬空。XST 会将这些未驱动输入接地并可能
裁剪相关逻辑；综合通过不表示电机闭环功能已具备。

## 验证结果（2026-10-30）

- `python tools/check_topology.py`：22 个顶层端口、14 个模块实例、208 个实例端口
  检查通过。验证原理图基线及本次明确新增的连接、实际 RTL 端口/位宽、UCF 引用、
  工程入口和两个 IP 的流水线配置。
- ISE 14.7 XST：**0 个错误，1371 个警告**。警告包含保留的缺失驱动、
  未使用端口、原子模块截断和综合优化等。日志为
  `validation/inductor_update/vir5_PMSM.syr`。
- NGDBUILD：**0 个错误、0 个警告**。已实际加载两个电感乘法器 `.ngc`，
  核心链接及 UCF 约束关联通过。日志为 `validation/inductor_update/vir5_PMSM.bld`。
- ISim 使用生成的真实结构 IP 模型完成仿真：两个乘法器各通过 139 组
  有符号、边界及随机输入的两级延迟检查；五相独立电流斜率、符号和 18 拍更新周期
  通过；D/E PWM 极性切换、四个新增 STM32 读地址及总线高阻释放均通过。
  仿真日志为 `validation/inductor_update/sim/test.log`。

仿真可通过 `powershell -File tools/run_inductor_sim.ps1` 重跑。
默认使用 `XILINX` 环境变量，未设置时使用本机 ISE 路径；可通过 `-IseRoot` 指定。
测试台在 `tests/tb_inductor_update.v`。部分顶层测试使用 force 隔离尚未完成的
模型模块，验证的是本次接口接入，并非完整电机系统验证。

本次未生成新的下载文件，也未完成布局布线、实现后时序或板上验证。


## 2026-11-02：修复 ISE 综合无法识别 mul_inductor_2

故障现象为 `HDLCompiler:1654`，在 `Inductor.v` 第 107 行无法识别
`mul_inductor_2`。生成的 `.v` 和 `.ngc` 均存在，但工程仅以 `.xco`
方式引用；ISE 自动生成的 `vir5_PMSM.prj` 中遗漏该核心。

将 `.xco` 和显式 HDL 同时加入时，ISE 会报告重复模块，并仍可能优先选中
没有进入综合清单的 `.xco` 定义。因此当前主工程改为直接登记
`ipcore_dir/mul_inductor_2.v`（实现和行为仿真）以及
`ipcore_dir/mul_inductor_2.ngc`（实现），不再把该核心的 `.xco`
作为主工程源节点。`.xco` 配置及 CoreGen 子工程文件仍保留在磁盘，
用于后续重新生成 IP。其他 IP 的登记方式不变。

通过 ISE 14.7 `xtclsh` 打开实际 `vir5_PMSM.xise`，运行
`process run "Synthesize - XST"`，验证 ISE 自动生成的 `vir5_PMSM.prj`
包含 `mul_inductor_2.v`，综合成功：**0 个错误、1228 个警告**。
`vir5_PMSM.syr` 确认已解析核心 HDL，并为 `u_mul_Itemp` 加载对应 NGC。
工程流程记录在 `validation/inductor_update/check_ise_project.log`。

`Inductor.v` 运算与时序未修改。一致性检查脚本已补充主工程 HDL/NGC 登记
及 XST 清单包含该核心的断言。若 ISE 窗口在外部修改前已打开，请关闭并重新
打开 `vir5_PMSM.xise`，再运行综合，以便载入磁盘上的工程源配置。
