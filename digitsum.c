/* program to calculate the sum of digits of a given integer. */

#include<stdio.h>

int main (){
    int num,sum=0;
    printf("Enter any number:");
    scanf("%d", &num);

    while (num!=0){

        sum+=num%10;        // sum = sum + last digit
        num/=10;         // remove last digit i.e num = num/10
    }

    printf("The sum of digits of given number: %d\n", sum);

    return 0;
}