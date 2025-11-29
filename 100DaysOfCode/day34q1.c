#include <stdio.h>
void main()
{
    int i,n,num,pos;
    
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i] );
    }

    printf("Enter position and number: ");
    scanf("%d %d", &pos, &num);

    for(i=n;i>pos;i--)
    {
       arr[i]=arr[i-1];
    }
    
    arr[pos]=num;

    printf("New array: ");
    for(i=0;i<n+1;i++)
    {
        printf("%d ", arr[i]);
    }
}