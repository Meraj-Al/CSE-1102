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
/*
🔍 What happens here?
i = 10

The innermost f(i) becomes f(10) → returns 11

Next: f(f(i)) becomes f(11) → returns 12

Finally: f(f(f(i))) becomes f(12) → returns 13
*/
