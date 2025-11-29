
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int num, i;
    printf("Enter number of Fibonacci terms: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci sequence (%d terms):\n", num);
    for (i = 0; i < num; ++i)
        printf("%d ", fibonacci(i));
    printf("\n");
    return 0;
}
