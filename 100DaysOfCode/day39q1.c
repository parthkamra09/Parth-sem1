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

    int diag[r];
    for(i=0;i<r;i++)
    {
        diag[i]=arr[i][i];
    }

    int dis=1;

    for(i=0;i<r;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(diag[j]==diag[i])
            {
                dis=0;
                break;
            }
        }
        if(dis==0)
        break;
    }
    
    if(dis==1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}