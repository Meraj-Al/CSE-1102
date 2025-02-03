//Write a program that reads two double numbers and displays the absolute value of their sum

#include <stdio.h>

int main()
{
    double num1, num2, sum, absSum;


    printf("Enter two double numbers : ");
    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;


    if (sum < 0)
        absSum = -sum;
    else
        absSum = sum;

    printf("The absolute value of the sum is: %lf\n", absSum);

    return 0;
}
