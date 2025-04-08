/*Write a function that takes as parameter the radius of a circle and returns its area.
Write a program that reads the length of the radius, calls the function, and displays
the return value.
*/

#include <stdio.h>
#define PI 3.14

// Function to calculate area of a circle
float calculateArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius, area;

    // Get radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Call function and store result
    area = calculateArea(radius);

    // Display area
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
