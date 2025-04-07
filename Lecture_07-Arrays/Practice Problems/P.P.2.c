//What would be the values of the array arr in the following program?
#include <stdio.h>
int main()
{
    int i, arr[10] = {0};
    for(i = 0; i < 10; i++)
        arr[i++] = 20;
    return 0;
}
/*
Key points:
arr[10] = {0}: This initializes all elements of arr to 0.

for(i = 0; i < 10; i++): A loop from 0 to 9.

Inside the loop: arr[i++] = 20;

Note on i++ inside the arr[i++] = 20;:
The expression arr[i++] = 20; does two things:

Assigns 20 to arr[i]

Then increments i after accessing arr[i]

But here's the catch:

The for loop also does i++ after each iteration.

So i is effectively incremented twice per loop iteration.

Let's simulate it:
Initial state:
arr = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
i = 0

Iteration steps:
i = 0 → arr[0] = 20 → i++ in the statement makes i = 1, then loop i++ makes i = 2

i = 2 → arr[2] = 20 → i = 3, loop makes i = 4

i = 4 → arr[4] = 20 → i = 5, loop makes i = 6

i = 6 → arr[6] = 20 → i = 7, loop makes i = 8

i = 8 → arr[8] = 20 → i = 9, loop makes i = 10, loop ends

Final arr:
arr = {20, 0, 20, 0, 20, 0, 20, 0, 20, 0}
*/
