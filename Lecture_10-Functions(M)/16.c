//Use Recursion to find factorial 
#include <stdio.h>
// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;  // Base case: 0! = 1! = 1
    else
        return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    long long fact;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative numbers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Function call
        fact = factorial(num);
        printf("Factorial of %d is %lld\n", num, fact);
    }

    return 0;
}

