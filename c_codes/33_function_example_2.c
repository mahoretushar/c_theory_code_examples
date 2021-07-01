/* An example function that takes two parameters 'x' and 'y'
 * as input and return max of two numbers */
#include<stdio.h>

int max(int x, int y)
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}

int main()
{
    int a, b;
    printf("Enter values of a and b\n");
    scanf("%d %d",&a, &b);
    printf("Maximum Number is %d\n",max(a,b));
    return 0;
}
