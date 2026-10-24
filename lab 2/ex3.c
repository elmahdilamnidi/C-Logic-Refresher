#include <stdio.h>
int main(void)
{
    float a;
    int m, n, l;

    a = 1;
    m = 2;
    n = 3;
    l = 4;

    a -= l *= n /= m %= 5;

    printf("A = %f M = %d N = %d L = %d\n", a, m, n, l);

    return 0;
}