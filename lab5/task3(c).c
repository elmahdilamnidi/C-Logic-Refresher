#include <stdio.h>

int main(void) {

    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);

    printf("Name: lamnidi No: 2503010269\n");

    int checkCode = (7 * d1 + 3 * d2 + 5 * d3) % 11;
    printf("Check code: %d\n", checkCode);

    // Mistake 1: age was not initialized.
    int age = 27;

    double price = 9.50;
    int total = 17, count = 4;

    // Mistake 2: Integer division was used.
    double avg = (double)total / count;

    // Mistake 3: Wrong format specifier for double.
    printf("%.2f\n", price);

    printf("Age: %d\n", age);
    printf("%.2f\n", avg);

    return 0;
}
