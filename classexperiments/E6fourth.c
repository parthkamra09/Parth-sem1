
#include <stdio.h>

int isPrime(int n)
{
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; (long long)i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int main(void)
{
    int a, b;
    printf("Enter lower and upper bounds (space separated): ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }
    if (a > b) { int t = a; a = b; b = t; }

    printf("Prime numbers between %d and %d:\n", a, b);
    int found = 0;
    for (int n = a; n <= b; ++n) {
        if (isPrime(n)) {
            printf("%d ", n);
            found = 1;
        }
    }
    if (!found) printf("None");
    printf("\n");
    return 0;
}
