/*Write a program that reads an integer continuously and displays them. If the user
enters 0, the insertion of numbers should terminate. Note that the number 0 must
not be displayed.*/
#include <stdio.h>
int main()
{
    int i = 1;
    while(i != 0)
    {
        printf("Enter number: ");
        scanf("%d", &i);
        if(i != 0)
            printf("Num = %d\n", i);
    }
    return 0;
}
