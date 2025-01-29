//Write a program that displays the product of all odd numbers from 1 to 20.
#include <stdio.h>
int main()
{
    int i, prod;
    prod = 1;
    for(i = 1; i < 20; i+=2)
        prod *= i;
    printf("Product = %d\n", prod);
    return 0;
}

