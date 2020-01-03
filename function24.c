/* Program to convert binary number to octal number */

#include <stdio.h>

int Binary_To_Octal(int x);         //declaration of Binary_To_Octal() function
 
int main()
{
    long int binaryNum, result;
    printf("Enter the value for  binary number: ");
    scanf("%ld", &binaryNum);

    result = Binary_To_Octal(binaryNum);        //function call
    
    printf("Equivalent octal value: %lo\n", result);
    return 0;
}

/* function definition */

int Binary_To_Octal(int x){
    long int binaryNum, octalNum = 0, j = 1, remainder;
    while (x != 0){
        remainder = x % 10;
        octalNum = octalNum + remainder * j;
        j = j * 2;
        x = x / 10;
    }
    return (octalNum);
}