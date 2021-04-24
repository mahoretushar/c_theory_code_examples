/* The program will print the Multiplication Table */

#include <stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main() {
    int row, column, y;
    row = 1;
    printf("            Multiplication Table          \n");
    printf("------------------------------------------\n");
    do // outerloop
    {
        column = 1;
        do // innerloop
        {
            y = row * column;
            printf("%4d",y);
            column = column + 1;
        }
        while(column <= COLMAX);
        printf("\n");
        row = row + 1;
    }
    while(row <= ROWMAX);
    printf("------------------------------------------\n");
    return 0;
}
