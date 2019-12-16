/* check whether the given number is a prime number or not using function. */
/* Arguments passed and return value */


#include <stdio.h>
int checkPrimeNumber(int n);
int main()
{
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    // n is passed to the checkPrimeNumber() function
    // the returned value is assigned to the flag variable
    flag = checkPrimeNumber(n);
    if(flag == 1)
        printf("%d is not a prime number\n",n);
    else
        printf("%d is a prime number\n",n);
    return 0;
}
// int is returned from the function
int checkPrimeNumber(int n)
{
    int i;
    for(i=2; i <= n/2; ++i)
    {
        if(n%i == 0)
            return 1;
    }
    return 0;
}