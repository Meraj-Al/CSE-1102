/*Write a program that reads the minimum score required to pass the exams, the grades
of three students, and displays how many of them succeeded.*/

#include<stdio.h>
int main()
{
    int min,pass;
    float stu_mark1, stu_mark2, stu_mark3;

    printf("Enter minimum score:");
    scanf("%d",&min);

    printf("student mark 1 = ");
    scanf("%f",&stu_mark1);
    printf("student mark 2 = ");
    scanf("%f",&stu_mark2);
    printf("student mark 3 = ");
    scanf("%f",&stu_mark3);

    pass=(stu_mark1>=min)+(stu_mark2>=min)+(stu_mark3>=min);

    printf("Passed Student =%d",pass);

    return 0;
}
/*
Boolean Expressions in C:
In C, conditions like (stu_mark1 >= min) return 1 if true and 0 if false.
Addition of Boolean Values:
Since true evaluates to 1 and false to 0, adding them together counts the number of true conditions.
*/
