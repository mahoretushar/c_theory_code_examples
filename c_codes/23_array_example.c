/* program to demonstrate the use of "array" */
#include <stdio.h>

int main(void) {

    // declearing integer array of size 10
    int n[10];
    int i, j;

    // initializing arry at runtime
    for(i=0; i<10; i++)
    {
        n[i] = i + 100;
    }

    // printing array
    for(j=0; j<10; j++)
    {
        printf("Element[%d] = %d\n", j, n[j]);
    }

    /* When it comes to an "array" knowledge of "for" loop is essential */

    return 0;
}
