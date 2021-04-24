// What is the output

#include <stdio.h>

int main()
{
    int i = 15, j =4, m, n;
    m = i > 9; // 1
    n = j > 4 && j != 2; // 0 && 1 = 0
    printf("m=%dn=%d",m,n);
    return 0;
}
