//C program to print the sum of all odd numbers from 1 to n

#include<stdio.h>

int main()

{

  int i, n, sum=0;

    
    printf("Enter upper limit: ");
    scanf("%d", &n);

    
    for(i=1; i<=n; i+=2)
    {
        sum = sum+i;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;

}
