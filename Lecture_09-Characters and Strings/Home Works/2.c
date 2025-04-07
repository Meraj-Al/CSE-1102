//Write a program that displays the upper- and lowercase letters and their ASCII values.
#include <stdio.h>

int main() {
    int i;
    for(i = 0; i < 26; i++) {
        printf("Lowercase: %c (%d)   Uppercase: %c (%d)\n", 
               'a' + i, 'a' + i, 'A' + i, 'A' + i);
    }
    return 0;
}
/*
✅ Sample Output:
yaml
Copy code
Lowercase: a (97)   Uppercase: A (65)
Lowercase: b (98)   Uppercase: B (66)
...
Lowercase: z (122)  Uppercase: Z (90)
  */
