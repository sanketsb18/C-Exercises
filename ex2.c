/*Write a C program to check if two given 
non-negative integers have the same last digit*/

#include<stdio.h>

int main (){

    int n1, n2, lastdigit1, lastdigit2;

    printf("Enter the number n1:");
    scanf("%d", &n1);

    printf("Enter the number n2:");
    scanf("%d", &n2);

    /* Find the last digit of integers n1 and n2. */


    lastdigit1= n1%10;            // number divided by modulus 10 gives the last digit number.

    printf("The last digit of a given number %d is : %d\n", n1, lastdigit1);


       
    lastdigit2= n2%10;            // number divided by modulus 10 gives the last digit number.

    printf("The last digit of a given number %d is : %d\n", n2, lastdigit2);


    /* check if lastdigits of n1 and n2 are equal.*/

    if(lastdigit1 == lastdigit2){
        printf("The numbers n1 and n2 have same last digit\n");
    }
    else{
        printf("The numbers n1 and n2 don't have same last digit\n");
    } 
    return 0;
}
