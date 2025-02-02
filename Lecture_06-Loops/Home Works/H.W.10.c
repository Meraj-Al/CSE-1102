#include <stdio.h>
int main()
{
    int num, sum, dig;
    sum = 0;
    dig = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num < 0)
        num = - num;

    while(num > 0)
    {
        sum += num % 10;
        num = num / 10;
        dig++;
    }
    printf("%d digits and their sum is %d\n", dig, sum);
    return 0;
}
