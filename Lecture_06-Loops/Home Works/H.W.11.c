//Write a program that reads a positive integer and displays the maximum positive integer n for which the sum 1 to the power 2 + 2 to the power 2 + 3 to the power 2 + ... + n2 is less than the given number.

#include <stdio.h>
int main()
{
int i, num, sum;
printf("Enter number: ");
scanf("%d", &num);

sum = 0;
i = 1;
while(1)
{
sum += i*i;
if(sum >= num)
break;
i++;
}
printf("The last number is = %d\n", i-1); /* The number i−1 is the last number where the value of sum is still less than the given
number. */
return 0;
}
