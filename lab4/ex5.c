
#include <stdio.h>

int main(void) 
{
    int m, n, z;

    printf("Enter the height: ");
    scanf("%d", &z);

    for (m = 1; m <= z; m++) {
        for (n = 1; n <= m; n++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
