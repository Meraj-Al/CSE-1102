//Function not returning any value
#include<stdio.h>
void div7(int n)
{
    if ((n%7)==0)
        printf("%d is divisible by 7", n);
    else
        printf("%d is not divisible by 7",n);

}
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    div7(n);
}
