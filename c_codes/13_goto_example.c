/* Program to demonstrate the use of "goto" statement
 * Following program calculates the square root of a number,
 * and transfers control to "read" label if number is negative */

#include <stdio.h>

// "math.h" library used for some math functions such as "sqrt()" etc.
#include<math.h>

int main() {
    int x;
    float y;

read: // label

    printf("Enter a Number\n");
    scanf("%d",&x);

    if(x <= 0)
    {
        printf("You have Entered a -ve Number, please enter a +ve number\n");
        goto read; // specifying to jump to read label
    }

    y = sqrt(x);

    printf("sqrt of %d is %f\n",x,y);
    return 0;
}
