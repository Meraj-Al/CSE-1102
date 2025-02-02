//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a =10, b = -10;
    if(a > 0 && b < -10)
        printf("One ");
    else
        printf("Two ");
    if(a > 10 || b == -10)
        printf("One ");
    else
        printf("Two ");
    return 0;
}
/*Output is:
Two One
*/
