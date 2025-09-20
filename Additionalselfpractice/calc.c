#include<stdio.h>
void main() 
{
    int num1,num2;
    char operation;
     printf("enter a operation(+ , - ,*,/):");
     scanf("%c",&operation);
     printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
switch (operation)
{
case '+':
    printf("addition of the numbers is:%d\n", num1+num2);
    break;
case '-':
    printf("subtraction of the numbers is:%d\n", num1-num2);
    break;
case '*':
    printf("multiplication of the numbers is:%d\n", num1*num2);
    break;
case '/':
    printf("division of the numbers is:%d\n", num1/num2);
    break;
default: 
    printf("invalid operation");

}
}