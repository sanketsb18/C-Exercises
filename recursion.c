#include<stdio.h>

int SumOfNum(int start, int end);
int main()
{
int lower,upper, sum;
printf("Enter the lower limit:");
scanf("%d", &lower);
printf("Enter the upper limit:");
scanf("%d", &upper);
sum = SumOfNum(lower, upper);
printf("\n sum = %d \n", sum);

return 0;
}


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