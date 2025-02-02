//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    if(a && a/b)
        printf("One\n");
    else
        printf("Two\n");
    return 0;
}
/* The result would be two because the second condition a/b is zero not 0.5 (because both a and b are integer). Which makes the entire condition false*/
