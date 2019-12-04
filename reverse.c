/* program to reverse the digits of a given number. */

#include<stdio.h>
int main()

{
    int num, reverse = 0;       // initialize reverse number = 0

    printf("Enter any number to find the reverse:");
    scanf("%u", &num);

    while(num!=0)
    {
        reverse=(reverse*10) + (num%10);        // reverse number + last digit
        num/=10;                                // remove last digit
    }
    printf("reverse number is = %u\n", reverse);
 return 0;   
}
