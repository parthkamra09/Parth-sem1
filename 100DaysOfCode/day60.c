#include <stdio.h>
void main()
{
    int n,k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) 
    {
        printf("Invalid subarray size.\n");
    }

    printf("Maximas of each subarray 0f %d size is: ",k);

    for (int i = 0; i <= n - k; i++) 
    {
        int max = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) 
            {
                max = arr[j];
            }
        }
        printf("%d ", max);
    }
}