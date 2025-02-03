//Write a program that reads the radius of a circle and displays its area and perimeter.
#include <stdio.h>

int main()
{
    float radius;
    float PI = 3.1416;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("%f %f\n", PI*radius*radius, 2*PI*radius);
    return 0;
}
