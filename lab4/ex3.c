
#include <stdio.h>

int main(void) 
{
    int m, n, z;

    for (m = 1; m <= 5; m++) {
        for (n = 1; n <= 5; n++) {
            z = m * n;
            printf("%d\t", z);
        }
        printf("\n");
    }

    return 0;
}
