//Write a program that reads a float number (i.e., a) and an integer (i.e., b) and displays the result of a to the power b.

#include <stdio.h>

int main() {
    int b, exp, tmp;
    double a, val = 1.0;

    printf("Enter number and power: ");
    scanf("%lf%d", &a, &b);

    exp = (b < 0) ? -b : b;  // Convert exponent to positive for calculations

    for (tmp = 0; tmp < exp; tmp++) {  // Loop iterates exp times
        val *= a;
    }

    // Handle negative exponent case
    if (b < 0)
        val = 1.0 / val;

    printf("%f power %d = %f\n", a, b, val);

    return 0;
}
Step-by-Step Iteration Example**  
Example Input:

Enter number and power: 2 3


Iteration Breakdown (b = 3)
| Iteration | `tmp` | `val = val * a` | New `val` |
|-----------|------|----------------|------------|
| 1st       | 0    | `1.0 * 2.0`    | `2.0` |
| 2nd       | 1    | `2.0 * 2.0`    | `4.0` |
| 3rd       | 2    | `4.0 * 2.0`    | `8.0` |

Final Output:
2.000000 power 3 = 8.000000


Example Input (Negative exponent)

Enter number and power: 5 -2


Iteration Breakdown (b = -2 → exp = 2`)
| Iteration | `tmp` | `val = val * a` | New `val` |
|-----------|------|----------------|------------|
| 1st       | 0    | `1.0 * 5.0`    | `5.0` |
| 2nd       | 1    | `5.0 * 5.0`    | `25.0` |

Final Adjustment (Negative b Case:

val = 1.0 / val → 1.0 / 25.0 = 0.040000

Final Output
5.000000 power -2 = 0.040000




### **Observations:**
- **Loop runs `b` times** for positive `b`.
- **Loop runs `|b|` times**, then **inverts the result** for negative `b`.
- **Multiplication accumulates the power value step by step.**

Would you like variations, such as recursion or using `pow()` from `<math.h>`? 🚀
