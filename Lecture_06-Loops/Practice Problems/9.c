//Write a program that reads a float number (i.e., a) and an integer (i.e., b) and displays the result of a to the power b.

#include <stdio.h>
int main()
{
    int b, exp, tmp;
    double a, val;
    printf("Enter number and power: ");
    scanf("%lf%d", &a, &b);
    val = 1;
    tmp = 0;
    exp = b;
    if(b < 0)
        exp = -exp;
    while(tmp < exp)
{
val = val * a;
tmp++;
}
if(b < 0)
    printf("%f power %d = %f\n", a, b, 1/val);
else
    printf("%f power %d = %f\n", a, b, val);
return 0;
}
