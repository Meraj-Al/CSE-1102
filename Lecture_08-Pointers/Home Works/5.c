//What is the output of the following program?
#include <stdio.h>
int main()
{
int a[] = {0, 0, 1, 2, 3}, b[] = {0, 0, 4, 5, 6};
int *ptr1 = a, *ptr2 = b;
while(!*ptr1++ && !*ptr2++);
printf("%d %d\n", ptr1−a, ptr2−b);
return 0;
}
/*
nitial Setup:
Array a[] = {0, 0, 1, 2, 3}

Array b[] = {0, 0, 4, 5, 6}

ptr1 points to the start of array a and ptr2 points to the start of array b.

Code Walkthrough:
while(!*ptr1++ && !*ptr2++);
The loop continues as long as both *ptr1 == 0 and *ptr2 == 0.

ptr1++ and ptr2++ means that after each check, ptr1 and ptr2 are incremented (move to the next element in the array).

Iteration Breakdown:
1st Iteration:
*ptr1 = a[0] = 0 (so !0 is true).

*ptr2 = b[0] = 0 (so !0 is also true).

Both conditions are true, so the loop continues and both pointers are incremented.

After the first iteration:

ptr1 points to a[1]

ptr2 points to b[1]

2nd Iteration:
*ptr1 = a[1] = 0 (so !0 is true).

*ptr2 = b[1] = 0 (so !0 is true).

Both conditions are true, so the loop continues again and both pointers are incremented.

After the second iteration:

ptr1 points to a[2]

ptr2 points to b[2]



First iteration. Notice that in !*ptr1++; the ! operator is applied frst and then
ptr1 is increased. Since ptr1 points to a, *ptr1 is equal to a[0], that is, 0.
The ! operator makes it 1. Then, ptr1 is increased and points to the next ele￾
ment. Similarly, the value of !*ptr2++; is 1. Since both terms are true, the loop
continues.
Second iteration. Like before, the values of !*ptr1++; and !*ptr2++; are 1.
Third iteration. Since ptr1 points to a[2], the value of !*ptr1++; is 0 and ptr1
points to a[3]. Recall from Chapter 4 that if an operand is false the rest oper￾
ands are not checked and the value of the expression becomes 0. Therefore,
the loop terminates. Since the term !*ptr2++; is not checked, ptr2 is not
increased.

Pointer Arithmetic:
ptr1 - a gives the number of elements between ptr1 and the start of a.

ptr1 is pointing to a[3], so ptr1 - a = 3.

ptr2 - b gives the number of elements between ptr2 and the start of b.

ptr2 is pointing to b[2], so ptr2 - b = 2
As a result, since ptr1 points to a[3] and ptr2 points to a[2], the program
displays 3 2.*/
