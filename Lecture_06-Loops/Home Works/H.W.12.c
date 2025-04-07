//What is the output of the following program?

#include <stdio.h>
int main()
{
   int i = -2;
    while(i-6)
    {
        printf("One ");
        i++;
        while(!(i+1))
        {
            printf("Two ");
            i--;
        }
        i += 2;
    }
    return 0;
}
/*Output is:
One Two One One

🔁 Iteration-by-Iteration Trace:
🟢 Initial value:
i = -2
🔄 Iteration 1:
i - 6 = -8 ≠ 0 → loop continues

printf("One ") → prints One

i++ → i = -1

Inner while (!(i + 1)) → i + 1 = 0 → condition true

printf("Two ") → prints Two

i-- → i = -2

Inner loop again: i + 1 = -1 → not 0 → break inner loop

i += 2 → i = 0

🔄 Iteration 2:
i - 6 = -6 ≠ 0 → continue

printf("One ") → prints One

i++ → i = 1

!(i + 1) = !(2) → false → skip inner loop

i += 2 → i = 3

🔄 Iteration 3:
i - 6 = -3 ≠ 0 → continue

printf("One ") → prints One

i++ → i = 4

!(i + 1) = !(5) → false → skip inner loop

i += 2 → i = 6

🔁 Exit loop:
i - 6 = 0 → loop ends

✅ Final Output:
One Two One One 
*/
