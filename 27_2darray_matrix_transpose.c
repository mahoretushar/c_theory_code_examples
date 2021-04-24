/* Transpose of a Matrix */
#include<stdio.h>
int main()
{
    int a[10][10], ta[10][10], i, j, r, c;
    printf("Enter number of Rows: ");
    scanf("%d",&r);
    printf("Enter number of Columns: ");
    scanf("%d",&c);
    printf("Enter the values of Matrix");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            ta[j][i] = a[i][j];
        }
    }

    printf("Transpose of Matrix A is:\n");
        for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",ta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
