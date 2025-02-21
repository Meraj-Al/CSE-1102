/*Write a program that uses a pointer to read a float number and display its absolute
value.*/

#include <stdio.h>
int main()
{
double *p, val;
p = &val;
printf("Enter number: ");
scanf("%lf", p);
if(*p >= 0)
printf("%f\n", *p);
else
printf("%f\n", -*p);
return 0;
}
