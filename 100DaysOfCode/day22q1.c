#include <stdio.h>
void main()
{
    int n,dig,sum=0;
    printf("enter n:");
    scanf("%d", &n);

    int ori=n;

    while(ori>0)
    {
        dig=ori%10;
        int fac=1;
        for(int i=1;i<=dig;i++)
        {
            fac*=i;
        }
        sum+=fac;
        ori=ori/10;
    }

    if(sum==n)
    {
        printf("Special number");
    }
    else
    {
        printf("Not a special number");
    }

}