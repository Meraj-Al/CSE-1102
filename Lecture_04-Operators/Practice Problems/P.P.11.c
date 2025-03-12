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
Step-by-Step Execution:
Initialize char a = 8

8 in binary (8-bit representation):
00001000  (decimal 8)
Left Shift a <<= 4

This means shifting all bits 4 places to the left:
00001000 << 4  →  10000000
The result in binary is 10000000, which is -128 in two's complement (since char is signed by default).
Printing a

%d is used in printf, which promotes char to int.
The value of a is -128 in decimal.
Final Output:
Val = -128
*/