#include<stdio.h>

int main()

{
    int i, num;
    unsigned long long f=1ll;

    //Take the input of number to calculate factorial.
    printf("Enter any number to calculate factorial:");
    scanf("%d", &num);
    // show error if the user enters a negative integer
    if (num < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    
    }
    else
    {
        //iteration and factorial.
        for (i = 1; i <= num; i++)
        {
            f = f * i;
        }

    
    printf("Factorial of %d is:%llu\n", num, f);
     
    
    
    }   return 0;
}