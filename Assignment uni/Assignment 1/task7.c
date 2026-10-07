#include <stdio.h>

int main()
{
    /* Experiment: formatted output */
    int age = 21;
    float price = 12.5;
    char grade = 'A';
    char name[] = "Mahdi";

    printf("Name : %s\n", name);
    printf("Age  : %d\n", age);
    printf("Price: %.2f\n", price);
    printf("Grade: %c\n", grade);
    printf("Aligned: |%5d|%-5d|%05d|\n", 42, 42, 42);
    return 0;
}
