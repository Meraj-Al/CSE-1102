//What would be the values of the array arr in the following program?
#include <stdio.h>
int main()
{
    int i, arr[10] = {0};
    for(i = 0; i < 10; i++)
        arr[i++] = 20;
    return 0;
}
