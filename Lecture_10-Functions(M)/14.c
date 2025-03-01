#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius, fahrenheit;

    // Taking user input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Function call
    fahrenheit = celsiusToFahrenheit(celsius);

    // Display result
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}

