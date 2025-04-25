Q2: Write a program that produces the output shown in Fig. a, Also store the output in a 2D array and print in reverse as in Fig. b
Fig. a Output:              Fig. b Output:
1  2  3  4
4  3  4  5
9  4  5  5
16 5  5  5
25

Fig. b Output:
25
16 5
9  4  5
4  3  4  5
1  2  3  4

#include <stdio.h>

int main() {
    int arr[5][4] = {0};

    // Create and print Fig. a
    printf("Fig. a:\n");
    for (int i = 0; i < 5; i++) {
        arr[i][0] = (i + 1) * (i + 1);
        printf("%d ", arr[i][0]);

        for (int j = 1; j < 4 - i; j++) {
            arr[i][j] = 5 - i + j;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Print reverse as Fig. b
    printf("\nFig. b:\n");
    for (int i = 4; i >= 0; i--) {
        for (int j = 0; j < 4 - i; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
