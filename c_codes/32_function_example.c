/* Program to demonstrate the use of function */
#include <stdio.h>

// declearing functuions
int addition(int a, int b);
int multiplication(int a, int b);

// main function
int main()
{
    printf("Inside main() function\n");
    printf("Calling functions\n\n");
    int ans_1 = addition(10, 20);  // calling addition()
    printf("\n");
    int ans_2 = multiplication(3, 2); // calling multiplication()
    printf("\nBack to main() function\n");
    printf("Printing Results\n");
    printf("Addition of 10+20 = %d\n",ans_1);
    printf("Multilication of 3*2 = %d\n",ans_2);
    return 0;
}

// user defined functions
int addition(int a, int b)
{
    printf("Inside Addition Function\n");
    int ans = a + b;
    return ans;
}

int multiplication(int a, int b)
{
    printf("Inside Multiplication Function\n");
    int ans = a * b;
    return ans;
}
