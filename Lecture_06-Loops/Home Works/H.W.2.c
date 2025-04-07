//What is the output of the following program?

#include <stdio.h>
int main()
{
    int i;
    for(i = 3; i && i-1; i--)
        printf("%d\n", i);
    return 0;
}
/*Output is:
3
2

teration Details:
First iteration (i = 3):

Condition: i && i-1 → 3 && 3-1 → 3 && 2 → true (since both are non-zero).

i = 3 is printed.

After printing, i-- is executed, so i becomes 2.

Second iteration (i = 2):

Condition: i && i-1 → 2 && 2-1 → 2 && 1 → true (both are non-zero).

i = 2 is printed.

After printing, i-- is executed, so i becomes 1.

Third iteration (i = 1):

Condition: i && i-1 → 1 && 1-1 → 1 && 0 → false (since i-1 is 0).

The loop terminates because the condition is now false.
*/
