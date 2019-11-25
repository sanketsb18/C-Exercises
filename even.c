#include<stdio.h>

int main()

{
int n,i, start, end;
printf("Print even numbers till:");
scanf("%d",&n);
printf("All even numbers from 1 to %d are:\n",n);
for(i=0; i<=n; i+=2)
{
    printf("%d\n",i);
}



//Take lower limit and upper limit inputs.
printf("Enter the lower limit:");
scanf("%d", &start);
printf("Enter the upper limit:");
scanf("%d", &end); 

printf("The odd numbers between %d to %d are:\n", start, end);


//If this condition is true number is even
if(start%2==0)

for(i=start; i<=end; i+=2)
{
    printf("%d \n",i);
}
    return 0;
}
