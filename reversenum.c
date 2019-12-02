//print all natural numbers in reverse.

#include<stdio.h>

int main()
{
int i,start;

printf("Enter the starting value:");
scanf("%d", &start);
 for(i=start; i>=1; i--)
 {
     printf("%d\t", i);
 }


//using while loop

int n;

printf("\nEnter value of n: ");
    scanf("%d", &n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }    
    

    return 0;
}
