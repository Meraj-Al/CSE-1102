//What is the output of the following program?
#include <stdio.h>
int main()
{
int *ptr1, **ptr, i = 10, j = 20;
ptr1 = &i;
ptr = &ptr1;
**ptr += 100;
ptr1 = &j;
**ptr += 100;
printf("Val = %d\n", i+j);
return 0;
}
/*ptr = ptr1 = &i and **ptr is
equal to i. Therefore, the statement **ptr += 100; is equivalent to i = i+100 = 10+100 = 110
With the statement ptr1 = &j; ptr1 points to the address of j, so **ptr is
equal to j. Therefore, the statement **ptr += 100; is equivalent to j = j+100 = 20+100 = 120.
As a result, the program displays Val = 230.*/
