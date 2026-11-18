# FMC static BackEMF tests

Regenerated using ISim with the current single signed 18 x 18
MUL18x18_bEMF structural IP and current BackEMF/CORDIC sources.
See `static_sim/test.log` and `tb_static_values.v`.

| Direction | Signal | FPGA word address | CPU byte address, Bank1 base 0x60000000 |
| --- | --- | --- | --- |
| Write | Position, channel 6 | 0x17A | 0x600002F4 |
| Write | Velocity Q2, channel 7 | 0x05C | 0x600000B8 |
| Write | Flux parameter Q15, channel 8 | 0x172 | 0x600002E4 |
| Read | A-phase voltage Q2, channel 6 | 0x1B6 | 0x6000036C |

Use 16-bit transfers. The above CPU addresses assume standard FMC 16-bit
bank addressing: byte offset = 2 * FPGA word address. Do not double the
offset again when indexing a `uint16_t*`.
Interpret returned bits as `int16_t`, then divide by 4.0 to obtain volts.
Hold model reset inactive/high; after all three writes wait at least 2 us
(10 us is a convenient bench delay). Position is static despite nonzero
velocity: this tests the EMF arithmetic independently of mechanical motion.

All table entries are signed raw integers, not physical angle/speed values.

| Angle | Position T | Velocity U | Flux F | Port 6 signed raw | Port 6 hex |
| --- | ---: | ---: | ---: | ---: | --- |
| 0 deg | 0 | 400 | 16384 | 0 | 0x0000 |
| 45 deg | 4096 | 400 | 16384 | -145 | 0xFF6F |
| 90 deg | 8192 | 400 | 16384 | -205 | 0xFF33 |
| 180 deg | 16384 | 400 | 16384 | -1 | 0xFFFF |
| 270 deg | 24576 | 400 | 16384 | 204 | 0x00CC |
| -90 deg | -8192 | 400 | 16384 | 204 | 0x00CC |
| 90 deg, reverse | 8192 | -400 | 16384 | 204 | 0x00CC |
| 90 deg, double speed | 8192 | 800 | 16384 | -410 | 0xFE66 |
| 90 deg, half flux | 8192 | 400 | 8192 | -103 | 0xFF99 |
| Zero speed | 8192 | 0 | 16384 | 0 | 0x0000 |
| Zero flux | 8192 | 400 | 0 | 0 | 0x0000 |

Here U=400 means 100 rad/s, F=16384 means 0.5 in the existing parameter
scale. These values intentionally follow the current 67108 coefficient,
not a recalibrated physical flux interpretation.

The asymmetric +/- peaks and -1 at 180 degrees follow the existing CORDIC
approximation and floor truncation. Port 6 alone checks A-phase behavior;
validating 72-degree phase relationships requires observing B/C/D/E too.

## Multiplier and offsets

The active module instantiates one signed 18 x 18 IP with one pipeline
stage. Magnitude uses slots 1-3, followed by A 4-6, B 7-9, C 10-12,
D 13-15 and E 16-18. All outputs publish at count 18. The five phase
offsets are explicit constants; no offset multiplication is used.

