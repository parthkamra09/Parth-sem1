#include <stdio.h>
//Write a program to swap two numbers using a third variable.
void main() {
    int a = 10;
    int b = 20;
    int temp;



    printf("Before swap: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;

    


    printf("After swap: a = %d, b = %d\n", a, b);

    
}