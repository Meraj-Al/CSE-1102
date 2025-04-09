//Write a program that reads two floats (such as a and b) and displays the solution of the equation a*x + b = 0.
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter numbers: ");
    scanf("%f%f", &a, &b);

    printf("The solution is %f",-b/a);
    return 0;
}
