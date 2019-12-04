/* program to find first digit and last digit of a given number. */

#include<stdio.h>

int main (){
    int n, firstdigit, lastdigit, sum;
    printf("Enter the number:");
    scanf("%d", &n);

    /* find the last digit of number*/

    lastdigit= n%10;            // number divided by modulus 10 gives the last digit number.

    printf("The last digit of a given number %d is : %d\n", n, lastdigit);

    /* find the first digit of number */


    firstdigit=n;
    
    while(firstdigit>=10){
        firstdigit/=10;
    }

    printf("The first digit of a given number %d is : %d\n", n, firstdigit); 
    
    /* find the sum of first digit and last digit */

    sum = firstdigit+lastdigit;

    printf("The sum of first digit and last digit is : %d\n", sum);

    return 0;
}