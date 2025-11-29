#include <stdio.h>
#include <math.h>
void main()
{
    int n,d=0,dig,x,r;

    printf("enter n:");
    scanf("%d", &n);

    x=n;

    while(n>0)
    {
        dig=n%10;
        r=dig*dig*dig;
        d+=r;
        n=n/10;
    }
     if(x==d)
     {
        printf("Armstrong");
     }
     else
     {
        printf("Not Armstrong");
     }

}