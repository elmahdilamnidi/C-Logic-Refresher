#include <stdio.h>
int main(void)
{
    int sco;
    int tot = 0;
    int m; float aver;

    for(m=1; m<=5; m+=1) {
        printf ("Enter score %d: ", m);
        scanf ("%d", &sco);
        tot = tot + sco;
    }
    aver = tot / 5.0;
    printf ("Total = %d\n", tot);


    return 0;
}