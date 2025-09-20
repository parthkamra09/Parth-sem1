#include <stdio.h>
// Write a program to input two numbers and display their sum, difference, product, and quotient.

void main()
{

    int num1, num2;
    printf("enter num1:");

    scanf("%d", &num1);
    printf("enter num2:");
    scanf("%d", &num2);
for (int i = 0; i < 1; i++)
    {
        if (num2 == 0)
        {
            printf("division and modulus by zero is not allowed. Please enter a non-zero value for num2.\n");
            printf("enter num2:");
            scanf("%d", &num2);
            i--; // Decrement i to repeat the loop
        }
    }
        printf("Sum = %d\n", num1 + num2);
    printf("substraction = %d\n", num1 - num2);
    printf("multiplication = %d\n", num1 * num2);
    printf("division = %d\n", num1 / num2);
    printf("modulus = %d\n", num1 % num2);
}