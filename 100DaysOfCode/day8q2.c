#include <stdio.h>
void main()
{
    char a,b,c;
    printf("enter three numbers");
    scanf("%c %c %c",&a, &b, &c);

    if(b<a && c<a)
    {
        printf("Largest number is %c", a);
    }
    else if (a<b && c<b)
    {
        printf("Largest numner is %c", b);
    }
    else if (a<c && b<c)
    {
        printf("Largest number is %c", c);
    }
}