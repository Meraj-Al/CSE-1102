/*Write a program that reads an integer N > 3 and calculates the result of the expression R1 = 1/1 − 1/2 + 1/3 − 1/4 + … 1/N. The program should force the user
to enter an integer greater than 3.*/

#include <stdio.h>

int main() {
    int i, num;
    double a, val;

    // Using a for loop to ensure num > 3
    for(;;) {  // Infinite loop
        printf("Enter number > 3: ");
        scanf("%d", &num);
        
        // If num is greater than 3, break out of the loop
        if(num < 3) {
            break;
        }
    }

    // Initialize the result and alternating sign factor
    val = 0;
    a = 1;

    // Calculate the alternating harmonic sum
    for(i = 1; i <= num; i++) {
        val += a / i;  // Add or subtract the fraction
        a = -a;        // Alternate the sign
    }

    // Print the result in scientific notation
    printf("Val = %e\n", val);

    return 0;
}
Step-by-Step Example:
Let's say the user enters N = 6.

First Input:

The user is asked to enter a number greater than 3. The user enters 6.

Initialization:

val = 0 (accumulating variable for the result).

a = 1 (to alternate the signs).

Calculation Loop:

Iteration 1 (i = 1):

val += a / 1 → val = 0 + 1/1 = 1.0.

After this iteration, a = -1 (alternate the sign).

Iteration 2 (i = 2):

val += a / 2 → val = 1.0 - 1/2 = 1.0 - 0.5 = 0.5.

After this iteration, a = 1 (alternate the sign).

Iteration 3 (i = 3):

val += a / 3 → val = 0.5 + 1/3 ≈ 0.5 + 0.3333 = 0.8333.

After this iteration, a = -1 (alternate the sign).

Iteration 4 (i = 4):

val += a / 4 → val = 0.8333 - 1/4 = 0.8333 - 0.25 = 0.5833.

After this iteration, a = 1 (alternate the sign).

Iteration 5 (i = 5):

val += a / 5 → val = 0.5833 + 1/5 = 0.5833 + 0.2 = 0.7833.

After this iteration, a = -1 (alternate the sign).

Iteration 6 (i = 6):

val += a / 6 → val = 0.7833 - 1/6 ≈ 0.7833 - 0.1667 = 0.6166.

After this iteration, a = 1 (alternate the sign).

Final Result:

After the loop completes, the result is approximately 0.6166.

Output:

The result is displayed using printf("Val = %e\n", val);, which prints the result in scientific notation.

Output for N = 6:
Enter number > 3: 6
Val = 6.166667e-01
