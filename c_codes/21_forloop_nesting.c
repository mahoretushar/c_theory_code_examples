/* Printing Pattern using nested for loop */

#include <stdio.h>
int main() {
    int n, i, y, x = 40;
    printf("enter a number\n");
    scanf("%d", &n);
    for (y = 0; y <= n; y++) {
        for (i = 0 - y; i <= y; i++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
