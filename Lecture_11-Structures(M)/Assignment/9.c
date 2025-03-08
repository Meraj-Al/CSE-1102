/*
Write a structure to store the roll no., name, age (between 11 to 14) and address of students.
Store the information of the students.
a. Write a function to print the names of all the students having age 14.
b. Write another function to print the names of all the students having even roll no.
c. Write another function to display the details of the student whose roll no is given
(i.e. roll no. entered by the user)
*/
#include <stdio.h>

// Define structure
struct Student {
    int roll_no;
    char name[50];
    int age;
    char address[100];
};

// Function to print students with age 14
void printAge14(struct Student students[], int count) {
    printf("\nStudents with Age 14:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].age == 14) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print students with even roll numbers
void printEvenRoll(struct Student students[], int count) {
    printf("\nStudents with Even Roll Numbers:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no % 2 == 0) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to display student details by roll number
void displayStudentByRoll(struct Student students[], int count) {
    int roll;
    printf("\nEnter Roll Number to Display Details: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == roll) {
            printf("\nStudent Details:\n");
            printf("Roll No: %d\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Address: %s\n", students[i].address);
            return;
        }
    }
    printf("Student with Roll No %d not found!\n", roll);
}

int main() {
    struct Student students[5]; // Assuming 5 students for now
    int i, choice;

    // Taking input for 5 students
    printf("Enter details of 5 students (Roll No, Name, Age, Address):\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        scanf("%d %s %d %[^\n]s", &students[i].roll_no, students[i].name, &students[i].age, students[i].address);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Print names of students with age 14\n");
        printf("2. Print names of students with even roll numbers\n");
        printf("3. Display student details by roll number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printAge14(students, 5);
                break;
            case 2:
                printEvenRoll(students, 5);
                break;
            case 3:
                displayStudentByRoll(students, 5);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
