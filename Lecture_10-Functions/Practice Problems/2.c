/*Write a function that takes as parameter the radius of a circle and returns its area.
Write a program that reads the length of the radius, calls the function, and displays
the return value.
*/

#include <stdio.h>
double area(double radius);
int main()
{
double len;
do
{
printf("Enter radius: ");
scanf("%lf", &len);
} while(len <= 0);
printf("Circle area is %f\n", area(len));
return 0;
}
double area(double radius)
{
return 3.14*radius*radius;
}
