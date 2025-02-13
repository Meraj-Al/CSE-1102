//What is the output of the following program?

#include <stdio.h>
int main()
{
    int a = 3, b = 5, c;
    a = (a > 3) + (b <= 5);
    
    b = (a== 3) + ((b-2) >= 3);
    c = (b != 1);
    printf("%d %d %d\n", a, b, c);
    return 0;
}
/*Output is:
1 1 0
*/
