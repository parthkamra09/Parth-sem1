#include <stdio.h>
void main()
{
    int r1,c1,i,j,r2,c2;

    printf("Enter r1 and c1: ");
    scanf("%d %d", &r1, &c1);

    int m1[r1][c1];

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter r2 and c2: ");
    scanf("%d %d", &r2, &c2);

    int m2[r2][c2];

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    
    int sum[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    
}