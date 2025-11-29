#include <stdio.h>
void prevgreaterelement(int n, int *arr);
int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    prevgreaterelement(n,arr);

}

void prevgreaterelement(int n, int *arr)
{
    
    for(int i=0;i<n;i++)
    {
        int prev=-1;
        for(int j=i-1;j>=0;j--)
        {
           if(arr[j]>arr[i])
           {
            prev=arr[j];
            break;
           }
        }

        if (i == n - 1)
        printf("%d", prev);
        else
        printf("%d, ", prev);
    }
}