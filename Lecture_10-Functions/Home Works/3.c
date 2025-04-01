/*Write a recursive function that takes as parameter an integer value n and returns
its factorial n! using the formula n! = n*(n−1)! Write a program that reads a
positive integer less than 170 and uses the function to display its factorial.
*/
#include <stdio.h>
double fact(int num);
int main()
{
int num;
do
{
printf("Enter a positive integer less than 170: ");
scanf("%d", &num);
} while(num < 0 || num > 170);
printf("Factorial of %d is %e\n", num, fact(num));
return 0;
}
double fact(int num)
{
double val;
if((num == 0) || (num == 1))
val = 1;
else
val = num * fact(num − 1);
return val;
}
