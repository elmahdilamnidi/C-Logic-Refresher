#include <stdio.h>
int main(void)
{
    int m, n, k;
    double x;

    m = 1; n = 2; x = 3;
    x /= n = m++ * 2.5;
    printf("X = %f M = %d N = %d\n", x, m, n);

    return 0;
}
