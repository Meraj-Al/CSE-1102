//Find Greatest Common Divisor using function

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
Input:
yaml
Copy
Edit
Enter two numbers: 56 98
Process (Using Euclidean Algorithm):
gcd(56, 98)
98 % 56 = 42
B = 56, A = 42
gcd(42, 56)
56 % 42 = 14
B = 42, A = 14
gcd(14, 42)
42 % 14 = 0
B = 14, A = 0
A is now 0, so B = 14 is returned as the GCD.
Output:
csharp
Copy
Edit
GCD of 56 and 98 is 14
