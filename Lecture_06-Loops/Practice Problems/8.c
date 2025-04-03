//How many times is the next while loop executed?

#include <stdio.h>
int main()
{
    int a = 256, b = 4;
    while(a != b)
        b = b*b;
    return 0;
}
//The loop executes 2 times before  reaches , which matches , causing the loop to exit.
