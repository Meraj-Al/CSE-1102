//Write a program that displays the sum of all numbers from 1 to 200.

#include <stdio.h>
int main()
{
    int i, sum;
    sum = 0;
    for(i = 1; i <= 200; i++)
        sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}
