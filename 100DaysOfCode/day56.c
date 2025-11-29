#include <stdio.h>
void nextgreaterelement(int n, int *arr);
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

    nextgreaterelement(n,arr);

}

void nextgreaterelement(int n, int *arr)
{
    
    for(int i=0;i<n;i++)
    {
        int next=-1;
        for(int j=i+1;j<n;j++)
        {
           if(arr[j]>arr[i])
           {
            next=arr[j];
            break;
           }
        }

        if (i == n - 1)
        printf("%d", next);
        else
        printf("%d, ", next);
    }
}