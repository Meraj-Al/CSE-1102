//Write a program that declares two integers, assigns to them the values 20 and 50, and displays the result of their division
#include<stdio.h>
int main()
{
    int i = 20, j = 50;
    double k;
    k = (double)i/j;
    printf("%f \n", k);
    return 0;
}

//Output is 0.400000.
//The result of i/j is float number. SO, we use type casting to make the value of i double.
