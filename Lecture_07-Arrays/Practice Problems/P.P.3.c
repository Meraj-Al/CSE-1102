//What is the output of the following program?
#include <stdio.h>
int main()
{
    int i, arr[] = {30, 20, 10, 0, -10, -20,-30};
    for(i = 0; arr[i]; i++)
        printf("%d\n", arr[i]);
    return 0;
}
/*Output is:
30
20
10
*/
/*
 arr[i] != 0. And the value of forth element is zero, so the loop displays the value of first three elements
 */
