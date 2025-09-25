#include <stdio.h>

void main() {
    int num, leftShift, rightShift;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Apply left shift by 1 (multiply by 2)

    leftShift = num << 1;

    // Apply right shift by 1 (divide by 2)
    rightShift = num >> 1;

    printf("Original number = %d", num);
    printf("Left Shift (num << 1) = %d", leftShift);
    printf("Right Shift (num >> 1) = %d", rightShift);

}
