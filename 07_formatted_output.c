/* Program to display how we can print formatted output */

#include <stdio.h>

int main() {
    float y = 98.7654;
    printf("%f\n",y);
    printf("%7.4f\n",y);
    printf("%7.2f\n",y);
    printf("%10.2e\n",y);
    return 0;
}
