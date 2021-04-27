/* Program to demonstarte the use of "while" loop */

#include <stdio.h>

int main() {

    int sum = 0;
    int n = 1;

    while(n <= 50) // checking condition inside while to stop the loop
    {
        sum = sum + n;
        n = n + 1; // increment statement
    }

    printf("sum = %d\n",sum);
    return 0;
}
