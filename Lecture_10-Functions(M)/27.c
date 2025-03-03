//Problem 6: Recursive function to copy one array to another
#include <stdio.h>

void copyArray(int *src, int *dest, int size, int index) {
    if (index >= size) return;  // Base case
    dest[index] = src[index];  // Copy element
    copyArray(src, dest, size, index + 1);  // Recursive call
}

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int dest[5];
    int size = sizeof(src) / sizeof(src[0]);
    
    copyArray(src, dest, size, 0);
    
    printf("Copied array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", dest[i]);
    printf("\n");

    return 0;
}
/*
Steps to Solve:
If we reach the end of the array, stop (base case).
Copy the current element from source to destination.
Move to the next index and repeat.
*/