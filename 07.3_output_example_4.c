// Find the output of the program if user input values 8888, 5432, 4444, 5555

#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%1d %2d %3d %4d",&a,&b,&c,&d);
    // a = 8, b = 54, c = 444, d = 5555
    printf("sum = %d",a+b+c+d);
    return 0;
}

// Ans: In the given prog stdio.h is not present, so basically the program will not run
// But if we assume that #include<stdio.h> is present then the output is as follows:
// Output:
// sum = 6061
