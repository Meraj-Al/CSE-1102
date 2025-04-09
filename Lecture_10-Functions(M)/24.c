//Write a recursive function to count the digits of a positive integer (do also for sum of digits)

#include <stdio.h>

int countDigits(int n) {
    if (n == 0) return 0;  // Base case
    return 1 + countDigits(n / 10);  // Recursive call
}
int sumDigits(int n) {
    if (n == 0) return 0;  // Base case
    return (n % 10) + sumDigits(n / 10);  // Recursive call
}
int main() {
    int num = 12345;
    printf("Number of digits: %d\n", countDigits(num));
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}
/*
Steps to Solve (Counting Digits):
If the number is 0, stop (base case).
Remove the last digit using integer division (n / 10).
Add 1 for each removed digit and call the function again
If the number is 0, return 0 (base case).
Extract the last digit using n % 10.
Add this digit to the sum of the remaining digits (n / 10).
*/
