/* Program to print array in reverse order,
 * and it also demonstartes how to use "for" to take input
 * from user and save it to variable */

#include <stdio.h>
int main() {
    int n[10], i;
    printf("Enter 5 values\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Reverse Order\n");

    for(i=4; i>=0; i--)
    {
        printf("%d ",n[i]);
    }

    printf("\n");
    return 0;
}
