/* Write a C program to check two given integers and return 
the value whichever value is nearest to 13 without going over.
Return 0 if both numbers go over. */

#include<stdio.h>
#include<stdlib.h>

int main (){

    int num1, num2;
    unsigned int x, y;
    
    printf("Enter the number 1 :");
    scanf("%d", &num1);

    printf("Enter the number 2 :");
    scanf("%d", &num2);

    x = abs(13 - num1);        
    y = abs(13 - num2);

    if (num1 > 13 && num2 > 13) {
        printf("Both numbers are over 13.\n");
        return 0;
    }

    else if (x<y){
        printf("The nearest number to 13 is : %d\n", num1);
        return num1;
    }

    else if (x>y) {
        printf("The nearest number to 13 is : %d\n", num2);
        return num2;
    }

}
