//What is the output of the following program?

#include <stdio.h>
int main()
{
    int i;
    for(i = 0; printf("%d", i++) < 2;)
        ;
    printf("\nEnd = %d\n", i);
    return 0;
}
/*Output is:
012345678910
End = 11
*/
/*
Step-by-step execution:
First iteration:
i = 0

printf("%d", i++):

Prints 0

i becomes 1

printf returns the number of characters printed → 1

1 < 2 → true → loop continues

Second iteration:
i = 1

printf("%d", i++):

Prints 1

i becomes 2

printf returns 1

1 < 2 → true → loop continues

Third iteration:
i = 2

printf("%d", i++):

Prints 2

i becomes 3

printf returns 1

1 < 2 → still true → loop continues
loop runs as long as the number of characters printed by printf is less than 2. Since numbers from 0 to 9 are single-digit (one character), their printf returns 1. When i is 10, it becomes two characters, so printf returns 2, breaking the loop.
*/
