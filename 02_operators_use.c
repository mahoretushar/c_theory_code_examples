/* Progrma to demonstrate the use of Operators along with Expressions */
#include <stdio.h>

int main() {

    // decleration of "float" variables
    float a,b,c,d,x,y,z;

    // initialization of variables
    a = 9, b = 12, c = 3, d = 1;

    // implementation of expressions using various operators
    x = a * b - c;
    y = b / c * a;
    z = a - b / c + d;

    // displaying the output on the terminal using "printf()" function
    printf("a=9, b=12, c=3, d=1\n");
    printf("x = a * b - c = %f\n",x);
    printf("y = b / c * a = %f\n",y);
    printf("z = a - b / c + d = %f\n",z);

    return 0;
}
