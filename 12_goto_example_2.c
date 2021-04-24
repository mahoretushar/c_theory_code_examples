/* The program will calculate the square root of 5 numbers */

#include <stdio.h>
#include<math.h>
int main() {
    double x,y;
    int count = 1;
    printf("Enter 5 values one by one\n");
read:
    printf("Enter %d value\n",count);
    scanf("%lf",&x);

    if(x < 0)
        printf("value %d is negative\n",count);
    else
    {
        y = sqrt(x);
        printf("sqrt of %lf is: %lf\n",x,y);
    }
    count = count + 1;
    if(count <= 5)
    {
        goto read;
    }
    printf("End of Program\n");
    return 0;
}
