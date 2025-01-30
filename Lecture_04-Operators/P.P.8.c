//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a = 1;
    printf("%d\n", (a > 0) && (--a > 0));
    return 0;
}
/*Output is:
0
*/
