// Ans - Given Program is

#include <stdio.h>

int main()
{
    int x = 5, m, k = 1, n;
    float y =2.5;
    m = x * 1000 + y * 10;
    k = m/1000 + x;
    n = (x == y) ? k : m;
    printf("%d\n%d\n%d\n",m,k,n);
    return 0;
}
