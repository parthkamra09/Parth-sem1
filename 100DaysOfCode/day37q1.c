#include <stdio.h>
void main()
{
    int i,j,r,c,rowsum[100];

    printf("Enter r and c: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0;i<r;i++)
    {
        int sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+arr[i][j];
        }
        rowsum[i]=sum;
    }

    for(i=0;i<r;i++)
    {
        printf("%d ", rowsum[i]);
    }
    
}