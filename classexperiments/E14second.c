#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division/modulus by zero not allowed.\n");
    }

    return 0;
}

