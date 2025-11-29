#include <stdio.h>
int main()
{
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &nums[i]);
    }

    int prefix=1;
    for(int i=0;i<n;i++)
    {
        answer[i]=prefix;
        prefix=prefix*nums[i];
    }

    int suffix=1;
    for(int i=n-1;i>=0;i--)
    {
        answer[i]=answer[i]*suffix;
        suffix=suffix*nums[i];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ", answer[i]);
    }

    return 0;
}