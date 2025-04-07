/*
Write a program that produces the following output.
*****
****
***
**
*
*/

#include <stdio.h>
int main()
{
    int i, j;
    for(i = 5; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
/*
Initial Setup:
i starts at 5.

j is used to control how many stars to print in each row.

🔄 Iteration 1 (i = 5):
Outer loop (i = 5): We print 5 stars.

Inner loop runs from j = 1 to j = 5, printing *****

After the inner loop, we print a newline (\n).

Output after Iteration 1:

*****
🔄 Iteration 2 (i = 4):
Outer loop (i = 4): We print 4 stars.

Inner loop runs from j = 1 to j = 4, printing ****

After the inner loop, we print a newline.

Output after Iteration 2:

*****
****
🔄 Iteration 3 (i = 3):
Outer loop (i = 3): We print 3 stars.

Inner loop runs from j = 1 to j = 3, printing ***

After the inner loop, we print a newline.

Output after Iteration 3:

*****
****
***
🔄 Iteration 4 (i = 2):
Outer loop (i = 2): We print 2 stars.

Inner loop runs from j = 1 to j = 2, printing **

After the inner loop, we print a newline.

Output after Iteration 4:

*****
****
***
**
🔄 Iteration 5 (i = 1):
Outer loop (i = 1): We print 1 star.

Inner loop runs from j = 1 to j = 1, printing *

After the inner loop, we print a newline.

Output after Iteration 5:

*****
****
***
**
*
*/
