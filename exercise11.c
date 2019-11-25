//Write a C program to check whether a number is divisible by 5 and 11 or not

#include<stdio.h>


int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);


    if(num%5 == 0){
        printf("Number is divisible by 5\n");
    }
    else {
        printf("number is not divisible by 5\n");
    }

    if(num%11 ==0){
        printf("Number is divisible by 11\n");
    }
    else{
        printf("number is not divisible by 11\n");
    }
    return 0;
}