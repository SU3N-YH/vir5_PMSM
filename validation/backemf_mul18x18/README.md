# BackEMF 18x18 IP 替换验证（2026-11-13）

`BackEMF.v` 复用一个已生成的 `MUL18x18_bEMF`：有符号 18x18 输入、
36 位完整输出、一级流水线，无 CE/reset。幅值取乘积 `[30:13]` 得到
`S18_Q8`，五相电压取 `[35:8]` 并符号扩展 7 位得到 `S35_Q17`。
幅值沿用原注释的截断及 18 位回绕规则。每 18 拍发布五相结果。

旧 IP 文件、生成/编辑脚本和工程引用已清理。ISE 工程、两个主源码清单、
BackEMF 仿真脚本和验证源码清单均已切换到新 IP。

- `tools/run_backemf5_sim.ps1`：403 组角度/幅值样本通过，最大误差为
  1 个 STM32 码值。使用真实结构乘法器和真实 CORDIC。
- `tools/run_backemf_latch_sim.ps1`：50 MHz、约 180 MHz 及可变 CORDIC
  延迟三组通过；逐拍检查五相输出、复位、动态输入，增加全范围正负速度/
  磁链与幅值回绕测试。可变延迟覆盖全部 18 个完成位置。
- `../backemf_latch/synth/BackEMF.syr`：单模块 XST 综合 0 错误、162 警告，
  1 个 DSP48A1，估算最小周期 8.862 ns。
- 本目录 `vir5_PMSM.syr`：主工程 XST 综合 0 错误、334 警告。
  `vir5_PMSM.bld`：NGDBUILD 链接 0 错误、0 警告，确认加载
  `ipcore_dir/MUL18x18_bEMF.ngc`。

本目录保留此次顶层综合及链接的独立输入和报告。未重新布局布线或生成
下载 bit 文件；RTL 仿真与综合通过不表示已满足 180 MHz 器件时序。
