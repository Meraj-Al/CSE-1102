//Passing parameters to Function( Using Pass by Reference)

#include<stdio.h>
void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
int main()
{
    int var1 = 3, var2 = 2;
    printf("Before swap value of var1 and var2 is: %d,%d\n",var1,var2);
    swap(&var1,&var2);
    printf("After swap value of var1 and var2 is: %d,%d",var1,var2);
    return 0;
}
/*
1. Pass by Value
A copy of the actual parameter is passed to the function.
Any modification made to the parameter inside the function does not affect the original value.
The function works with the copied value, not the original variable.
Used for simple data types like int, float, char, etc.

2. Pass by Reference (Using Pointers)
Instead of passing the value, the memory address (reference) of the variable is passed.
Any modification inside the function affects the original variable.
Used for modifying variables, passing large structures efficiently, and dynamic memory allocation.

Key Differences:
Aspect	                    Pass by Value   	                                Pass by Reference
What is passed?	            Copy of the value	                                Address of variable
Modifies original?	        No	                                                Yes
Efficiency	                Less efficient (copies data)	                    More efficient (no copying)
Usage	                    Simple data types, when modification isn't needed	Large data, when modification is required
*/
