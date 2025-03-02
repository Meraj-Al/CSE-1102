//Sum of Squares Using Recursion
#include <stdio.h>

// Recursive function to compute sum of squares
int sum_of_squares(int n) {
    if (n == 0) return 0;  // Base case
    return (n * n) + sum_of_squares(n - 1);  // Recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of squares of first %d natural numbers is: %d\n", n, sum_of_squares(n));

    return 0;
}
/*
Problem Statement:
Write a recursive function to calculate the sum of squares of the first n natural numbers.
Base Case: If n == 0, return 0 (stopping condition).
Recursive Case: Return n² + sum_of_squares(n-1).
Steps to Solve Using Recursion:
Base Case: If n == 0, return 0.
Recursive Step: Compute n² + sum_of_squares(n-1).
Call the function recursively until reaching n == 0
*/