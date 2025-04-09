//Problem 5: Recursive function to check if a string is a palindrome
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int i, int j) {
    if (i >= j)
        return 1;  // Base case: done checking
    if (str[i] != str[j])
        return 0;  // Mismatch found
    return isPalindrome(str, i + 1, j - 1);  // Check next pair
}

int main() {
    char str[101];

    printf("Enter a string: ");
    scanf("%s", str);  // Read a word (no spaces)

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}

/*
Steps to Solve:
Compare the first and last characters.
If they are different, return false.
Move towards the center and check again.
Stop when left is greater than or equal to right.
*/
