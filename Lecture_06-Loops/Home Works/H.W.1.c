//What is the output of the following program?

#include <stdio.h>
int main()
int i, j =5;
for(i = 0; i+j == 5; j++)
{
    printf("One\n");
    i = 4;
    j = 1;
}
printf("Val1 = %d Val2 = %d\n", i, j);
return 0;
}
/* Output should be:
One
Val1 = 4 Val2 = 2

*/
