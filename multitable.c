#include<stdio.h>
int main()

{

    int i, num;
    //take input of a number to print the table.
    printf("Enter number to print the table:");
    scanf("%d", &num);


//iteration till number 10
    for(i=1; i<=10; i++)
    {
printf("%d * %d = %d\n", num, i, (num*i));

    }

    return 0;
}