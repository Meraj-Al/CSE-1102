//Write a c recursive function that takes two integers (i.e., n, and p) as parameters and  returns the value of n 
//to the power p . And write a program that reads two integers n, and p and uses the function to display the value of n p , where n ∈ N, and p ∈ Z.
#include <stdio.h>

// Recursive function to calculate n^p
double power(int n, int p) {
    if (p == 0)
        return 1;  // any number to power 0 is 1
    else if (p > 0)
        return n * power(n, p - 1);  // positive power
    else
        return 1.0 / power(n, -p);   // negative power
}

int main() {
    int n, p;
    
    printf("Enter base (n): ");
    scanf("%d", &n);
    
    printf("Enter exponent (p): ");
    scanf("%d", &p);
    
    double result = power(n, p);
    
    printf("%d^%d = %.5lf\n", n, p, result);
    
    return 0;
}
/*
How recursion happens (for 2^3):
Call	                  What Happens	  Return Value
power(2,3)	            2 * power(2,2)	
power(2,2)	            2 * power(2,1)	
power(2,1)	            2 * power(2,0)	
power(2,0)	            returns 1	          1
⬆️ Back to power(2,1)	2 * 1 = 2	2
⬆️ Back to power(2,2)	2 * 2 = 4	4
⬆️ Back to power(2,3)	2 * 4 = 8	8
✅ Final answer: 8.
  */
