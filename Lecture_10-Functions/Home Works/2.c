//What is the output of the following program?
#include <stdio.h>
int a = 4; /* Global variable. */
int main()
{
    if(a == 0)
        return 0;
    else
    {
        printf("%d ", a-- );
        main();//Call main again(recursion)
    }
    return 0;
}
/*
Step-by-step explanation:

a is a global variable initialized to 4.

main() checks if a == 0.

If yes, return.

If not, print a, then decrease a by 1, and call main() again (recursion).

First call to main():

a = 4 → not 0

printf("%d ", 4) → prints 4

then a-- → now a = 3

call main() again

Second call to main():

a = 3

printf("%d ", 3) → prints 3

a-- → now a = 2

call main() again

Third call to main():

a = 2

printf("%d ", 2) → prints 2

a-- → now a = 1

call main() again

Fourth call to main():

a = 1

printf("%d ", 1) → prints 1

a-- → now a = 0

call main() again

Fifth call to main():

a = 0

So it just return 0;

No more printing, recursion ends.

✅ Final Output:
4 3 2 1 
*/
