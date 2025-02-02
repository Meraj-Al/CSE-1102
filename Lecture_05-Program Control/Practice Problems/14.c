/*Write a program that takes as input a person’s sex and height and displays the
corresponding description for his or her height, according to Table 5.2.
TABLE 5.2
Height Categories
Sex     Height (ft)         Result
Male    < 5.5               Short
Male    >= 5.5 and < 6.00   Normal
Male    >= 6.00             Tall
Female  < 5.25              Short
Female  >= 5.25 and < 5.75  Normal
Female  >= 5.75             Tall
*/
#include <stdio.h>
int main()
{
    int sex;
    float height;
    printf("Enter sex (0:male − 1:female): ");
    scanf("%d", &sex);
    printf("Enter height (in feet): ");
    scanf("%f", &height);
    switch(sex)
    {
    case 1:
        if(height < 5.50)
            printf("Result: Short\n");
        else if(height < 6.00)
            printf("Result: Normal\n");
        else
            printf("Result: Tall\n");
        break;
    case 2:
        if(height < 5.25)
            printf("Result: Short\n");
        else if(height < 5.75)
            printf("Result: Normal\n");
        else
            printf("Result: Tall\n");
        break;

    }
    return 0;
}
