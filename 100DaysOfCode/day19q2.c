#include <stdio.h>
void main()
{
    int n,dig,d=0;

    printf("enter n:");
    scanf("%d", &n);

    while(n>0)
    {
        dig=n%10;
        d=d+dig;
        n=n/10;
    }
    printf("%d",d);
}