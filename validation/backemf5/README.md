# Five-phase BackEMF (2026-11-12)

Update 2026-11-16: schedule and IP latency details below are historical.
See [the 180 MHz repair report](../backemf180/README.md) for the current
two-stage multiplier, dedicated CORDIC and routed timing results.

The active BackEMF module shares one generated MUL18x18_bEMF IP
instance between the speed/flux product and all five phase voltages.
The core has signed 18 x 18 inputs, a full 36-bit output and one pipeline
stage. One IP instance may contain multiple physical DSP48A1 blocks.
The original three-phase source remains in a block comment.

The ISE project and source lists include the selected core. The old
phase-only core, generation script and simulation adapter are removed.
The five phase offsets are explicit Q16.16 constants: 0, 4718592,
9437184, 14155776, 18874368 (0/72/144/216/288 electrical degrees).

## Schedule

At 180 MHz the counter cycles from 1 to 18. Registered inputs load at N;
the IP samples at N+1; the result is captured at N+2.

| Operation | Load | Capture |
| --- | ---: | ---: |
| Speed x flux | 1 | 3 |
| Phase A | 4 | 6 |
| Phase B | 7 | 9 |
| Phase C | 10 | 12 |
| Phase D | 13 | 15 |
| Phase E | 16 | 18 |

A-D wait in shadow registers. Count 18 captures E directly from the IP
and publishes all five outputs together at 10 MHz. No stale E shadow
value is published. The original Q8 magnitude truncation and Q17 voltage
mapping use magnitude product bits [30:13] (Q21 -> S18_Q8), then phase
product bits [35:8] (Q25 -> Q17) with seven sign-extension bits.
Magnitude overflow wraps to 18 bits, as in the original Q8 format.

Five CORDICs use registered angle conversion at counts 15/16/17 and launch
at count 18 when idle with a fully prepared input. All five results are
latched together on oDone, then copied to a frame snapshot at count 2.
All phase loads (4 through 16) use that snapshot, independently of when
the core completes. With the supplied core, launches remain 36 clocks
apart: fresh angle batches arrive at 5 MHz; speed/flux sample at count 1.
FMC signed angle and speed conversions and STM32 output are unchanged.
See ../backemf_latch/README.md for the latch schedule and dynamic regression.

## Validation

Run tools/run_backemf5_sim.ps1 with ISE 14.7. It uses the actual generated
18x18 structural IP and CORDIC with no behavioral adapter. ISim passed
403 static angle/amplitude cases with at most one STM32 code of error.
tools/run_backemf_latch_sim.ps1 checks all five outputs every clock,
including dynamic signed inputs, full-range input products, magnitude
wrap, reset and frame timing at 50/180 MHz and with variable CORDIC latency.
The initial 100 ns Xilinx global reset is excluded from the assertions.
Hardware timing closure and on-board operation are unverified.
