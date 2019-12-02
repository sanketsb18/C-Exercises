/* program to count the number of digits in given integer using loop */

#include<stdio.h>

int main (){
    int count = 0;
    long long num;

    printf("Enter any number:");
    scanf("%lld", &num);

    while(num!=0){

    count++;

    num /=10;

    }

    printf("Total digits: %d \n",count); 

    return 0;
}