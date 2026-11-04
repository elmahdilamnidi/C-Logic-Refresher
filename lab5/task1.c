#include <stdio.h>

int main(void) {

    int d1, d2, d3;

    scanf("%d %d %d", &d1, &d2, &d3);

    printf("Name: lamnidi No: 2503010269\n");

    int checkCode = (7 * d1 + 3 * d2 + 5 * d3) % 11;

    printf("Check code: %d\n", checkCode);

    // Part 1a: Student Profile

    int age = 27;
    double height = 1.56;
    char initial = 'e';
    int numberOfBooks = 3;

    printf("\n--- Student Profile ---\n");
    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Initial: %c\n", initial);
    printf("Books: %d\n", numberOfBooks);

    // Part 1b: Type Sizes

    printf("\n--- Type Sizes ---\n");

    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of height: %zu bytes\n", sizeof(height));

    // Part 1c: Naming Rules

    int secondScore = 90;
    float floatValue = 1.5f;
    int totalPrice = 40;

    printf("\n--- Naming Rules ---\n");
    printf("Second Score: %d\n", secondScore);
    printf("Float Value: %.2f\n", floatValue);
    printf("Total Price: %d\n", totalPrice);

    return 0;
}
