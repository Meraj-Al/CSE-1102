// C Program to Illustrate the Indirect Recursion

#include <stdio.h>
void functionA(int n)
{
if (n < 1) {
return;
}
printf("%d ", n);
n = n - 1;
// Indirect recursive call to functionB
functionB(n);
}
void functionB(int n)
{
if (n < 2) {
return;
}
printf("%d ", n);
n = n / 2;
// Indirect recursive call to functionA
functionA(n);
}
int main()
{
// Function call
functionB(20);
return 0;
}
/*
# Step-by-Step Execution (Starting with functionB(20))
functionB(20) prints 20 and calls functionA(10).
functionA(10) prints 10 and calls functionB(10).
functionB(10) prints 10, updates n = 5, and calls functionA(5).
functionA(5) prints 5 and calls functionB(5).
functionB(5) prints 5, updates n = 2, and calls functionA(2).
functionA(2) prints 2 and calls functionB(2).
functionB(2) prints 2, updates n = 1, and calls functionA(1).
functionA(1) prints 1 and exits recursion.

# Recursive Calls Breakdown
functionB(20) → prints 20 → calls functionA(10)
functionA(10) → prints 10 → calls functionB(10)
functionB(10) → prints 10 → calls functionA(5)
functionA(5)  → prints 5  → calls functionB(5)
functionB(5)  → prints 5  → calls functionA(2)
functionA(2)  → prints 2  → calls functionB(2)
functionB(2)  → prints 2  → calls functionA(1)
functionA(1)  → prints 1  → ends recursion

Output
20 10 10 5 5 2 2 1

*/
