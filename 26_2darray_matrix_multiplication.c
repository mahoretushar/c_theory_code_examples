/* Matrix Multiplication Program */
#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], i, j, k, r, c;
    printf("Enter No. of Rows: ");
    scanf("%d",&r);
    printf("Enter No. of Columns: ");
    scanf("%d",&c);

    // Inputing First Matrix
    printf("Enter the First Matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    // Inputing Second Matrix
    printf("Enter the Second Matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Multiplication of Matrix is:\n");

    // Logic for matrix multiplication
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            mul[i][j] = 0;
            for(k=0; k<c; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
