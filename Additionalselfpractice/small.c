#include <stdio.h>
void main() {
    int num1,num2;
    printf("Enter first number : ");
    scanf("%d", &num1);
     printf("Enter second number : ");
    scanf("%d", &num2);
    if(num1>num2)
    {
    printf("second number is smaller");
    }
    else
    {
    printf("first number is smaller");
    }
}