#include <stdio.h>
int main(void)
{
    float a;
    int m, n;

    m = 1;
    n = 2;
    a = 3;

    a /= n = ++m * 2.5;

    printf("A = %f M = %d N = %d\n", a, m, n);

    return 0;
}