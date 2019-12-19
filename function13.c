/* C program to find GCD (HCF) and LCM of two numbers using recursion */
 
#include <stdio.h>

int gcd(int a, int b);      //gcd function declaration

int lcm(int a, int b);      //lcm function declaration


int main()
{
    int num1, num2, hcf, LCM;
    
    /* Take input two numbers from user */
    printf("Enter any two numbers to find GCD and LCM: \n");
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    hcf = gcd(num1, num2);      // gcd function call
    
    printf("GCD of %d and %d = %d\n", num1, num2, hcf);

    if(num1 > num2)
        LCM = lcm(num2, num1);      // lcm function call
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d\n", num1, num2, LCM);
    
    return 0;
}


/* Recursive approach to find GCD of two numbers */
int gcd(int a, int b)       // gcd function definition.
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b); 
}

/* Recursive approach to find LCM of two numbers */
int lcm(int a, int b)       // lcm function definition.
{
    static int multiple = 0;
    multiple += b;
    if((multiple % a == 0) && (multiple % b == 0)){
        return multiple;
    }
    else{
        return lcm(a, b);
    }
}
