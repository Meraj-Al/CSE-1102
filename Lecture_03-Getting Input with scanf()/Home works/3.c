//Write a program that reads the radius of a circle and displays its area and perimeter.
#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.1416;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("%f %f\n", pi*radius*radius, 2*pi*radius);//pi*r*r and 2*pi*r
    return 0;
}
