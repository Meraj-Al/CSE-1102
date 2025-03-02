//How to add to two number using function
#include<stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a = 30,b = 40;
    int res = sum(a,b);

    printf("Sum is %d",res);
    return 0;
}
