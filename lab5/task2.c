#include <stdio.h>

int main(void) {

    // Read personal digits
    int d1, d2, d3;

    scanf("%d %d %d", &d1, &d2, &d3);

    // Student Information
    printf("Name: lamnidi No: 2503010269\n");

    int checkCode = (7 * d1 + 3 * d2 + 5 * d3) % 11;

    printf("Check code: %d\n", checkCode);


    // Part 2a: Circle

    const double PI = 3.14159;
    double radius;

    printf("\nEnter radius: ");
    scanf("%lf", &radius);

    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);


    // Part 2b: Integer and Decimal Division

    int a, b;

    printf("\nEnter a and b: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }

    int intQuotient = a / b;
    int remainder = a % b;
    double exactQuotient = (double)a / b;

    printf("\nInteger quotient = %d\n", intQuotient);
    printf("Remainder = %d\n", remainder);
    printf("Exact quotient = %.2f\n", exactQuotient);

    return 0;
}
