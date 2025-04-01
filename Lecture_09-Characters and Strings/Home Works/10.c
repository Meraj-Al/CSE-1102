/*Write a program that reads two strings up to 100 characters and displays how many
times the second string is contained in the first one. The length of the second string
should be less or equal to the first one.*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int countOccurrences(const char *str, const char *sub) {
    int count = 0;
    int strLen = strlen(str);
    int subLen = strlen(sub);

    if (subLen > strLen) {
        return -1; // Invalid case
    }

    for (int i = 0; i <= strLen - subLen; i++) {
        if (strncmp(&str[i], sub, subLen) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    char str[MAX_LEN + 1], sub[MAX_LEN + 1];

    printf("Enter the first string (max 100 chars): ");
    fgets(str, MAX_LEN + 1, stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    printf("Enter the second string (max 100 chars): ");
    fgets(sub, MAX_LEN + 1, stdin);
    sub[strcspn(sub, "\n")] = 0; // Remove newline character

    int occurrences = countOccurrences(str, sub);

    if (occurrences == -1) {
        printf("Error: The second string should not be longer than the first one.\n");
    } else {
        printf("The second string appears %d times in the first string.\n", occurrences);
    }

    return 0;
}

