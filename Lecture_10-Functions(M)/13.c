#include <stdio.h>

int gcd(int A, int B) {
    int temp;
    while (A != 0) {  // Stops when A becomes 0
        temp = B % A;
        B = A;
        A = temp;
    }
    return B;
}

int main() {
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    z = gcd(x, y);
    printf("GCD of %d and %d is %d\n", x, y, z);
    return 0;
}
