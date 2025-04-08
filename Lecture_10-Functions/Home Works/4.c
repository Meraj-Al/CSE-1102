/*
Write a recursive function that takes as parameter an integer (i.e., N) and returns
the Nth term of the Fibonacci sequence using the formula F(N) = F(N−1)+F(N−2),
where F(0) = 0 and F(1) = 1. Write a program that reads an integer N between 2
and 40 and uses the function to display the Nth term.
*/
#include <stdio.h>

// Recursive function to find Nth Fibonacci term
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Enter an integer (between 2 and 40): ");
    scanf("%d", &n);
    
    if (n >= 2 && n <= 40) {
        int result = fibonacci(n);
        printf("The %d-th Fibonacci term is: %d\n", n, result);
    } else {
        printf("Invalid input! Please enter a number between 2 and 40.\n");
    }
    
    return 0;
}
/*
Example:
fibonacci(5)
= fibonacci(4) + fibonacci(3)
= (fibonacci(3) + fibonacci(2)) + (fibonacci(2) + fibonacci(1))
= ((fibonacci(2) + fibonacci(1)) + (fibonacci(1) + fibonacci(0))) + ((fibonacci(1) + fibonacci(0)) + 1)
= (((1 + 0) + (1)) + ((1) + (0)) + 1)
= (1 + 1) + (1 + 0) + 1
= 2 + 1 + 1
= 5
*/
