/* To calculate the power of number using while loop */

#include<stdio.h>

int main(){
    int base, exp, result =1;

    printf("Enter a base component: ");
    scanf("%d", &base);

    printf("Enter exponent component: ");
    scanf("%d", &exp);

    while(exp!=0){

        result*=base;
        --exp;
    }

    printf("The answer is : %d \n", result);

    return 0;
}