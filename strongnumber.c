/* Program to check whether number is a strong number or not.*/

#include<stdio.h>

int main()

{
    int num, originalnum, lastdigit, sum,i;
    long fact;

    printf("Enter any number:");
    scanf("%d",&num);
    originalnum=num;
    sum=0;

    while(num>0){

        lastdigit = num % 10;
        fact = 1;
        for(i=1; i<=lastdigit; i++){

            fact = fact*i;

        }

        sum = sum + fact;
        num = num / 10;

    }

      if(sum == originalnum)
    {
        printf("%d is a STRONG NUMBER\n", originalnum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalnum);
    }

    return 0;
}