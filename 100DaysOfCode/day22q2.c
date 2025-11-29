#include <stdio.h>
void main()
{
    int n;
    float sum=1;

    printf("enter number of terms:");
    scanf("%d", &n);

    for(int i=2;i<=n;i++)
    {
        float num=2*i-1;
        float den=2*i;
        sum=sum+(num/den);
    }

    printf("Approximate sum: %.1f", sum);

}