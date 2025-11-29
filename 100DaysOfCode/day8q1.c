#include <stdio.h>
void main()
{
    char n;
    printf("enter character:");
    scanf("%c", & n);

    if (n>='A' && n<='Z')
    {
        printf("enter character is an uppercase character");
    }
    else if (n>='a' && n<='z')
    {
        printf("enter character is a lowercase character");
    }
    else if (n>='0' && n<='9')
    {
        printf("enter character is a digit");
    }
    else
    {
        printf("enter character is a special character");
    }
}