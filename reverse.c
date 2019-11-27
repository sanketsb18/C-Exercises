#include<stdio.h>
int main()

{
    int num, reverse = 0;

    printf("Enter any number to find the reverse:");
    scanf("%u", &num);

    while(num!=0)
    {
        reverse=(reverse*10) + (num%10);
        num/=10;
    }
    printf("reverse number is = %u\n", reverse);
 return 0;   
}
