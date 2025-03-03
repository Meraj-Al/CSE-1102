//Recursive Function to Find Maximum in an Array
#include <stdio.h>

// Recursive function to find the maximum in an array
int findMax(int A[], int n) {
    int temp;
    
    // Base Case: If only one element, return that element
    if (n == 1) {
        return A[0];
    }

    // Recursive Call: Find max in first (n-1) elements
    temp = findMax(A, n - 1);

    // Compare last element with the max of first (n-1) elements
    if (A[n - 1] > temp)
        return A[n - 1];
    else
        return temp;
}

// Driver Code
int main() {
    int arr[] = {3, 1, 8, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);

    printf("Maximum element in the array: %d\n", max);

    return 0;
}
/*
Step-by-Step Execution
Let's assume the input array is:
arr = {3, 1, 8, 2, 5}

Initial Call:
findMax(arr, 5) 
Since n != 1, recursive call is made:
temp = findMax(arr, 4)


Recursive Calls Breakdown:
findMax(arr, 4) → temp = findMax(arr, 3)
findMax(arr, 3) → temp = findMax(arr, 2)
findMax(arr, 2) → temp = findMax(arr, 1)
findMax(arr, 1) → returns A[0] = 3 (Base Case)


Backtracking and Comparison:
findMax(arr, 2): Compare A[1] = 1 with temp = 3 → return 3
findMax(arr, 3): Compare A[2] = 8 with temp = 3 → return 8
findMax(arr, 4): Compare A[3] = 2 with temp = 8 → return 8
findMax(arr, 5): Compare A[4] = 5 with temp = 8 → return 8


Final Output:
Maximum element in the array: 8

Logic Behind Recursion
Base Case: If the array has only one element (n == 1), return that element.
Recursive Case: Find the max in the first n-1 elements.
Compare: Compare the last element (A[n-1]) with the max of n-1 elements and return the larger value.
This ensures that the function breaks down the problem into smaller subproblems until reaching a single element, then backtracks while comparing values to determine the maximum.*/