#include <stdio.h>
void main()
{
    int i,index,n;

    printf("Enter the n: ");
    scanf("%d", &n);

    int arr[100];

    printf("enter the elememts of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index to be deleted: ");
    scanf("%d", &index);

    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    printf("New array after deletion is: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d ", arr[i]);
    }

}