//What is the output of the following program?

#include <stdio.h>
int main()
{
    int i;
    for(i = 0; i ? 0 : i+1; i++)//If i is not zero print zero or else print i+1
        printf("%d\n", i);
    return 0;
}
/*
Output is:
0
*/
