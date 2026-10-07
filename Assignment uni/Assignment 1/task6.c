#include <stdio.h>

int main()
{
    /* Experiment: escaped quotation marks (\")
       Wrong: printf("He said "Hello""); -> compiler error
       Corrected: */
    printf("He said \"Hello\"\n");
    printf("My host is called \"The Flowhost\"\n");
    printf("Backslash: \\ and single quote: \'\n");
    return 0;
}
