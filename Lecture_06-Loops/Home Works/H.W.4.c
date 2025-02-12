//What is the output of the following program?

#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i < 3; printf("%d ", ++i))
        ; /* Empty block of statements. */
    return 0;
}
/*
Output is:
1 2 3
*/
