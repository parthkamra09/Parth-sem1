#ifndef ARITH_H
#define ARITH_H

/* simple integer arithmetic functions */
int add_int(int a, int b);
int sub_int(int a, int b);
int mul_int(int a, int b);
/* div_int and mod_int return 0 on divide-by-zero */
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
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("%d + %d = %d\n", a, b, add_int(a, b));
    printf("%d - %d = %d\n", a, b, sub_int(a, b));
    printf("%d * %d = %d\n", a, b, mul_int(a, b));
    if (b == 0) {
        printf("Division/modulus by zero not allowed.\n");
    } else {
        printf("%d / %d = %d\n", a, b, div_int(a, b));
        printf("%d %% %d = %d\n", a, b, mod_int(a, b));
    }
    return 0;
}