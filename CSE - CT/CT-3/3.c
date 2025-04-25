Q3: Describe pointer arithmetic in C
Answer:
Pointer arithmetic refers to operations that can be performed on pointers, particularly useful when dealing with arrays or dynamic memory. Here's how it works:

Operation	Description
ptr + i	Moves pointer i elements forward.
ptr - i	Moves pointer i elements backward.
ptr1 - ptr2	Gives number of elements between two pointers.
++ptr	Moves to the next element.
--ptr	Moves to the previous element.
Example:

int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;

printf("%d\n", *(ptr + 2));  // Output: 30
ptr++;
printf("%d\n", *ptr);       // Output: 20
