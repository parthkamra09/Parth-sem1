#include <stdio.h>
void main()
{
    int i,j,r,c;

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

    int diag[r],sum=0;
    for(i=0;i<r;i++)
    {
        diag[i]=arr[i][i];
        sum=sum+diag[i];
    }
    printf("%d",sum);
}