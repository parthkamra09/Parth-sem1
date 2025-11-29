// ...existing code...
#include <stdio.h>
#include <stdlib.h>

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