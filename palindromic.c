/* prog to check if the given number is the palindrome number or not */

#include <stdio.h>

int main() {
    int n, n1, rev = 0, rem;        // initialize rev = 0
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    
     while (n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;       // reverse number + last digit.
        n = n / 10;                 // remove last digit.
    }
    
    /* check if original number and reverse number are equal or not. */
    
    if (n1 == rev){
        printf("Given number is a palindromic number\n"); 
    }
    else{
        printf("Given number is not a palindromic number\n"); 
    }    
    return 0; 
}