/*Write a program to add, subtract and multiply two complex numbers using structures to
function (use function for each operation).
*/
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtract(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main() {
    struct Complex num1, num2, sum, diff, product;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1, num2);
    diff = subtract(num1, num2);
    product = multiply(num1, num2);

    printf("\nAddition: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Subtraction: %.2f + %.2fi\n", diff.real, diff.imag);
    printf("Multiplication: %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
