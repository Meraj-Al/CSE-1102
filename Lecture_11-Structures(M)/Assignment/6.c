/*
Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100)
using a structure named Marks having elements roll no., name, chem_marks, maths_marks
and phy_marks and then display the percentage of each student
*/
#include <stdio.h>

// Define structure
struct Marks {
    int roll;
    char name[50];
    float chem_marks, maths_marks, phy_marks;
};

int main() {
    struct Marks students[5];
    int i;
    float percentage;

    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d (Roll No, Name, Chemistry, Maths, Physics Marks):\n", i + 1);
        scanf("%d %s %f %f %f", &students[i].roll, students[i].name, &students[i].chem_marks, &students[i].maths_marks, &students[i].phy_marks);
    }

    printf("\nStudent Percentages:\n");
    for (i = 0; i < 5; i++) {
        percentage = (students[i].chem_marks + students[i].maths_marks + students[i].phy_marks) / 3;
        printf("Roll No: %d, Name: %s, Percentage: %.2f%%\n", students[i].roll, students[i].name, percentage);
    }

    return 0;
}
