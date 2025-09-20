#include <stdio.h>
//Write a program to swap two numbers without using a third variable.

void main() {
    int a = 10, b = 20;

    printf("Before swap: a = %d, b = %d\n", a, b);

    
    a = a + b;  
    b = a - b;  
    a = a - b;  

    printf("After swap: a = %d, b = %d\n", a, b);

    
}