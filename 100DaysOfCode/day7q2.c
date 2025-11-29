#include <stdio.h>
void main()
{
    char n;
    printf("enter charcter:");
    scanf("%c", & n);

    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u')
    {
        printf("enter character is a vowel");
    }
    else
    {
        printf("enter character is consonant");
    }
}