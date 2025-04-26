//What is the output of the following program?

#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i ? 0 : i+1; i++) // If i is not zero, condition is 0; else condition is i+1
        printf("%d\n", i);
    return 0;
}

/*
Output is:
0

🧠 Understand the for loop condition:
The condition inside the for is:

i ? 0 : i+1
This is a ternary operator:

If i != 0, use 0.

If i == 0, use i+1 (which is 1 when `i = 0**).

Step-by-Step Execution:
Initially, i = 0.

Evaluate loop condition:

i ? 0 : i+1

0 ? 0 : 0+1 → 1

Condition is 1 (true), so the loop runs.

Inside loop:

printf("%d\n", i);
Prints: 0

After printing, increment i++:

i = 1

Next loop condition:

i ? 0 : i+1

1 ? 0 : i+1

Since i != 0, ternary chooses 0.

Condition is 0 (false), so the loop stops.

✅ Final Output:
0
*/
