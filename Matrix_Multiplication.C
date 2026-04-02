#include <stdio.h>
void main()
{
    int A[3][4], B[4][2], C[3][2]={0};
    int i, j, k;
    printf("Enter the Elements for matrix A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
     printf("Enter the Elements for matrix B: ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<4;k++)
            {
                C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
            }
        }
    }
    printf("The Resultant Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           printf(" %d ",C[i][j]); 
        }
        printf("\n");
    }
}
