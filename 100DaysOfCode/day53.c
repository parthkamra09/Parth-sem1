#include <stdio.h>
int pivot(int *num,int n);
int main()
{
    int n;
    printf("Enter index: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int result=pivot(arr,n);
    printf("Pivot index: %d", result);

}

int pivot(int *num, int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
       total=total+num[i];
    }

    int leftsum=0;
    for(int i=0;i<n;i++)
    {
        int rightsum=total-num[i]-leftsum;
        if(rightsum==leftsum)
        {
            return i;
        }
        leftsum=leftsum+num[i];
    }
    return -1;
}