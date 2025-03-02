// Inline with Forward Declaration

#include <stdio.h>
int foo();
// Inline function in C
inline int foo()
{
    return 2;
}
int main()
{
    int res;
// Inline function call
    res = foo();
    printf("%d", res);
    return 0;
}

//The program will run
