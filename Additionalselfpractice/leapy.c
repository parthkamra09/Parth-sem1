#include <stdio.h>
void main() {
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    if(year%4==0)
    {
    printf("number is even");
    }
    else
    {
    printf("number is odd");
    }
}