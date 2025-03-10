//Write a program that reads the grades of three students and displays them in ascending order.
#include <stdio.h>
int main()
{
    float i, j, k;
    printf("Enter grades: ");
    scanf("%f%f%f", &i, &j, &k);
    if(i <= j && i <= k)//making sure i is smallest.
    {
        printf("%f ", i);
        if(j < k)//which one is smallest after i.
            printf("%f %f\n", j, k);
        else
            printf("%f %f\n", k, j);
    }
    else if(j <= i && j <= k)//making sure j is smallest
    {
        printf("%f ", j);
        if(i < k)//which one is smallest after j.
            printf("%f %f\n", i, k);
        else
            printf("%f %f\n", k, i);
    }
    else
    {
        printf("%f ", k);//if both i and j is not the smallest than k is the smallest
        if(j < i)
            printf("%f %f\n", j, i);
        else
            printf("%f %f\n", i, j);
    }
    return 0;
}
/*
Short version

#include <stdio.h>

int main() {
    float i, j, k, temp;
    printf("Enter grades: ");
    scanf("%f%f%f", &i, &j, &k);

    // Sorting using the swap technique (Bubble sort for 3 numbers)
    if (i > j) { temp = i; i = j; j = temp; }
    if (i > k) { temp = i; i = k; k = temp; }
    if (j > k) { temp = j; j = k; k = temp; }

    printf("Sorted grades: %f %f %f\n", i, j, k);
    return 0;
}

*/
