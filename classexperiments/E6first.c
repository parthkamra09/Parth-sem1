#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;

ull FACT_recursive(unsigned int n)
{
    if (n == 0) return 1;
    return n * FACT_recursive(n - 1);
}

ull FACT_iterative(unsigned int n)
{
    ull r = 1;
    for (unsigned int i = 2; i <= n; ++i) r *= i;
    return r;
}

ull binomial_using_fact(ull (*fact)(unsigned int), unsigned int n, unsigned int r)
{
    if (r > n) return 0;
    return fact(n) / (fact(r) * fact(n - r));
}

int main(void)
{
    int max_n;
    printf("Enter maximum n to tabulate binomial coefficients (0..20): ");
    if (scanf("%d", &max_n) != 1) return 1;
    if (max_n < 0) return 1;
    if (max_n > 20) {
        printf("Limiting max n to 20 to avoid 64-bit overflow.\n");
        max_n = 20;
    }

    printf("\nTabulation of C(n,r) for n = 0..%d\n", max_n);
    printf(" n  r    C(n,r)\n");
    printf("----------------\n");
    for (unsigned int n = 0; n <= (unsigned)max_n; ++n) {
        for (unsigned int r = 0; r <= n; ++r) {
            ull c = binomial_using_fact(FACT_iterative, n, r);
            ull c_rec = binomial_using_fact(FACT_recursive, n, r);
            if (c != c_rec) {
                printf("%2u %2u  overflow/mismatch\n", n, r);
            } else {
                printf("%2u %2u  %20llu\n", n, r, c);
            }
        }
    }
    return 0;
}
