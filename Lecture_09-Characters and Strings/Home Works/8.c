//What is the output of the following program?
#include <stdio.h>
#include <string.h>
int main()
{
char str1[5], str2[5];
printf("%c\n", strcpy(str1, strcpy(str2, "test"))[0]);
return 0;
}
/*The inner strcpy() copies the string test into str2 and returns the
str2 pointer. The outer strcpy() copies the string pointed to by str2 into str1.
Therefore, the string test is copied into str1.
Since the outer strcpy() returns the str1 pointer, printf() translates to
printf("%c\n",str1[0]); and the program displays t.*/
