//What is the output of the following program?
#include <stdio.h>
#include <string.h>
int main()
{
char str1[10], str2[] = "engine";
printf("%c\n", str1[strcmp(strcpy(str1, "ine"), str2+3)]);
return 0;
}
/*strcpy() copies the string "ine" into str1 and returns the str1 pointer.
strcmp() compares the string pointed to by the return value of strcpy(), that is,
str1, with the part of the string stored in str2+3 address, that is, "ine". Therefore,
since both pointers point to identical strings, strcmp() returns 0 and the program
displays the value of str1[0], that is, 'i'.
*/
