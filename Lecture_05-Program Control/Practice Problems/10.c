//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a, b = 0;
    a = b ? 50 : 200;
    printf("Val = %d\n", a);
    return 0;
}
//Output is: Val = 200

/*
The ternary operator is a shorthand for an if-else statement.
If b is true (nonzero), the expression before the colon (50) is assigned to a.
If b is false (0), the expression after the colon (200) is assigned to a.
*/
