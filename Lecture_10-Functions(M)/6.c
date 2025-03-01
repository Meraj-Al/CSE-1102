// Inline function to calculate the square of a number
#include<stdio.h>

inline int square(int x)
{
    return x*x;
}

int main()
{
    int n = 5;
    int res = square(n);
    printf("%d",res);
    return 0;
}
