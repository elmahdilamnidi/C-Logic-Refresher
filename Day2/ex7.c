#include <stdio.h>
int main()
{
    int a;
    int b;
    float result;


    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Integer division: %d\n", a / b);

    result = (float)a / b;

    printf("Decimal division: %.2f\n", result);

    return 0;
}