//What is the output of the following program?
#include <stdio.h>
int main()
{
    int k;
    float i = 10.9, j = 20.3;
    k = (int)i + j;
    printf("%d %d\n", k, (int)(i + (int)j));
    return 0;
}
/* int i convert the i from float to int. So, k = 10+20.3=30(not 30.3, because k is declared as integer.)Because the value of the cast expression (int)(i+(int)j) is
(int)(10.9+(int)20.3) = (int)(10.9+20) = (int)(30.9) = 30.

so the answer is 30 30
