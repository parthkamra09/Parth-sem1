#include <stdio.h>
int main()
{
    int x;

    printf("enter integer:");
    scanf("%d", &x);

    if(x>=0)
    {
        if(x==0)
        {
            printf("Entered integer is 0");
        }
        else
        {
            printf("Entered integer is positive");
        }
    }
    else
    {
        printf("Entered intege is negative");
    }
  
    return 0;
}