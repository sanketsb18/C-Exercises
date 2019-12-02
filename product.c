/* Calculate the product of digits. */


#include<stdio.h>

int main (){
    int num;
    long long product = 1ll;

    printf("Enter any number to calculate the product of digit.");
    scanf("%d", &num);

    product = (num == 0 ? 0 : 1ll);


    while(num != 0)
    {
        // Get the last digit from num and multiplies to product 
        product = product * (num % 10);

        // Remove the last digit from n 
        num = num / 10;
    }

    printf("Product of digits = %lld\n", product);

    return 0;
}