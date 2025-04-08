/*Write a recursive function that takes as parameter an integer value n and returns
its factorial n! using the formula n! = n*(n−1)! Write a program that reads a
positive integer less than 170 and uses the function to display its factorial.
*/
#include <stdio.h>

// Recursive function to calculate factorial
double factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}

int main() {
    int n;
    
    printf("Enter a positive integer (less than 170): ");
    scanf("%d", &n);

    if (n >= 0 && n < 170) {
        double result = factorial(n);
        printf("%d! = %.0lf\n", n, result);
    } else {
        printf("Invalid input! Please enter a number between 0 and 169.\n");
    }

    return 0;
}
/*
Example:
factorial(4)
= 4 × factorial(3)
= 4 × (3 × factorial(2))
= 4 × (3 × (2 × factorial(1)))
= 4 × (3 × (2 × 1))
= 4 × (3 × 2)
= 4 × 6
= 24
*/
