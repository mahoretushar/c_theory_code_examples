/* The program will calculate provided power of a provided number */
#include <stdio.h>

int main() {
    int x, y, count, n;
    printf("Enter values of x and n\n");
    scanf("%d %d",&x,&n);
    y = 1;
    count = 1;

    while(count <= n)
    {
        y = y * x;
        count++;
    }

    printf("%d to the power %d is: %d\n",x,n,y);
    return 0;
}
