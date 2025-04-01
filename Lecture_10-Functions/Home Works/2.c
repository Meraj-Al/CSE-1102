//What is the output of the following program?
#include <stdio.h>
int a = 4; /* Global variable. */
int main()
{
    if(a == 0)
        return 0;
    else
    {
        printf("%d ", a-- );
        main();
    }
    return 0;
}
