//Write a program that declares two integers, assigns to them the values 20 and 50, and displays the result of their division
#include<stdio.h>
int main()
{
    int i = 20, j = 50;
    double k;
    k = (double)i/j;//The result of their division is decimal number, so we use double
    printf("%f \n", k);
    return 0;
}
