#include <stdio.h>

int main(void) {

    // Read personal digits
    int d1, d2, d3;
    scanf("%d %d %d", &d1, &d2, &d3);

    // Student Information
    printf("Name: lamnidi No: 2503010269\n");

    int checkCode = (7 * d1 + 3 * d2 + 5 * d3) % 11;
    printf("Check code: %d\n", checkCode);


    // Part 3a: Average of Three Scores
    int count = 0;
    int total = 0;
    int score;

    printf("\nEnter score 1: ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    count = count + 1;
    total = total + score;

    printf("Enter score 2: ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    count = count + 1;
    total = total + score;

    printf("Enter score 3: ");
    if (scanf("%d", &score) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    count = count + 1;
    total = total + score;

    double average = (double)total / count;

    printf("\nTotal: %d\n", total);
    printf("Count: %d\n", count);
    printf("Average: %.2f\n", average);


    // Part 3b: Swap

    int x = 9;
    int y = 16;
    int temp;

    printf("\nBefore swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    temp = x;
    x = y;
    y = temp;

    printf("\nAfter swap:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}
