#include <stdio.h>
int main(void)
{
    int m, n, l;

    m = n = l = 1;
    l += -m++ + ++n ;

    printf("M = %d N = %d L = %d\n", m,n,l);

    return 0;
}