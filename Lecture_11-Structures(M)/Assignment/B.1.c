/*
1. Write a structure to store the names, salary and hours of work per day of 10 employees
in a company. Write a program to increase the salary depending on the number of hours
of work per day as follows and then print the name of all the employees along with
their final salaries.
Hours of Work
(Per Day)           8               10              >=12
Increase in salary $50              $100            $150
*/

#include <stdio.h>

// Define structure
struct Employee {
    char name[50];
    float salary;
    int work_hours;
};

// Function to update salary
void updateSalary(struct Employee *emp) {
    if (emp->work_hours >= 12)
        emp->salary += 150;
    else if (emp->work_hours == 10)
        emp->salary += 100;
    else if (emp->work_hours == 8)
        emp->salary += 50;
}

int main() {
    struct Employee employees[10];
    int i;

    // Take input for 10 employees
    for (i = 0; i < 10; i++) {
        printf("Enter Name, Salary, and Work Hours of Employee %d: ", i + 1);
        scanf("%s %f %d", employees[i].name, &employees[i].salary, &employees[i].work_hours);
        
        // Update salary based on work hours
        updateSalary(&employees[i]);
    }

    // Print final salaries
    printf("\nUpdated Employee Salaries:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s, Final Salary: $%.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
