#include <stdio.h>

int main()
{
    printf("stdio.h is included, so printf works!\n");
    return 0;
}

/* Experiment: #include <stdio.h>
   Step 1: delete the line below and compile -> you get a warning/error
     "implicit declaration of function 'printf'".
   Step 2: put it back (corrected version) -> compiles with no problem. */