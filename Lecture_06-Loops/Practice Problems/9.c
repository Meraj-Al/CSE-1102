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
📖 Step-by-Step Walkthrough with Example
Suppose we input:
Enter number and power: 2 -3
So:
a = 2
b = -3

Step 1: Initialization
double a, result = 1.0;
int b, i, exp;
a is a double.

result starts as 1.0 (important for multiplication).

b, i, and exp are integers.

Step 2: Input
scanf("%lf %d", &a, &b);
User enters: 2 and -3.
Now:

a = 2
b = -3
Step 3: Handle Negative Exponent

exp = (b < 0) ? -b : b;
Since b = -3, which is < 0,

exp = -(-3) = 3.

Now:

exp = 3

✅ (This allows the for loop to multiply 3 times.)

Step 4: Loop to Calculate Positive Power

for (i = 0; i < exp; i++) {
    result *= a;
}
Loop runs 3 times:

i	result	        Calculation
0	1.0 × 2 = 2.0	result *= 2
1	2.0 × 2 = 4.0	result *= 2
2	4.0 × 2 = 8.0	result *= 2
After loop:

result = 8.0

✅ (This is 2^3.)

Step 5: Handle Negative Exponent Again
if (b < 0)
    result = 1.0 / result;
Since original b = -3 (negative),
We compute:

result = 1.0 / 8.0 = 0.125
✅ (This matches 2^-3 = 1/8 = 0.125.)

Step 6: Print the Output

printf("%.2f power %d = %.5f\n", a, b, result);
Values:

a = 2

b = -3

result = 0.12500

Output:

2.00 power -3 = 0.12500
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
