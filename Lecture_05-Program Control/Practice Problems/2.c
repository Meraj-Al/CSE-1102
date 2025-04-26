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
/*
Write a program that reads three integers and displays them in ascending order.
#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Sorting using simple comparisons
    if (a > b) {
        temp = a; a = b; b = temp;
    }

    if (a > c) {
        temp = a; a = c; c = temp;
    }

    if (b > c) {
        temp = b; b = c; c = temp;
    }

    // Output in ascending order
    printf("Numbers in ascending order: %d %d %d\n", a, b, c);

    return 0;
}

*/
