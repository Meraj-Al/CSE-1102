// C Program to find the Fibonacci Number using Tree Recursion
#include <stdio.h>
int fibonacci(int n)
{
// Base case
// Fibonacci of 0 and 1 is the number itself
if (n <= 1) {
return n;
}
else {
// Tree recursive calls
return fibonacci(n - 1) + fibonacci(n - 2);
}
}
int main()
{
// function call
int n = fibonacci(3);
// print 5th fibonacci number
printf("%d", n);
return 0;
}

/*
3 Step-by-Step Execution (for n = 3)
fibonacci(3) = fibonacci(2) + fibonacci(1)
              = [fibonacci(1) + fibonacci(0)] + fibonacci(1)
              = [1 + 0] + 1
              = 2

# Recursive Calls Breakdown
fibonacci(3) calls fibonacci(2) and fibonacci(1).
fibonacci(2) further calls fibonacci(1) and fibonacci(0).
Base cases return values directly (fibonacci(1) = 1, fibonacci(0) = 0).
Summing up the results, fibonacci(3) = 2.

# Tree Recursion Visualization
         fibonacci(3)
        /            \
   fibonacci(2)    fibonacci(1)
   /         \
fibonacci(1) fibonacci(0)

*/
