#include <stdio.h>
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        printf("%c\n", ch);
    }
}