//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a, b;
    a = b = 9;
    if(++a == b++)//++a immediately increase the value 9 to 10.But b++ increase its value after the condition execution. So that makes the condition false.
        printf("One\n");
    else
        printf("Two\n");
    printf("%d %d\n", a, b);
    return 0;
}
/*Answer will print
Two
10 10
*/
