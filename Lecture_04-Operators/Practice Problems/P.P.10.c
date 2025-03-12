//What is the output of the following program?

#include <stdio.h>
int main()
{
printf("%d\n", ∼(∼0 << 4));
return 0;
}
/*
Breakdown of the expression ∼(∼0 << 4)

Step 1: Understanding ∼0
~0 (bitwise NOT of 0) results in -1 in two's complement representation.
In binary (assuming a 32-bit system):
0  = 00000000 00000000 00000000 00000000
~0 = 11111111 11111111 11111111 11111111  (which is -1)

Step 2: ∼0 << 4
Shifting -1 (which is all 1s in binary) left by 4:
11111111 11111111 11111111 11111111  (which is -1)
Shift left by 4:
11111111 11111111 11111111 11110000  (which is -16)
So, ∼0 << 4 evaluates to -16.

Step 3: ∼(-16)
Taking the bitwise NOT of -16:
-16 in binary (assuming 32-bit) is:
11111111 11111111 11111111 11110000
Bitwise NOT flips all bits:
00000000 00000000 00000000 00001111
Which is 15 in decimal.
 
Final Output:
The program prints:
15
*/
