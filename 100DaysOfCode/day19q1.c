#include <stdio.h>
void main()
{
    int a,b,lcm;

    printf("enter a and b:");
    scanf("%d %d", &a, &b);

    for(int i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d", lcm);
}