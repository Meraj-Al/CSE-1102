//What is the output of the following program?

#include <stdio.h>
int main()
{
    int a = 4, b = 5, c = 6;
    printf("%d\n", (a-4) || (b++ == c));
    return 0;
}
/*Output is:
0
*/
