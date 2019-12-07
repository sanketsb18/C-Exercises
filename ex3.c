/* Write a C program to check if a given non-negative 
given number is a multiple of 3 or 7, but not both.*/

#include<stdio.h>

int main(){

    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    if(num<0){
        printf("Enter the positive number\n");
    }

    else {

    /* check if given number is multiple of 3 or not. */

    if(num%3 == 0){
        printf("%d is multiple of 3\n", num);
    }
    else{
        printf("%d is not multiple of 3\n", num);
    }

    /* check if given number is multiple of 7 or not. */

    if(num%7 ==0){
        printf("%d is multiple of 7\n", num);
    }
    else{
        printf("%d is not multiple of 7\n", num);
    }

    }
    return 0;
}