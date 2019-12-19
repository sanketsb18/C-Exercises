/* C program to find the sum of digits of a given number using recursion. */

#include<stdio.h>

int sumofdigits();      //function declaration

int main(){
    int num, sum;

    printf("Enter the number to find the sum of digits :");
    scanf("%d", &num);

    sum = sumofdigits(num);     //function call

    printf("The sum of digits of a number %d is : %d\n", num, sum);

    return 0;
}

/* Recursive function to find sum of digits of a number */
int sumofdigits(int num){       //function definition

    if(num == 0)
        return 0;
        
    return ((num % 10) + sumofdigits(num / 10));
}
