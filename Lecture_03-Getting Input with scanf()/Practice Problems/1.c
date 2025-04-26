//checks the returned value of scanf () to verify that the
//input integer is successfully read and stored into num
#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    while (scanf("%d", &num) != 1) {
        printf("Enter number: ");
        while (getchar() != '\n'); // Consume the unread characters
    }
    printf("Inserted value: %d\n", num);
    return 0;
}

