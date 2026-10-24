#include <stdio.h>

int main(void)
{
    int m, n, k;
    double x;

    m = n = 10;
    m %= n = (n = 5) % (m = 3);
    printf("M = %d N = %d\n", m, n);

    return 0;
}