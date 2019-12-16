/* program to check whether the number is a prime number or not. */

#include<stdio.h>   //header files
#include<math.h>     // header files which have various mathematical functions.

int Prime(int num);

int main()

{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);

    if(Prime(num))
    {
    printf("%d is the prime number.\n", num);
    }
    else 
    {
        printf("%d is not a prime number.\n", num);
    }
    
    
        return 0;
}


int Prime(int num)
{
    int i;
    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
