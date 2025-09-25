#include <stdio.h>

void main() {
    int a, b;

    // Input two integers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Bitwise AND
    printf("Bitwise AND (a & b) = %d", a & b);

    // Bitwise OR
    printf("Bitwise OR (a | b) = %d", a | b);

    // Bitwise NOT
    printf("Bitwise NOT (~a) = %d", ~a);
    printf("Bitwise NOT (~b) = %d", ~b);

}
