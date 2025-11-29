#include <stdio.h>
void main()
{
    int n,num,i,pos=-1;

    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n+1];

    printf("enter value of array: ");

    for(i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);
    }
    
    printf("Enter the number which you want to insert: ");
    scanf("%d", &num);

    for(i=0;i<n;i++)
    {
        if(num<arr[i])
        {
            pos=i;
            break;
        }
    }

    if(pos == -1)
    {
        pos=n;
    }

    for(i=n;i>pos;i--)
    {  
        arr[i]=arr[i-1];
    }

    arr[pos]=num;

    printf("Array after insertion: ");
    for (i=0;i<n+1;i++)
    {
    printf("%d ", arr[i]);
    }
}