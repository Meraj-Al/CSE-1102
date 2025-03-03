//Problem 5: Recursive function to check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int left, int right) {
    if (left >= right) return 1;  // Base case
    if (str[left] != str[right]) return 0;  // Mismatch case
    return isPalindrome(str, left + 1, right - 1);  // Recursive call
}

int main() {
    char str[] = "madam";
    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");
    return 0;
}
/*
Steps to Solve:
Compare the first and last characters.
If they are different, return false.
Move towards the center and check again.
Stop when left is greater than or equal to right.
*/