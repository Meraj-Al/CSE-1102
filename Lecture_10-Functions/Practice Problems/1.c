/*
In the following program, which one of the scanf() and printf() functions may
change the value of a?
*/
#include <stdio.h>
int main()
{
int a;
scanf("%d", &a);
printf("Value:%d\n", a);
return 0;
}

/*
scanf() may change the value a because the address of a is passed to
it. On the other hand, printf() can’t change the value of a because it is passed
by value
*/
