/*The following program uses a pointer to read and display a decimal number. Is there
any programming bug?*/

#include <stdio.h>
int main()
{
double *ptr, i;
scanf("%lf", ptr);
printf("Val = %f\n", *ptr);
return 0;
}
//The program won't work, because we did't point to an address before using scanf. If we added ptr = &i, then the program would run.
