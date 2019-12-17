/* C program to find maximum and minimum between two numbers using functions */

#include <stdio.h>

/* Function declarations */
int max(int num1, int num2);
int min(int num1, int num2);



int main(){

    int num1, num2, maximum, minimum;
    
    /* Input two numbers from user */
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    /* Call maximum function and minimum function */

    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}


/* Find maximum between two numbers. */

int max(int num1, int num2)     //function definition
{
    return (num1 > num2 ) ? num1 : num2;
}

/* Find minimum between two numbers.*/

int min(int num1, int num2)             //function definition
{
    return (num1 > num2 ) ? num2 : num1;
}