🔍 Logical vs Bitwise Operators in C
Feature	        Logical Operators	                                        Bitwise Operators
Purpose	        Used to evaluate Boolean (true/false)                       logic	Used to manipulate individual bits of data
Operands Type	Boolean expressions (usually 0 or non-zero)	                Integer data types (int, char, etc.)
Operators	    && (AND), `
Return Type	    0 (false) or 1 (true)	                                    Integer value after bit manipulation
Short-Circuit Evaluation	Yes – if result is known early, stops evaluating	No – both sides are always evaluated
Common Use	Conditions in if, while, for statements	                            Low-level programming (flags, device control)
✅ Logical Operators (for decision-making)
Example:
int a = 5, b = 10;

if (a < 10 && b > 5)  // true && true
    printf("Condition is True\n");
else
    printf("Condition is False\n");
&&: True if both sides are true

||: True if at least one side is true

!: Negates the value

🔧 Bitwise Operators (for bit-level manipulation)
Example:
int x = 5, y = 3;

// Binary of 5 = 0101
// Binary of 3 = 0011

printf("AND: %d\n", x & y);   // 0101 & 0011 = 0001 → 1
printf("OR: %d\n", x | y);    // 0101 | 0011 = 0111 → 7
printf("XOR: %d\n", x ^ y);   // 0101 ^ 0011 = 0110 → 6
Shift Examples:
int val = 4;  // 0100

printf("Left Shift: %d\n", val << 1);  // 1000 = 8
printf("Right Shift: %d\n", val >> 1); // 0010 = 2
