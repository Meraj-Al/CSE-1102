Q4. Output of the Program
c
Copy
Edit
#include <stdio.h>

int main() {
    int a, b;
    a = b = 9;

    if (++a == b++)
        printf("One\n");
    else
        printf("Two\n");

    printf("%d %d\n", a, b);
    return 0;
}
Step-by-step Execution:
a = b = 9; → both a and b are now 9

++a → pre-increment, so a becomes 10

b++ → post-increment, so comparison uses b = 9, then b becomes 10

if (10 == 9) → false, so it goes to the else block

Output:
nginx
Copy
Edit
Two
10 10
