#ifndef ARITH_H
#define ARITH_H
int add_int(int a, int b);
int sub_int(int a, int b);
int mul_int(int a, int b);
int div_int(int a, int b);
int mod_int(int a, int b);
#endif /* ARITH_H */



int add_int(int a, int b) { return a + b; }
int sub_int(int a, int b) { return a - b; }
int mul_int(int a, int b) { return a * b; }
int div_int(int a, int b) { return (b == 0) ? 0 : (a / b); }
int mod_int(int a, int b) { return (b == 0) ? 0 : (a % b); }
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) return 1;

    printf("%d + %d = %d\n", x, y, add_int(x, y));
    printf("%d - %d = %d\n", x, y, sub_int(x, y));
    printf("%d * %d = %d\n", x, y, mul_int(x, y));
    if (y == 0) {
        printf("Division or modulus by zero not allowed. (functions return 0)\n");
    } else {
        printf("%d / %d = %d\n", x, y, div_int(x, y));
        printf("%d %% %d = %d\n", x, y, mod_int(x, y));
    }
    return 0;
}