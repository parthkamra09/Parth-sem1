#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int count1=0,count2=0,count3=0;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            count1++;
        }
        if(str[i]<='9' && str[i]>='0')
        {
            count2++;
        }
        if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ' || (str[i]<='9' && str[i]>='0') || str[i]=='\n'))
        {
            count3++;
        }
    }

    printf("Spaces: %d, Digits: %d and special characters: %d", count1,count2,count3);
    
}