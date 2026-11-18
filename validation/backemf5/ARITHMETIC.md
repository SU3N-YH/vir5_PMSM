# BackEMF arithmetic and precision

## Phase equations

For sinusoidal per-phase magnet flux linkage psi*cos(theta-alpha), its
time derivative under this project's sign convention is
e = -omega_e*psi*sin(theta-alpha). Electrical speed omega_e is in rad/s.
Three phases use alpha = 0, 2*pi/3, 4*pi/3. Five phases use
alpha = 0, 2*pi/5, 4*pi/5, 6*pi/5, 8*pi/5.
Each phase retains the same magnitude; no phase-count multiplier is needed.

## Exact fixed-point operations

Let T and U be the signed FMC angle and velocity integers, and F the signed
Phir_Half_S16_Q15 integer. The active code computes:

    T18 = 4*T
    W   = 4*U
    theta_deg_Q16 = (T18 modulo 131072)*180
    P = wrap_S18(floor(67108*F / 2^14))
    M = wrap_S18(floor(W*P / 2^13))
    S_k = CORDIC_sin_Q17(theta_deg_Q16 - k*72*65536)
    N_k = saturate_S18(-S_k)
    V_k = floor(M*N_k / 2^8)
    e_k = V_k / 2^17

The shift/add coefficient is exactly 67108 = 65536+1024+512+32+4.
Arithmetic slicing corresponds to floor, also for negative numbers.
P and M are stored as signed 18 bits; outside [-131072,131071] they wrap
rather than saturate. The physical approximations below require both to
fit that range. In particular, P fits for F in [-32000,32000], but not for
the entire signed 16-bit flux input range.

If omega_e = U/4 = W/16 and f = F/32768, then, ignoring quantization:

    P/2^17 = (67108/65536)*f
    M/2^8  = omega_e*(67108/65536)*f
    e_k    = -omega_e*(67108/65536)*f*sin(theta-alpha_k)

The existing coefficient is 67108/65536 = 1.02398681640625. Both the
original three-phase code and current five-phase code use it unchanged.
If the input name is interpreted literally as f = psi/2, the implemented
effective flux is 0.511993408203125*psi. It is NOT automatically psi.
Physical flux/unit calibration must follow the firmware's parameter
definition; this change does not silently replace the original coefficient.

## Precision comparison

One signed 18x18 MUL18x18_bEMF multiplier is shared by all six operations.
Both operands are 18 bits and the full product is 36 bits.
CORDIC, Q17 sine, Q8 magnitude and Q17 voltage remain unchanged.
The exact five-phase offsets in Q16.16 introduce no 72-degree rounding.
The original 120/240-degree offsets rounded input-angle counts and had
about 0.000915527 degree offset error.

Compared with independent native 18-bit inputs, FMC 16-bit inputs have
four times coarser resolution:

| Quantity | Original native input | FMC input restored internally |
| --- | --- | --- |
| Electrical angle LSB | 360/131072 = 0.00274658203125 deg | 360/32768 = 0.010986328125 deg |
| Velocity LSB | 1/16 = 0.0625 rad/s | 1/4 = 0.25 rad/s |

For values already representable by the FMC format, the shift itself is
lossless. A rounded angle word has up to half an LSB angle error; truncation
can have almost one full LSB. Small-angle voltage error is bounded locally
by approximately abs(E)*abs(delta_theta_rad). One FMC angle LSB is about
0.000191748 rad (0.0192% of amplitude at maximum slope).

Unchanged arithmetic errors include CORDIC approximation, less than one
Q17 flux LSB from flux truncation, less than 1/256 V from magnitude
truncation, and less than 1/131072 V from final product truncation. Sine
negation saturation differs by one Q17 code at -1, fixing the former
wrong-sign overflow. These are component errors, not a bound on their
combined effect under all parameters.

S35_Q17 storage does not imply 17 effective fractional bits in the whole
calculation: magnitude already passes through Q8. The code requires a
magnitude in [-512,511.99609375] V; overflow invalidates small-error bounds.
STM32 observation remains a signed 16-bit Q2 truncation (0.25 V/LSB),
with no saturation added.

Output publication remains 10 MHz; new coherent angles arrive at 5 MHz.
Angle sampling age and independent speed/flux sampling cause dynamic
errors, distinct from fixed-point resolution. For nearly constant speed,
angle age tau contributes delta_theta approximately omega_e*tau.
