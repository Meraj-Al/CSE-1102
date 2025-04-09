//Write a program that reads a float number (i.e., a) and an integer (i.e., b) and displays the result of a to the power b.

#include <stdio.h>

int main() {
    double a, result = 1.0;
    int b, i, exp;

    printf("Enter number and power: ");
    scanf("%lf %d", &a, &b);

    exp = (b < 0) ? -b : b;

    for (i = 0; i < exp; i++) {
        result *= a;
    }

    if (b < 0)
        result = 1.0 / result;

    printf("%.2f power %d = %.5f\n", a, b, result);

    return 0;
}

/*
Step-by-Step Walkthrough with Example
Let’s assume the following input for our example:

a = 2.0 (a float number)

b = 3 (an integer)

Input:
Enter number and power: 2 3
Step 1: Initial Setup
a = 2.0

b = 3

val = 1.0 (this variable will store the result)

exp is calculated as exp = (b < 0) ? -b : b. Since b = 3 is not negative, exp = 3.

Step 2: Loop for Positive Exponent (exp = 3)
The program now enters the for loop where it calculates a^b.

First Iteration (tmp = 0):
val *= a → val = 1.0 * 2.0 = 2.0

Second Iteration (tmp = 1):
val *= a → val = 2.0 * 2.0 = 4.0

Third Iteration (tmp = 2):
val *= a → val = 4.0 * 2.0 = 8.0

Step 3: Final Value After Loop
After completing the loop (since exp = 3, the loop runs 3 times), the value of val is 8.0.

Step 4: Handle Negative Exponent (if applicable)
The program checks if b is negative. If it were negative, the program would set val = 1.0 / val. Since b = 3 is positive, this step is skipped.

Step 5: Output
The program prints the result:

2.000000 power 3 = 8.000000
*/
/*
#include <stdio.h>
#include <math.h>  // Required for pow()

int main() {
    float a;
    int b;
    double result;

    // Input
    printf("Enter base (float): ");
    scanf("%f", &a);

    printf("Enter exponent (int): ");
    scanf("%d", &b);

    // Calculate power
    result = pow(a, b);

    // Output result
    printf("%.2f to the power %d is %.2lf\n", a, b, result);

    return 0;
}
*/
