#include <stdio.h>
//Write a program to calculate the area and circumference of a circle given its radius.

void main()
{

    float r;
    printf("enter radius:");
    scanf("%f", &r);
    printf("area of circle is %f\n", r*r*3.14);
    printf("perimeter of circle is %f\n", 2*r*3.14);
}