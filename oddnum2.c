#include<stdio.h>

int main()

{
int i,start,end;

//Take lower limit and upper limit inputs.
printf("Enter the lower limit:");
scanf("%d", &start);
printf("Enter the upper limit:");
scanf("%d", &end); 

printf("The odd numbers between %d to %d are:\n", start, end);


//If this condition is true number is even
if(start%2==0)
{
    start++;
}
for(i=start; i<=end; i+=2)
{
    printf("%d \n",i);
}
    return 0;
}
