/* Program to demonstrate use of "for" loop */
#include <stdio.h>

int main() {
    int x;

    // printing values in ascending order
    for(x=0; x<=9; x=x+1)
    {
        printf("%d ",x);
    }

    printf("\n");

    // printing values in descending order
    for(x=9; x>=0; x=x-1)
    {
        printf("%d ",x);
    }

    printf("\n");
    return 0;
}
