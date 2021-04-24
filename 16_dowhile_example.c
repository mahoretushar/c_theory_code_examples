/* Program to demonstrate the use of "dowhile" looping statement
 * To see the effect of do while just decrease the value of x */

#include <stdio.h>

int main() {
    int x = 50;

    do
    {
        printf("inside while loop\n");
        x = x + 10;
    }
    while(x <= 10);

    printf("Statement X\n");
    return 0;
}
