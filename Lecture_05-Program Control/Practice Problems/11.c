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

/*
The program starts, and a is initialized to 1.
The switch statement evaluates the value of a:
Since a = 1, it matches case 1.
The program prints "One\n" and immediately exits with return 0;.
The code after the switch (including the "End\n" print statement) is never executed due to the return 0;.

*/
