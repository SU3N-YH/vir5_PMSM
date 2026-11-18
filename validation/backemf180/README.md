# BackEMF 180 MHz repair

Update 2026-11-16 20:05 CST: the subsequent full-design repair closed the
remaining constrained timing paths and regenerated the root bitstream.
The final CORDIC has one additional sign-correction clock (38 clocks total).
The scope/bitstream limitations below describe the earlier local repair.
See [the full-design report](../timing180/README.md) for current results.

Updated: 2026-11-16 19:30 CST (Asia/Shanghai).

## Cause and evidence

The supplied hardware symptom is a port 6 value alternating between 0x0055
and 0x0000 at 180 MHz, while 50 MHz is stable. The original RTL has long
combinational paths in flux scaling, CORDIC normalization and CORDIC
shift/add iterations. The one-stage multiplier also leaves the DSP input
unregistered internally. These paths do not reliably meet 5.556 ns.

The active main.ucf previously had no PERIOD constraint. The original
vir5_PMSM.twr explicitly said "No timing constraints found". A successful
route or "All constraints were met" under those conditions was not evidence
of 180 MHz timing closure. RTL simulation has no device propagation delays.

The preserved original top-level NGC was routed again with the actual
20 MHz oscillator constraint. ISE derived 180 MHz from PLL_BASE. This
reported 825 failing setup endpoint records ending in u_back_EMF. The
worst path was u_pci/Data_8_1 -> u_back_EMF/mul_b1_17, through flux scaling:
8.385 ns data delay, -2.970 ns setup slack. CORDIC also had failing paths.
This establishes a real timing defect consistent with the hardware symptom;
an on-board measurement is still needed to confirm the observed jump is gone.

## Changes

- BackEMF.v: pipeline the original five-term flux scaling across counts
  15/16/17. Sample signed speed and flux together at count 15. Preserve all
  32-bit wrapping, product slicing, saturation and STM32 Q-format mapping.
- CORDIC_STANDALONE.v: add BackEMF_CORDIC180, used only by BackEMF.
  The original CORDIC_STANDALONE implementation remains unchanged.
  Separate input classification, bias selection, normalization, variable
  shift, addition, sign correction and saturation into clocked stages.
  Use 19-bit vectors with one guard bit and 24-bit normalized angles;
  retain the original 16 iterations, constants and all Q17 fractional bits.
- MUL18x18_bEMF: regenerate the actual CoreGen IP with pipestages=2.
  The generated DSP has A1REG=1, B0REG=1, MREG=1, PREG=0. Update both the
  synthesis NGC and the structural Verilog simulation model. Updating
  simulation RTL alone would not update the FPGA implementation.
- main.ucf: constrain the 20 MHz board oscillator, including 500 ps input
  jitter. ISE derives the real 180 MHz constraint through the PLL.
- vir5_PMSM.v: retain clk_180mhz on BackEMF and PCI; correct stale comments.
  The source already connected both to 180 MHz on arrival.
- Changed Verilog files have ASCII timestamp comments. Added comments and
  code contain no Chinese characters or non-ASCII punctuation.

No timing exception was added to hide an arithmetic path.

## Multiplier schedule

The registered fabric inputs load at N, DSP input registers capture at N+1,
MREG updates at N+2, and the consuming register captures at N+3.

| Operation | Fabric input load | Result capture |
| --- | ---: | ---: |
| Speed x flux | 18 | 3 |
| Phase A | 4 | 7 |
| Phase B | 7 | 10 |
| Phase C | 10 | 13 |
| Phase D | 13 | 16 |
| Phase E | 16 | 1 |

Capturing the previous result and loading the next input on the same edge
is intentional. A-D use shadow registers; count 1 captures E and publishes
all five phases together. Output publication remains every 18 clocks,
10 MHz at a 180 MHz input. Publication moves from count 18 to count 1.
The first output remains zero until valid inputs and sine results arrive.

The completed sine bank and per-frame snapshot are retained. Only oDone
can update the completed bank; count 2 snapshots it for all five phases.
Busy calculations hold their sampled angle. A static angle is recalculated
periodically, including zero immediately after reset.

Tradeoff: the new CORDIC takes 37 clocks from launch to output assertion.
Its launch period is 54 clocks instead of 36, so fresh angle batches arrive
at 3.333 MHz instead of 5 MHz. Output frames still publish at 10 MHz.
Speed/flux now sample at count 15 before the magnitude load at count 18,
instead of sampling directly at the old count 1. The five phase angle batch
can be older than the magnitude sample, as in the existing architecture.

## Verification

Run from the project root using PowerShell and ISE 14.7:

```powershell
./tools/run_backemf5_sim.ps1
./tools/run_backemf_latch_sim.ps1
./tools/run_backemf_port6_sim.ps1
./tools/run_backemf180_timing.ps1
```

Results with the actual generated structural multiplier:

- 403 static angle/amplitude cases passed, at most one STM32 code of
  difference from the mathematical reference.
- Dynamic five-phase scoreboard passed at 180 MHz and 50 MHz, including
  full signed speed/flux ranges, wrap, changing inputs and reset in flight.
- Variable CORDIC completion latency covered all 18 frame positions:
  done_slots=0007fffe. No mixed phase frames were published.
- PCI -> BackEMF -> port 6 integration passed 1220 asynchronous reads.
  Angle=5120, speed=400, flux=-8192 held 0x0055 continuously, including
  repeated unchanged writes. Zero speed and reset recovery also passed.
- 2906 sine/cosine comparisons against the original CORDIC passed bit for
  bit, including positive/negative quadrants, fractional angles, quadrant
  boundaries +/-1 input LSB, and input changes during calculation.

The final routed full top uses the active project's XST settings, including
normal optimization and flattened hierarchy, on xc6slx25-2-ftg256.

| Paths ending inside BackEMF, including PCI inputs | Original | Final |
| --- | ---: | ---: |
| Setup endpoint records analyzed | 6143 | 9134 |
| Setup violations | 825 | 0 |
| Hold violations | 0 | 0 |
| Worst setup slack | -2.970 ns | +0.365 ns |
| Worst hold slack | +0.430 ns | +0.398 ns |

These are endpoint/pin records, not counts of distinct RTL registers.
The final top uses 3802 slice registers, 3496 LUTs and 7 DSP48A1 blocks;
BackEMF still uses one multiplier instance and one DSP48A1.

Reports: baseline/backemf_timing.txt and fixed/backemf_timing.txt contain
the concise results. The complete routed reports are all_endpoints.twr in
the same folders. Logs from integration and equivalence are in port6/.
Historical one-stage and hierarchy experiments are in fixed_one_stage/
and fixed_hierarchy/; fixed/ is the final two-stage implementation.

## Scope of timing closure

All analyzed synchronous paths ending inside BackEMF meet the derived
180 MHz clock, with no setup or hold violations. The top-level design
still has 569 failing endpoint records in div5 (191), u_inductor (240), and
u_inductor_de (138), including paths consuming BackEMF outputs. The whole
motor model therefore has not achieved 180 MHz timing closure.
Asynchronous FMC board I/O timing is not certified by these PERIOD checks.

The existing root vir5_pmsm.bit was not regenerated and does not contain
this repair. No FPGA was programmed. Rebuild the ISE project to use the
updated RTL, UCF and two-stage multiplier NGC, and confirm the hardware
port 6 behavior. Resolve the other reported timing failures before claiming
the complete motor model is timing clean at 180 MHz.

The baseline folder preserves the original relevant sources and one-stage
IP. The timing runner uses a separate build directory and does not overwrite
the existing root implementation or download files.
