#include <stdio.h>
//Write a program to find the sum of first n natural numbers.

void main() 
{
    int n, sum = 0;

    printf("enter a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum = sum + i;
    }

    printf("Sum=%d\n", sum);

}