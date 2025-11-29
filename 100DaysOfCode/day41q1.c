#include <stdio.h>
void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    int i, count=0;
    for(i=0;str[i]!=0;i++)
    {
    if(str[i] != '\0')
    {
        count++;
        continue;
    }
    else
    {
        break;
    }
    }

    printf("Length of string: %d", count);

}