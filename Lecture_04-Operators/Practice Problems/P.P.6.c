//What is the output of the following program?

#include <stdio.h>
int main()
{
    int a = 4, b = 3, c = 1;
    a += b -= ++c;
    printf("%d %d %d\n", a, b, c);
    return 0;
}
/*Output is:
5 1 2
*/

//The compound operator are executed from right to left
