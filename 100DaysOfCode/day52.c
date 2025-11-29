#include <stdio.h>
int main()
{
    int n,x,result=-1;
    printf("Enter index of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter x: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)
        {
            continue;
        }
        else if(arr[i]>=x)
        {
            result=i;
            break;
        }
        else
        {
            result=-1;
        }
    }

    printf("Required index is: %d", result);

}