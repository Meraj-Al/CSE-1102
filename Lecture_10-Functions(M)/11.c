//Caller , Calle
#include<stdio.h>
float cent_to_farh(cent)
{
    float result = cent*9/5+32;
    return result;
}
void main()
{
    float cent, farh;
    scanf("%f",&cent);
    farh = cent_to_farh(cent);
    printf("%fC = %fF\n",cent,farh);
}

