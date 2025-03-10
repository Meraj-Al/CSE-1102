//What is the output of the following program?
#include <stdio.h>
int main()
{
    float a = 3.1;
    if(a == 3.1)
        printf("Yes ");
    else
        printf("No ");
   printf("%.9f\f", a-3.1);
    return 0;
}
/*
Here, 3.1 in the source code is treated as a double (double has higher precision than float).
Since a (which is float) is slightly different from 3.1 (double), the condition fails.
The result is "No" instead of "Yes".

The second printf statement:
printf("%.9f\f", a-3.1);

There are two issues here:

Incorrect Escape Sequence \f

\f is a form feed character (used in old printers).
It should be \n (newline) instead.
Checking Precision Difference

a - 3.1 should be close to 0 but not exactly 0.
Printing it with 9 decimal places shows the small floating-point error.
*/
