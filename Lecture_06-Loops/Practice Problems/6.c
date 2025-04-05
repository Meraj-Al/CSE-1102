//Write a program that reads an integer and displays the prime numbers that are less than or equal to it.

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i = 2; i <= num; i++)
    {
        for(j = 2; j <= i; j++)
        {
            if(i%j == 0)
            {
                if(i == j)
                    printf("Prime number = %d\n", i);
                else
                    break;
            }
        }
    }
    return 0;
}
/*
Step-by-step execution of the program with num = 10:


Enter number: 10

// Outer loop iterates from i = 2 to num (10)
i = 2:
    j = 2 → 2 % 2 == 0 (i == j, prints "Prime number = 2")

i = 3:
    j = 2 → 3 % 2 != 0 (continue)
    j = 3 → 3 % 3 == 0 (i == j, prints "Prime number = 3")

i = 4:
    j = 2 → 4 % 2 == 0 (breaks, not prime)

i = 5:
    j = 2 → 5 % 2 != 0 (continue)
    j = 3 → 5 % 3 != 0 (continue)
    j = 4 → 5 % 4 != 0 (continue)
    j = 5 → 5 % 5 == 0 (i == j, prints "Prime number = 5")

i = 6:
    j = 2 → 6 % 2 == 0 (breaks, not prime)

i = 7:
    j = 2 → 7 % 2 != 0 (continue)
    j = 3 → 7 % 3 != 0 (continue)
    j = 4 → 7 % 4 != 0 (continue)
    j = 5 → 7 % 5 != 0 (continue)
    j = 6 → 7 % 6 != 0 (continue)
    j = 7 → 7 % 7 == 0 (i == j, prints "Prime number = 7")

i = 8:
    j = 2 → 8 % 2 == 0 (breaks, not prime)

i = 9:
    j = 2 → 9 % 2 != 0 (continue)
    j = 3 → 9 % 3 == 0 (breaks, not prime)

i = 10:
    j = 2 → 10 % 2 == 0 (breaks, not prime)

Final Output:
Prime number = 2
Prime number = 3
Prime number = 5
Prime number = 7
*/
