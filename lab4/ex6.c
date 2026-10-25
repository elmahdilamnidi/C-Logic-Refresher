#include <stdio.h>

int main(void) 
{
    int m, n, z;

    for (m = 1; m <= 20; m++) {

        if (m == 14) {
            break;
        }
        if (m % 3 == 0) {
            continue;
        }
        printf("%d ", m);
    }
    printf("\n");
    return 0
}