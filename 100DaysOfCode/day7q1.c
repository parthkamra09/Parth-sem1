#include <stdio.h>
void main()
{
    int x;

    printf("Enter the year:");
    scanf("%d", &x);

    if(x%4==0)
    {
        printf("Entered year is a leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
}