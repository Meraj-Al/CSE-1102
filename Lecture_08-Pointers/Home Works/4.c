//What are the values of arr elements in the following program?

#include <stdio.h>
int main()
{
int *ptr, arr[5] = {20};
for(ptr = arr+1; ptr <= arr+4; ptr++)
*ptr = *(ptr-1) + *(ptr+1) + 1;
return 0;
}
/*When the array arr is declared, arr[0] becomes 20 and the rest
elements 0.
With the statement ptr = arr+1; ptr points to arr[1]. In each loop iteration,
the statement ptr++ makes it point to the next element. The for loop is executed
until the ptr points to the address of the last element.
In each loop iteration, the value of the current element becomes equal to the value
of the previous element, plus the value of the next element, plus one. For example, in
the frst iteration, the statement
*ptr = *(ptr−1)+*(ptr+1)+1; is equivalent to
arr[1] = arr[0]+arr[2]+1 = 20+0+1 = 21;
As a result, the values of arr[0], … arr[3] become equal from 20 to 23. What about
the value of the last element?
arr[4] becomes equal to arr[3], plus one, plus the random value that exists in
the four-byte memory block following the address of arr[4].*/
