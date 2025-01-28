//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a, b = 0;
    a = b ? 50 : 200;
    printf("Val = %d\n", a);
    return 0;
}
//Output is: Val = 200
