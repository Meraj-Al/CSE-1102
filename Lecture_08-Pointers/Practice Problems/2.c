/*Write a program that reads two integers, stores them in two variables, declares two
pointers to them, and displays the memory addresses of both variables, the content of
both pointers, as well as their memory addresses.*/

#include <stdio.h>
int main()
{
int *ptr1, *ptr2, i, j;
printf("Enter numbers: ");
scanf("%d%d", &i, &j);
ptr1 = &i;
ptr2 = &j;
printf("Num1 address = %p\n", ptr1);
printf("Num2 address = %p\n", ptr2);
printf("Ptr1 content = %d\n", *ptr1);
printf("Ptr2 content = %d\n", *ptr2);
printf("Ptr1 address = %p\n", &ptr1);
printf("Ptr2 address = %p\n", &ptr2);
return 0;
}
