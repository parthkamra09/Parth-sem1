#include <stdio.h>
int piv(int n,int *num);
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        arr[i]=i+1;
    }

    int result=piv(n,arr);
    printf("Pivot integer: %d",result);
}

int piv(int n,int *num)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+num[i];
    }

    int left=0;
    for(int i=0;i<n;i++)
    {
        int right=total-num[i]-left;
        if(right==left)
        {
            return i+1;
        }
        left=left+num[i];
    }

    return -1;
}