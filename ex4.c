/* Write a C program to check which number nearest to the value 100 
among two given integers. Return 0 if the two numbers are equal. */

#include<stdio.h>
#include<stdlib.h>

int main (){

    int num1, num2;
    unsigned int x, y;
    
    printf("Enter the number 1 :");
    scanf("%d", &num1);

    printf("Enter the number 2 :");
    scanf("%d", &num2);

    x = abs(100 - num1);        
    y = abs(100 - num2);

    if (x<y){
        printf("The nearest number to 100 is : %d\n", num1);
    }

    else if (x>y) {
        printf("The nearest number to 100 is : %d\n", num2);
    }

    else if (x == y) {
        printf("Both numbers are away from 100 with same distance. \n");
    }

    return 0;
}
