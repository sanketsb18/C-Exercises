//Sum of number in a given range using recursion.

#include<stdio.h>

//declaration of function SumOfNum
int SumOfNum(int start, int end);
int main()
{
int lower,upper, sum;

//Take the inputs: lower limit and upper limit.

printf("Enter the lower limit:");
scanf("%d", &lower);
printf("Enter the upper limit:");
scanf("%d", &upper);

//call of function SumOfNum.

sum = SumOfNum(lower, upper);
printf("\n sum = %d \n", sum);

return 0;
}


//definination of function SumOfNum

int SumOfNum(int start, int end)
{
if (start == end)
{
return start;
}
else 
{
    return start + SumOfNum(start+1, end);
}


}