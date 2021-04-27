/* Working on formatted input */

#include <stdio.h>

int main() {

    float a;
    int c;
    printf("enter 3 numbers\n");

    // formatted input is specefied in "scanf()" function
    scanf("%f %*d %2d",&a,&c); // here variable "b" is skipped

    // we can specify formatted output in "printf()" function
    printf("a=%.2f and b=%d\n",a,c);

    return 0;
}
