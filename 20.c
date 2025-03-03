//C Program to Find the Factorial of a Natural Number using Tail Recursion.
// C program to find the factorail using tail recursion
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