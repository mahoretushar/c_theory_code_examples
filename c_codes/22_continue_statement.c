/* Program to demonstrate the use of "contnue" statement
 * The program will calculate the square root of entered number,
 * and will stop when user will enter 9999, and one more thing,
 * it will not calculate the square root of negative number */

#include <stdio.h>
#include<math.h>

int main(void) {
    int n, count, sq;
    printf("Enter 9999 to exit\n");

    for(count=0; count<= 100; count++)
    {
        printf("Enter a Number\n");
        scanf("%d",&n);
        if(n == 9999)
        {
            printf("Getting out of the Code\n");
            break;

        }
        if(n < 0)
        {
            printf("The entered number is negative\n");
            continue;
        }
        sq = sqrt(n);
        printf("sqrroot of %d is: %d\n",n,sq);
    }
    return 0;
}
