//C program to find HCF of two numbers.
#include<stdio.h>

int main()

{
int i, num1, num2, min, hcf=1;

//Input two numbers from user.
printf("Enter any two numbers to find HCF:");
scanf("%d%d", &num1, &num2);

//find munimum between two numbers.
min= (num1<num2) ? num1:num2; 

for(i=1; i<=min; i++)
{
    if (num1 % i == 0 && num2 % i == 0)  //if i is a factor of both number.

    {
        hcf=i;
    }
}

printf("HCF of %d and %d is %d\n", num1, num2, hcf);


    return 0;
}