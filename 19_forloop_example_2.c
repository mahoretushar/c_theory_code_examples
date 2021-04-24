/* The program will print 2 to the power n values, where n=20 */

#include <stdio.h>

int main() {
    long int p;
    int n;
    p = 1;
    printf("2 to the power n    n \n");
    printf("--------------------------\n");
    for(n=0; n<=20; ++n)
    {
        if(n==0)
            p = 1;
        else
            p = p * 2;
        printf("%10ld %10d\n",p,n);
    }

    return 0;
}
