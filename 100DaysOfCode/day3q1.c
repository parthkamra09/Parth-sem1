#include <stdio.h>
//Write a program to convert temperature from Celsius to Fahrenheit.

void main(){
    float c,f;
    printf("enter a temperature in celsius:");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("temprature in farenheit is %f",f);
}
   