#include <stdio.h>

int main()
{
    /* Experiment: C is case sensitive.
       Wrong versions (try them, observe the error):
         Printf("Hello\n"); -> error: 'Printf' undeclared
         PRINTF("Hello\n"); -> error
         Int main() -> error
       Corrected version: */
    printf("C is case sensitive: printf is lowercase.\n");
    return 0;
}
