//What is the output of the following programm
#include <stdio.h>
#define X 2 * 5 + 3 / 5 * 7 - (4 - 2) * 2

int main() {
    int k;
    int i = 10, j = 20;
    k = X * X + i / j * i - j / i * j;
    printf("%d\n", k); // Output: -4
    return 0;
}
/*
Compute X,
Compute 2 * 5 → 10.

Compute 3 / 5 (integer division truncates to 0), then 0 * 7 → 0.

Compute (4 - 2) * 2 → 2 * 2 → 4.

Combine: 10 + 0 - 4 → 6.
Final value of X is 6.


Compute K,
Substitute X = 6, i = 10, j = 20:

6 * 6 → 36.

i / j → 10 / 20 → 0 (integer division).

0 * i → 0 * 10 → 0.

j / i → 20 / 10 → 2.

2 * j → 2 * 20 → 40.

Combine: 36 + 0 - 40 → -4.

*/
