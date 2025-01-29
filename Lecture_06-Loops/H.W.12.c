//What is the output of the following program?
#include <stdio.h>
int main()
{
   int i = -2;
    while(i-6)
    {
        printf("One ");
        i++;
        while(!(i+1))
        {
            printf("Two ");
            i--;
        }
        i += 2;
    }
    return 0;
}

/*Output is:
One Two One One
*/
