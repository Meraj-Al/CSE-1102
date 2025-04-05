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
        if(num > 3) {
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
