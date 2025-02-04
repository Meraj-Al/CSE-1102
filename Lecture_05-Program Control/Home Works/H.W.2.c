//Write a program that reads three integers and checks if they are in successive increase order (i.e., 5, 6, and 7 or -3, -2, and -1).

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);


    if (num2 == num1 + 1 && num3 == num2 + 1)
    {
        printf("The numbers %d, %d, and %d are in successive increase order.\n", num1, num2, num3);
    }
    else
    {
        printf("The numbers %d, %d, and %d are NOT in successive increase order.\n", num1, num2, num3);
    }

    return 0;
}

