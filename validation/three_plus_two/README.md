# 3+2 electrical model wiring

[2026-11-10 16:00 CST] This configuration supersedes the native-five-phase
Inductor integration described in the older MIGRATION.md. Changes use ASCII
comments; replaced top-level connections and disabled third-phase code remain
commented in their respective source files.

## Active hierarchy

| Instance | Source | Physical phases | Multiplier |
| --- | --- | --- | --- |
| u_inductor | Inductor.v | A/B/C, x_1/x_2/x_3 | mul18x35_1225_BySunY |
| u_inductor_de | Inductor_DE.v | D/E, x_4/x_5 | mul_inductor_2 |
| u_inverter | inv_phi3_HB.v | A/B/C | none |
| u_inverter_de | inv_phi2_HB_DE.v | D/E | none |

The user-validated Inductor.v and original inv_phi3_HB.v are unchanged.
Inductor_DE.v copies the active three-phase implementation, renames A/B states
to D/E (4/5), comments out the third phase, and selects mul_inductor_2.
The original 18-clock frame, multiplier capture slots and integration method
remain unchanged. Third-phase time slots remain in the scheduler so the
integration step does not change. Both generated multiplier IPs are signed
18x35 with 53-bit output and two pipeline stages.

The copied bridge exposes D/E voltage and observation ports. Each bridge output
feeds its matching current module; each current state returns to its bridge
through an explicit signed Q25-to-Q17 conversion. Full Q25 states remain
available internally; PCI currently returns loopbacks and constants. All five phases share the same
180 MHz source, model reset and parameter nets.

## Parameter fanout and readback

The existing five FMC test loopback channels are preserved. Their stored words
also feed Udc (channel 1, Q5), R (2, Q12), inverse inductance (3, existing Q18
contract), half flux (4, Q15, reserved), and diode voltage (5, Q15).
Parameter word write/read addresses are 0x200, 0x114, 0x136, 0x078 and 0x13a.
Channels 1..5 retain their existing loopback read addresses.

PCI retains 18 FPGA-to-STM32 inputs. Channels 1..5 read back the five FMC
test registers; channels 6..18 return fixed values 5..17. The matching
top-level inputs are tied to those constants. Phase-current and phase-voltage
readback is disconnected from PCI in this test configuration.

## Explicit scope and remaining connections

The previously commented BackEMF, neutral, Clarke, Park and mutual-inductance
instances remain commented. Neutral voltage and all five back-EMF inputs are
explicitly tied to zero and marked as RL bench placeholders. Thus the active
configuration models five grounded-neutral RL branches with switching bridges;
it is not a completed floating-neutral PMSM model. Replace those assignments
with the eventual five-phase physical-model outputs before full-motor use.
<!-- [2026-11-10 16:39 CST] Previous state: the unused position observation consumed an undriven source. -->
The unused electrical-position observation and epwm_7A input are now commented
out. Unused voltage/current observation outputs and the unused 50 MHz clock
output remain open. The unused third grid-passthrough input is tied to zero.
The original bridge conduction-resistance implementation is unchanged.

<!-- [2026-11-10 16:04 CST] Previous status: D/E PWM LOC values awaited board mapping. -->
main.ucf retains all existing pin mappings and sets epwm_4A/4B and epwm_5A/5B
to LVCMOS33. The supplied schematic now defines epwm_4A=B1, epwm_4B=G6,
epwm_5A=G5 and epwm_5B=B2. No physical phase-voltage output pins are added: bridge voltages are
internal numerical signals read through the existing STM32 bus.

## Verification

The PCI rollback is covered by tools/run_fsmc_sim.ps1: all 4096 addresses,
18 read channels, 16 write registers, 20 clock phases, tri-state release and
invalid cycles pass. The five test channels loop back their stored words;
all remaining read channels return fixed constants.

Run tools/check_3plus2_topology.py --pci-only for the PCI port-count and
top-level loopback/constant connections. XST completes with 0 errors and
<!-- [2026-11-10 16:39 CST] Previous XST result: 190 warnings. -->
47 warnings for the current design.

The standalone current-model checks still pass 139 multiplier vectors and
3600 D/E comparisons against the original three-phase implementation.
<!-- [2026-11-10 16:39 CST] Previous integration result: current-format and dead-time checks failed because Q25-to-Q17 feedback assignments were commented out. -->
The five Q25-to-Q17 feedback assignments are restored because each bridge
uses current polarity to choose the dead-time diode path. Full integration
simulation now passes, including signed current conversion and dead-time
feedback. The topology checker reports no undriven active inputs.

[2026-11-10 16:39 CST] NGDBUILD completes with 0 errors and 0 warnings. An
isolated MAP run completes with 0 errors and 11 warnings: the ten motor PWM
inputs and model reset are removed because the motor results have no path
to an external output in this PCI test configuration. The mapped design has
0 DSP48A1 blocks. Thus source-level and RTL-simulation model connectivity does
not imply that the motor model remains in the programmed hardware. No KEEP
or preservation attributes are added to conceal this lack of observability.
Low-bit constant trimming warnings remain normal consequences of the existing
fixed-point voltage representation; the model widths and arithmetic are kept.

No new programming image is generated. Existing .bit/.mcs files predate this
change. Routing, final timing and board validation are not performed.
