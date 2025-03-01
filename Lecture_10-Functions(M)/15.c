#include <stdio.h>

// Function to check divisibility by 7
int isDivisibleBy7(int num)
{
    if (num % 7 == 0)
        return 1;  // Return 1 if divisible
    else
        return 0;  // Return 0 if not divisible
}

int main()
{
    int num;

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    if (isDivisibleBy7(num))
        printf("%d is divisible by 7.\n", num);
    else
        printf("%d is not divisible by 7.\n", num);

    return 0;
}

