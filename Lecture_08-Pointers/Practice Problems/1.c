//What is the output of the following program?
#include <stdio.h>
int main()
{
int *ptr, i = 10;
ptr = &i;
i += 20;
printf("Val = %d\n", *ptr);
return 0;
}
// The program displays Val = 30.
