//Problem 1: Recursive function to search for an element in an array
#include <stdio.h>

int search(int arr[], int size, int target, int index) {
    if (index >= size) return -1;  // Base case: reached end of array
    if (arr[index] == target) return index;  // Element found
    return search(arr, size, target, index + 1);  // Recursive call
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;
    int result = search(arr, size, target, 0);
    
    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found\n");
    
    return 0;
}
/*
Steps to Solve:
Start from the first index of the array.
If the current element matches the target, return the index.
Otherwise, move to the next index and call the function recursively.
If we reach the end of the array without finding the element, return -1.
The function checks if the current index contains the target value.
If not, it moves to the next index using recursion until it finds the value or reaches the end of the array.

*/