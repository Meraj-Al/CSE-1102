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
/*First iteration. Notice that in !*ptr1++; the ! operator is applied frst and then
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
As a result, since ptr1 points to a[3] and ptr2 points to a[2], the program
displays 3 2.*/
