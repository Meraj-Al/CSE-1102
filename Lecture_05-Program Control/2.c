//Write a program that reads two integers and displays them in ascending order.
#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter two integer: ");
    scanf("%d%d", &i, &j);
    if(i < j)
        printf("%d %d\n", i, j);
    else
        printf("%d %d\n", j, i);
    return 0;
}
