#include <stdio.h>
void main()
{
    int n,sum=0;
    printf("enter n:");
    scanf("%d", &n);

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    
    if(sum==n)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    
}