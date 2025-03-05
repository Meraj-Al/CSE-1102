//Show the output of the following program..
#include <stdio.h>
int fun(int val) {
    if (val == 0)
        return 1;
    return 2 * fun(val - 1);
}

int main() {
    int num = 5;
    int res = fun(num);
    printf("Result = %d\n", res);
    return 0;
}
/*
# Step-by-Step Execution:

fun(5) returns 2 * fun(4)

fun(4) returns 2 * fun(3)

fun(3) returns 2 * fun(2)

fun(2) returns 2 * fun(1)

fun(1) returns 2 * fun(0)

fun(0) returns 1

# Calculations:

fun(1) returns 2 * 1 = 2

fun(2) returns 2 * 2 = 4

fun(3) returns 2 * 4 = 8

fun(4) returns 2 * 8 = 16

fun(5) returns 2 * 16 = 32
*/