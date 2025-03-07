/*
Write a structure to store the name, account number and balance of customers (more than
10) and store their information.
a. Write a function to print the names of all the customers having balance less than
$200.
b. Write a function to add $100 in the balance of all the customers having more than
$1000 in their balance and then print the incremented value of their balance.

*/

#include <stdio.h>

struct Customer {
    char name[50];
    int account_number;
    float balance;
};

void printLowBalanceCustomers(struct Customer customers[], int n) {
    printf("\nCustomers with balance less than $200:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance < 200) {
            printf("%s\n", customers[i].name);
        }
    }
}

void incrementHighBalance(struct Customer customers[], int n) {
    printf("\nUpdated balances of customers with more than $1000:\n");
    for (int i = 0; i < n; i++) {
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
            printf("%s: $%.2f\n", customers[i].name, customers[i].balance);
        }
    }
}

int main() {
    int n = 10;  
    struct Customer customers[10] = {
        {"Alice", 1001, 150},
        {"Bob", 1002, 220},
        {"Charlie", 1003, 180},
        {"David", 1004, 3000},
        {"Eve", 1005, 1200},
        {"Frank", 1006, 90},
        {"Grace", 1007, 1300},
        {"Hank", 1008, 400},
        {"Ivy", 1009, 50},
        {"Jack", 1010, 2000}
    };

    printLowBalanceCustomers(customers, n);
    incrementHighBalance(customers, n);

    return 0;
}
