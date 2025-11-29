#include <stdio.h>
void main()
{
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);

    float sum=0;

    for(int i=1;i<=n;i++)
    {
        float num=2*i, den=4*i-1;
        sum=sum+(num/den);
    }

    printf("Approximate sum: %.2f", sum);
    
}