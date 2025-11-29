#include <stdio.h>
void main()
{
    int n,dig,pro=1;

    printf("enter n:");
    scanf("%d", &n);

    while(n>0)
    {
        dig=n%10;

        if(dig==1 || dig==3 || dig==5 || dig==7 || dig==9)
        {
            pro=pro*dig;
        }

        n=n/10;
    }
    printf("%d", pro);
}