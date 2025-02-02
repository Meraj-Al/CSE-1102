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

