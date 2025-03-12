//What is the output of the following program?
#include <stdio.h>
int main()
{
char a = 8;
a <<= 4;
printf("Val = %d\n", a);
return 0;
}
/*
The expression a <<= 4 shifts the value of a four places to the left and makes
it 10000000. Since the variable a is declared as char, the leftmost bit is reserved
for the sign of the number. If its value is 1, the number is negative, otherwise it is
positive, so the program displays Val = −128. If the variable a were declared as
unsigned char, the program would display Val = 128.
*/
