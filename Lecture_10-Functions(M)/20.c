//C Program to Find the Factorial of a Natural Number using Tail Recursion.

#include <stdio.h>
int factorialTail(int n, int res)
{
// Base case
if (n == 1 || n == 0) {
return res;
}
else {
res = res * n;
// Tail recursive call
return factorialTail(n - 1, res);
}
}
int main() {
int n = 5;
int fact1 = factorialTail(n, 1);
printf("Resursive Factorial of %d: %d \n", n, fact1);
return 0;
}

/*
Step-by-Step Execution
Let's analyze the function call with n = 5 and res = 1 (from main()):

First Call: factorialTail(5, 1)
res = 1 * 5 = 5
Calls factorialTail(4, 5)
Second Call: factorialTail(4, 5)
res = 5 * 4 = 20
Calls factorialTail(3, 20)
Third Call: factorialTail(3, 20)
res = 20 * 3 = 60
Calls factorialTail(2, 60)
Fourth Call: factorialTail(2, 60)
res = 60 * 2 = 120
Calls factorialTail(1, 120)
Fifth Call (Base Case): factorialTail(1, 120)
Since n == 1, return res (which is 120).


Visualization of Call Stack

factorialTail(5, 1)
    → factorialTail(4, 5)
        → factorialTail(3, 20)
            → factorialTail(2, 60)
                → factorialTail(1, 120)  [Base case: Returns 120]

*/
