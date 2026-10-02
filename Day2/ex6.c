#include <stdio.h>
int main()
{
    int a;
    int b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter seconde number: ");
    scanf("%d", &b);
    
    printf("sum: %d\n", a+b);
    printf("Difference: %d\n", a-b);
    printf("Multiplication: %d\n", a*b);
    printf("Division: %d\n", a/b);

    return 0;
}