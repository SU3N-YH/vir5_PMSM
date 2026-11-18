# Full-design 180 MHz timing repair

Updated: 2026-11-16 20:05 CST (Asia/Shanghai).

The original root implementation reported MAP Pack:1653 and PAR:468.
There were 569 failing setup endpoint records, no hold failures, and a
worst setup slack of -3.645 ns under the derived 5.556 ns clock constraint.
The failures ended in div5, u_inductor and u_inductor_de. BackEMF's local
repair alone had not closed the entire motor-model datapath.

## Changes that removed the warnings

1. Regenerate division5, mul18x35_1225_BySunY and mul_inductor_2 with four
   pipeline stages. The original division5 had one stage; the two current
   IPs had two. The latter left MREG disabled, producing a long DSP multiply
   and partial-product accumulation path. The regenerated cores enable MREG
   and PREG. Both NGC implementation files and structural Verilog models
   have been updated with matching XCO parameters. Widths remain signed
   18 x 35 with a full 53-bit product.
2. Retiming of all result captures to match four-stage IP latency. Fabric
   inputs loaded on N are captured on N+5. Increasing pipeline depth without
   changing the schedule would select the wrong product.
3. In add5ov5, register the five-input sum as a balanced pair/pair/tail tree.
   Separate the low-bit correction, rounding and saturation stages. Keep
   all 38 sum bits, the original Q19 reciprocal, signed rounding and output
   saturation. Groups sample at counts 1/4/7 and publish ten clocks later;
   each group still updates every 12 clocks. Group tags and validity move
   through the pipeline to prevent mixed results and invalid reset outputs.
4. In Inductor, separate bridge-minus-neutral and resistance-plus-backEMF
   from the final subtraction and the trapezoidal voltage sum. Drive every
   arithmetic register with clk_180MHz. Replace the fabric-generated
   integration clock with a count-4 enable; keep one update per 18 clocks.
   Snapshot all currents and both coefficients for each frame. Inductor_DE
   reuses the same arithmetic engine with its separate mul_inductor_2 IP.
5. Split BackEMF_CORDIC180 output sign correction into XOR and increment
   stages. After the other blocks changed placement, its original conditional
   negation was the last remaining failing path (-0.058 ns). The extra stage
   removed that path. Core output latency is now 38 clocks; BackEMF launches
   remain 54 clocks apart and publishes five outputs every 18 clocks.

The single-clock current engine changes internal latency and the phase at
which data is sampled/published. Its per-frame recurrence is:

```text
Rdrop[k] = wrap35((R * I_snapshot[k]) >>> 20)
UL[k] = wrap35(Ubridge[k] - Uneutral[k] - Rdrop[k] - backEMF[k])
dX[k] = inverse_L * wrap35(UL[k] + UL_previous[k])
X[k] = wrap53(X[k] + dX[k])
I[k] = {previous_X[k][52], previous_X[k][43:10]}
```

Input coefficient ports retain their original zero-extension from 16 to
18 bits. Q formats, modulo overflow and the one-frame state-to-output
delay are retained. It is not a cycle-for-cycle copy of the old generated
clock implementation. The old active sources and IPs are in baseline/.

## Results

The root project was rebuilt using the actual ISE project XST/MAP/PAR
options, without relaxing the 20 MHz oscillator constraint or the derived
180 MHz period. No arithmetic false-path or multicycle exception was added.

| Check | Before | After |
| --- | ---: | ---: |
| MAP warnings | 1 | 0 |
| PAR warnings | 1 | 0 |
| Setup timing failures | 569 | 0 |
| Hold timing failures | 0 | 0 |
| Worst setup slack | -3.645 ns | +0.330 ns |
| Reported minimum 180 MHz-domain period | 9.200 ns | 5.225 ns |
| DSP48A1 use | 7 / 38 | 7 / 38 |

The new top uses 4979 slice registers and 4771 LUTs (31 percent).
The final root PAR report says "All constraints were met" and the final
bitgen DRC has zero errors and zero warnings. The root vir5_pmsm.bit was
regenerated. No FPGA was programmed.

This closes the constrained internal clock paths. External asynchronous
STM32 FMC setup/hold and board signal integrity are not certified by the
internal PERIOD checks. Unrelated XST warnings such as the existing 35-bit
current connection to 16-bit observation ports are separate from the two
implementation warnings addressed here.

## Verification and artifacts

- run_current180_sim.ps1: independent recurrence scoreboard passed 500
  updates across all five phases, including changing signed full-width
  voltage/neutral/backEMF inputs, coefficient snapshots, wrap and reset.
- run_neutral5_sim.ps1: 4495 checks passed with changing full-width inputs,
  signed limits, low-bit compensation, rounding, saturation and reset.
- run_backemf_latch_sim.ps1: real IP at 50/180 MHz and variable completion
  latency passed, including all 18 completion slots.
- run_backemf_port6_sim.ps1: 1220 integration reads passed; 2906 sine/cosine
  results remained bit-exact against the legacy CORDIC.
- run_model180_sim.ps1: full top-level simulation with the real 20 MHz PLL
  passed 500 stable port6 reads at 0x0055, live five-phase current checks,
  parameter readback and reset.

Reproduce the root implementation and bitstream with tools/build_full180.ps1.
It checks timing and MAP/PAR warnings before running bitgen. The independent
build uses tools/run_full180_timing.ps1. Logs are root_build.log,
current_sim/test.log and model_sim/test.log in this directory. Root reports
are vir5_PMSM_map.mrp, vir5_PMSM.par, vir5_PMSM.twr and vir5_pmsm.bgn.

New modification timestamps are limited to Inductor.v, Inductor_DE.v and
add5ov5.v, the changed modules directly instantiated by vir5_PMSM.v.
Testbenches, generated IP models and the lower-level CORDIC change have
no new timestamp annotation. Existing historical timestamps are retained.
All changed Verilog code and comments are ASCII-only.
Widening BackEMF to 18 x 35 was not needed: the current 18 x 18 BackEMF
multiplier passes within the complete design. The failing 18 x 35 IPs
demonstrate why width alone does not establish timing margin; register
placement and pipeline depth determine the combinational delay per clock.
