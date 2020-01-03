/* Program to convert binary number to octal number */

#include <stdio.h>

int Binary_To_Octal(int x);         //declaration of Binary_To_Octal() function
 
int main()
{
    long int binarynum, result;
    printf("Enter the value for  binary number: ");
    scanf("%ld", &binarynum);

    result = Binary_To_Octal(binarynum);        //function call
    
    printf("Equivalent octal value: %lo\n", result);
    return 0;
}

/* function definition */

int Binary_To_Octal(int x){
    long int binarynum, octalnum = 0, j = 1, remainder;
    while (x != 0){
        remainder = x % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        x = x / 10;
    }
    return (octalnum);
}