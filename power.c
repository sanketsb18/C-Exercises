/* To calculate the power of number using while loop */

#include<stdio.h>

int main(){
    int base, exp;
    long long result = 1;

    printf("Enter a base component: ");
    scanf("%d", &base);

    printf("Enter exponent component: ");
    scanf("%d", &exp);

    while(exp!=0){

        result*=base;
        --exp;
    }

    printf("The answer is : %lld \n", result);

    return 0;
}