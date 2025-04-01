//What is the output of the following program?

#include <stdio.h>
int f(int a);
int main()
{
int i = 10;
printf("%d\n", f(f(f(i))));
return 0;
}
int f(int a)
{
return a+1;
}
