/*Write a program that reads an integer N > 3 and calculates the result of the expression R1 = 1/1 − 1/2 + 1/3 − 1/4 + … 1/N. The program should force the user
to enter an integer greater than 3.*/

#include <stdio.h>
int main()
{
    int i, num;
    double a, val;
    do
    {
        printf("Enter number > 3: ");
        scanf("%d", &num);
    }
    while(num <= 3);
    val = 0;
    a = 1;
    for(i = 1; i <= num; i++)
    {
        val += a/i;
        a = -a;
    }
    printf("Val = %e\n", val);
    return 0;
}
