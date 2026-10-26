
#include <stdio.h>

int main()
{
    int m, n, z;
    do {
        printf("\n1. Say hello\n");
        printf("2. Countdown from 5 to 1\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &z);

        if (z == 1) {
            printf("Hello!\n");
        }
        else if (z == 2) {
            // Count down from 5 to 1
            for (m = 5; m >= 1; m--) {
                printf("%d ", m);
            }
            printf("\n");
        }
        else if (z != 0) {
            printf("Invalid choice\n");
        }

    } while (z != 0);

    printf("Goodbye!\n");

    return 0;
}
