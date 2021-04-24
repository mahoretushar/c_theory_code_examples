/* Program to demonstrate the use of two dimensional array,
 * remember that two dimensional array can be represented in matrix format */

#include <stdio.h>

int main() {
    // decleration of 2d array
    int table[2][3];
    // counter variables
    int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value for table[%d][%d]:",i,j);
            scanf("%d", &table[i][j]);
        }
    }
    // display 2d array
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",table[i][j]);
            if(j==2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}
