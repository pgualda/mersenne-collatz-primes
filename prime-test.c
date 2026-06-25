#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main() {
    unsigned long k, target_step;
    mpz_t numero_actual, dos, k_potencia;

    printf("=== Mersenne-Collatz Primality Test (Exact Search Engine) ===\n");
    printf("Enter Mersenne exponent k (M_k): ");
    if (scanf("%lu", &k) != 1) return 1;
    
    printf("Enter orbit step number to test (j): ");
    if (scanf("%lu", &target_step) != 1) return 1;

    // Initialize GMP variables
    mpz_init(numero_actual);
    mpz_init(k_potencia);
    mpz_init_set_ui(dos, 2);

    // Generate Mersenne number: numero_actual = 2^k - 1
    mpz_pow_ui(k_potencia, dos, k);
    mpz_sub_ui(numero_actual, k_potencia, 1);

    printf("\nSimulating Collatz trajectory step by step...\n");

    // Exact orbit simulation matching your original search logic
    unsigned long j = 0;
    while (j < target_step) {
        if (mpz_even_p(numero_actual)) {
            // Even step: divide by 2 using bit shift
            mpz_tdiv_q_2exp(numero_actual, numero_actual, 1);
        } else {
            // Odd step: 3x + 1
            mpz_mul_ui(numero_actual, numero_actual, 3);
            mpz_add_ui(numero_actual, numero_actual, 1);
        }
        j++;
    }

    // Display candidate metrics
    size_t digits = mpz_sizeinbase(numero_actual, 10);
    printf("Step %lu reached successfully!\n", target_step);
    printf("Candidate length: %zu digits.\n", digits);
    
    // Print the full number in base 10
    printf("\n--- GENERATED NUMBER ---\n");
    gmp_printf("%Zd\n", numero_actual);
    printf("------------------------\n\n");

    printf("Starting primality test (Miller-Rabin, 25 passes)...\n");
    printf("Please wait...\n");

    // Execute local primality test (25 passes)
    int result = mpz_probab_prime_p(numero_actual, 25);

    printf("\n--- TEST RESULT ---\n");
    if (result == 2) {
        printf("PROVEN / DETERMINISTIC PRIME!\n");
    } else if (result == 1) {
        printf("SUCCESS! PROBABLE PRIME (High certainty).\n");
    } else {
        printf("COMPUTE BOUND: COMPOSITE (Contains factors).\n");
    }
    printf("-------------------\n");

    // Clean up memory
    mpz_clear(numero_actual);
    mpz_clear(k_potencia);
    mpz_clear(dos);
    return 0;
}

