//What is the output of the following program?
#include <stdio.h>
int main()
{
    int i;
    for(i = 3; i && i-1; i--)
        printf("%d\n", i);
    return 0;
}
/*Output is:
3
2
*/
