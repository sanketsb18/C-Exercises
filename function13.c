/* C program to find GCD (HCF) of two numbers using recursion */
 
#include <stdio.h>

int gcd(int a, int b);      //function declaration


int main()
{
    int num1, num2, hcf;
    
    /* Take input two numbers from user */
    printf("Enter any two numbers to find GCD: \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    hcf = gcd(num1, num2);      //function call
    
    printf("GCD of %d and %d = %d\n", num1, num2, hcf);
    
    return 0;
}


/* Recursive approach to find GCD of two numbers */
int gcd(int a, int b)       // function definition.
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}