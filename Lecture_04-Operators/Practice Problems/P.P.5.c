//What is the output of the following program?

#include <stdio.h>
int main()
{
    int a = 4, b = 3, c = 5;
    printf("%d\n", (a < b) == !(c > b));
    return 0;
}
/*Output is:
1
*/
