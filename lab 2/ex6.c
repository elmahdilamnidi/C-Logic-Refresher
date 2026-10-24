#include <stdio.h>

int main(void)
{
    int m, n, k;
    double x;

    x = 5; m = 4; n = 3; k = 2;
    x *= 1 + (m %= 1 + (n /= -1 + ++k));
    printf("X = %f M = %d N = %d K = %d\n", x, m, n, k);

    return 0;
}