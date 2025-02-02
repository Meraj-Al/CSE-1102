//Write a program that reads a positive integer and displays the maximum positive integer n for which the sum 12 + 22 + 32 + … + n2 is less than the given number.
#include <stdio.h>
int main()
{
int i, num, sum;
printf("Enter number: ");
scanf("%d", &num);
if(num <= 0)
{
printf("Error: The number should be positive\n");
return 0;
}
sum = 0;
i = 1;
while(1)
{
sum += i*i;
if(sum >= num)
break;
i++;
}
printf("The last number is = %d\n", i-1);
return 0;
}
