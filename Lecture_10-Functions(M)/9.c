// Static Inline Function
#include <stdio.h>
// Inline function in C
static inline int foo()
{
    return 2;
}
int main()
{
    int res;
// inline function call
    res = foo();
    printf("%d", res);
    return 0;
}
