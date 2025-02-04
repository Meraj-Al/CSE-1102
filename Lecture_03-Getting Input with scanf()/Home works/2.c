/*Write a program that reads two integers and displays their sum, difference, product,
the result of their division, and the remainder.*/
#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter 2 integers :");
    scanf("%d%d", &i, &j);
    printf("Sum = %d\n", i+j);
    printf("Diff = %d\n", i-j);
    printf("Product = %d\n", i*j);
    printf("Div = %f\n", (float)i/j); /* We use Typecasting to get actual value  . */
    printf("Rem = %d\n", i%j);
    return 0;
}
