/* program to caluclate the product of digits of a given number. */

#include<stdio.h>

int main (){
    int n, product=1;
    printf("Enter any number:");
    scanf("%d", &n);

    while(n!=0){

        product *= n%10;        //product = product * last digit
        n=n/10;                 //remove last digit i.e n=n/10
    }
    printf("The product of digits of given number is : %d\n", product);
    return 0;
}