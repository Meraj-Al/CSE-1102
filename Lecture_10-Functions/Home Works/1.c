/*
Write a function that takes an integer parameter (i.e., n) and returns the result of
1 pow(3) + 2 pow(3) + 3 pow(3)+ … + n pow(3). Write a program that reads a positive integer up to 1000 and
uses the function to display the result of the expression.
*/
#include <stdio.h>

// Function to calculate the sum of cubes
int sumOfCubes(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i * i; // cube of i
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter a positive integer (up to 1000): ");
    scanf("%d", &n);

    if (n > 0 && n <= 1000) {
        int result = sumOfCubes(n);
        printf("The result is: %d\n", result);
    } else {
        printf("Invalid input! Please enter a number between 1 and 1000.\n");
    }

    return 0;
}

