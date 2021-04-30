/* main file */

#include<stdio.h>
#include"math_fun.h" // user defined header file

int main()
{
    int ans_1, ans_2;
    ans_1 = addition(10, 20);
    ans_2 = multiplication(3, 2);
    printf("%d %d\n",ans_1, ans_2);
    return 0;
}
