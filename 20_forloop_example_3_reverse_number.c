/* The program will reverse the entered number and print it */

#include <stdio.h>

int main(void) {
    int on, rn = 0, c;
    printf("Enter a four digit number\n");
    scanf("%d",&on);

    for(c=0; c<4; c++)
    {
        rn = rn * 10 + on % 10; // logic to reverse number
        on = on / 10;
    }

    printf("%d\n",rn);
    return 0;
}
