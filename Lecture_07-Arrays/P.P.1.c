//What would be the values of the array a in the following program?
#include <stdio.h>
int main()
{
    int i, a[3] = {4, 2, 0}, b[3] = {2, 3, 4};
    for(i = 0; i < 3; i++)
        a[b[i]-a[2-i]]++;
    return 0;
}
/*The values of array a in the program is 5 3 1 */
