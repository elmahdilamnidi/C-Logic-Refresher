#include <stdio.h>

int main(void)
{
    /* Experiment 1: without \n everything stays on one line */
    printf("Hello");
    printf("World");

    /* Experiment 2: with \n each text goes to a new line */
    printf("\n\nHello\n");
    printf("World\n");

    /* Experiment 3: \t inserts a tab (horizontal space) */
    printf("Name:\tMahdi\n");
    printf("Major:\tComputer Engineering\n");
    printf("City:\tTamraght\n");

    return 0;
}