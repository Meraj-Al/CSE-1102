//What is the output of the following program?
#include <stdio.h>
int main()
{
char str[] = "This is the text";
printf("%d\n", sizeof(str));
return 0;
}
/*The expression sizeof(str) calculates how many bytes allocate the array
str in memory. This number is the size of the text plus one byte for the null charac￾
ter. Therefore, the program displays 17. Had we written
printf("%d\n", sizeof("This is the text"));
the program would display 17 again.*/
