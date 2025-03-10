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

a - 4 evaluates to 4 - 4 = 0
(b++ == c) evaluates:
b is 5, c is 6.
b++ == c means first comparing b with c (i.e., 5 == 6 which is false or 0).
Then b is incremented to 6.
*/
