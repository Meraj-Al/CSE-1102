//What is the output of the following program?

#include <stdio.h>
int main()
{
    int a = 4;
    printf("Num = %d\n", !!a);
    return 0;
}
/*Output is:
1

Double Logical NOT (!!a)

!a: The logical NOT (!) operator converts a to a boolean (true/false).
If a is nonzero, !a becomes 0 (false).
If a is 0, !a becomes 1 (true).
*/
