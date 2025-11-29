#include <stdio.h>
int most(int n,int *arr);
int main()
{
    int n;

    printf("Enter size n of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter elements of array nums: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }

    int result=most(n,nums);

    printf("Majority occuring element in array is: %d", result);

}

int most(int n, int *arr)
{
    int max,count=0,num;

    for(int i=0;i<n;i++)
    {
        if(count == 0)
        {
            num=arr[i];
            count++;
        }
        else if (num==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }


    if(count>n/2)
    {
        return num;
    }
    else
    {
        return -1;
    }
}