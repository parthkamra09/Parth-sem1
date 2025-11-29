#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    while (n > 0) {
        int bit = n % 2;
        binary = bit * place + binary;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary: %d", binary);
    return 0;
}