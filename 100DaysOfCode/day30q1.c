#include <stdio.h>
void main()
{
    int n,even=0,odd=0;
    printf("Enter index of specified array: ");
    scanf("%d", &n);
    
    int arr[n];

    printf("enter value of array: ");

    for(int i=0; i<n; i++)
    {
       scanf("%d", &arr[i]);

       if(arr[i]%2==0)
       {
          even++;
       }
       else
       {
          odd++;
       }
    }   

    printf("Even count: %d\nOdd count: %d", even, odd);

}