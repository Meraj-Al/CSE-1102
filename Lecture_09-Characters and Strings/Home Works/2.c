//Write a program that displays the upper- and lowercase letters and their ASCII values.
#include <stdio.h>
int main()
{
int i;
for(i = 0; i < 26; i++)
{
printf("%c (%d)\n", 'a'+i, 'a'+i);
printf("%c (%d)\n", 'A'+i, 'A'+i);
}
return 0;
}
