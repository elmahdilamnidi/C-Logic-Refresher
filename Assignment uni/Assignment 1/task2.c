#include <stdio.h>   

int main(void)
{
    printf("C is case sensitive: printf works, Printf does not.\n");
    return 0;
}


/*Task 2: #include <stdio.h> and case sensitivity experiments
 *
 * Each experiment below is shown as a BROKEN version (in comments) with the
 * compiler message observed, followed by the CORRECTED code that actually runs.
 
 * Experiment A: remove  #include <stdio.h>
 *     int main(void) { printf("Hi\n"); return 0; }
 *   Result: warning/error -> implicit declaration of function 'printf'
 *           (the compiler doesn't know what printf is)
 *   Fix:    add  #include <stdio.h>  at the top.
 *
 * Experiment B: wrong case  ->  Printf("Hi\n");
 *   Result: error -> implicit declaration of function 'Printf'
 *           / undefined reference to 'Printf'
 *   Reason: C is CASE SENSITIVE: printf != Printf != PRINTF
 *   Fix:    write it exactly as  printf
 *
 * Experiment C: wrong case  ->  Int main(void)   or   Return 0;
 *   Result: error -> unknown type name 'Int' / syntax error
 *   Fix:    keywords are lowercase: int, return
 *
 * Experiment D: missing semicolon  ->  printf("Hi\n")
 *   Result: error -> expected ';' before 'return'
 *   Fix:    every statement ends with ;
 */
