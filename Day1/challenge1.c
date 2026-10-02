#include <stdio.h>
int main()
{
    int age = 21;
    float height = 1.80;
    printf("Name: Mahdi \n");
    printf("Age: %d\n", age);
    printf("height: %.2f\n", height);
    age = 22;
    printf("Age next year: %d\n", age);
    printf("height: %.2f\n", height);
    return 0;
}