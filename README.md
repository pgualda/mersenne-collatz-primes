# mersenne-collatz-primes
Computational Exploration: The Collatz path of a Mersenne prime $M_k$ highly likely contains at least one intermediate prime before the base-3 repitoun at step $(k-1) \cdot 2$. Verified up to $M_{86243}$ (with $M_{11213}$ being the only known exception).
# mersenne-collatz-primes

A computational exploration based on the deterministic property that the Collatz trajectory of any Mersenne number M(k) (where k is odd) reaches a base-3 repitoun in exactly (k-1)*2 steps.

I postulate that, provided M(k) is a Mersenne prime, there is an extremely high probability that at least one intermediate prime number exists along this exact path of (k-1)*2 steps.  Rather than a universal certainty, this structural property is presented as a strong statistical tendency. It has been exhaustively tested for all certified Mersenne primes up to $M_{44497}$, holding true in all cases with the sole exception of $M_{11213}$, which fails to yield any intermediate primes along its trajectory.

In orbits where multiple prime numbers are discovered within the same trajectory, the largest found is listed as the representative success for that case. The successful orbits and their details are listed below.

M(2)/M(3) ...

M(5) C(6) 107

M(7) C(15) 1093

M(13) C(20) 472391

M(17) C(30) 57395627

M(19) C(20) 30233087

M(31) C(42) 10711401679871

M(61) C(90) 193613837536515437274267647

M(89) C(168) 383120485841984633235287680854945507381791

M(107) C(182) (49 digits)

M(127) C(222) (58 digits)

M(521) C(990) (245 digits)

M(607) C(1150) (284 digits)

M1279) C(2412) (598 digits)

M(2203)	C(3090) (936 digits)

M(2281) C(3070) (957 digits)

M(3217) C(4134) (1333 digits)

M(4253) c(7746) (1963 digits)

M(4423) C(4886) (1762 digits)

M(9689) C(15360) (4270 digits)

M(9941) C(16638) (4458 digits)

M(11213) fail

M(19937) C(38534) (9395 digits)

M(21701) C(28228) (9019 digits)

M(23209) C(41810) (10668 digits)

M(44497) C(83390) (20738 digits)

M(86243) C(169980) (40928 digits)





