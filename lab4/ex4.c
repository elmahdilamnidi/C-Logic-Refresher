
#include <stdio.h>

int main()
{
    int m;
    int tot = 0;
    int cou = 0;
    float aver;

    printf("Enter a score (-1 to stop): ");
    // Read scores until the sentinel value -1 is entered
    while (m != -1) {
        scanf("%d", &m);
        if (m != -1) {
            tot += m;
            cou++;
        }
        printf("Enter a score (-1 to stop): ");
    }

    if (cou > 0) {
        aver = (float) tot / cou;
        printf("Count = %d\n", cou);
        printf("Average = %.2f\n", aver);
    } else {
        printf("No scores entered.\n");
    }

    return 0;
}
