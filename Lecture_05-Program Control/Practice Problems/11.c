//What is the output of the following program?
#include <stdio.h>
int main()
{
    int a = 1;
    switch(a)
    {
    case 1:
        printf("One\n");
        return 0;
    case 2:
        printf("Two\n");
        break;
    }
    printf("End\n");
    return 0;
}
//Output is: One
