//What is the output of the following program?
#include<stdio.h>
#include<string.h>
void main() {
char str[] = "Text";
printf("%d %d\n", strlen(str=4), strlen("Text"+1));
}
/*
⚠️ Problem Area:
strlen(str=4)
This is invalid C because you're trying to assign the integer 4 to a pointer (str), which is not allowed.

str is declared as a character array: char str[] = "Text";

But str = 4 (or str = (char *)4) is not a valid assignment for an array name — arrays are not assignable in C.

✅ The compiler will throw an error like:

error: incompatible types when assigning to type ‘char[5]’ from ‘int’
💡 However, let’s assume the intent was:
printf("%d %d\n", strlen("Text"), strlen("Text" + 1));
Then:

strlen("Text") → 4 (T, e, x, t)

"Text" + 1 → points to the string starting at 'e' → "ext"

strlen("Text" + 1) → 3

✅ Output (if corrected):
4 3
  */
