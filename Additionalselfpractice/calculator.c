#include<stdio.h>
void main() 
{
    int a,b;
    char operation;
     printf("enter a operation(+ , - ,*):");
     scanf("%c",&operation);
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf(" sum of numbers is:%d\n",a+b);
    printf(" difference of numbers is :%d\n",a-b);
    printf(" product of the numbers is:%d\n" ,a*b);
}