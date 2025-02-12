/*
Write a program that reads an integer (i.e., N) and displays the result of:
1/1*3+1/3*5+1/5*7+ ... +1/(N − 2) ∗ N
*/

#include <stdio.h>

int main() {
    int N;
    double sum = 0.0;

    do {
        printf("Enter an odd integer (>=3): ");
        scanf("%d", &N);
    } while (N < 3 || N % 2 == 0);

    for (int i = 1; i <= N - 2; i += 2) {
        sum += 1.0 / (i * (i + 2));
    }


    printf("The result of the series is: %.6f\n", sum);

    return 0;
}

