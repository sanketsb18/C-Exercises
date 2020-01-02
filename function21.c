/*
    Write a program in C to convert decimal number to binary number using the function.

    Test Data :
    Input any decimal number : 65
    Expected Output :
    The Binary value is : 1000001
*/

#include<stdio.h>

long findBinary(int decimal_Num);

int main(){  
    int decimal_Num;
    long binary_Num;    

    printf("Enter a decimal number : ");    
    scanf("%d",&decimal_Num);    

    binary_Num = findBinary(decimal_Num);
    printf("\n The Binary value of %d is : %ld\n\n",decimal_Num, binary_Num);

    return 0;  
}

long findBinary(int decimal_Num)
{
    long binary_Num=0,remainder,i=1;
    while(decimal_Num != 0)
    {
         remainder = decimal_Num % 2;
         binary_Num += remainder * i;
         i *= 10;
         decimal_Num = decimal_Num / 2;
    }
    return binary_Num;
}