#include<stdio.h>

int main()

{
int a;
printf("Enter the number:");
scanf("%d", &a);
switch(a)
{
case 1:printf("January\n");
       printf("31 days\n");
break;

case 2:printf("February\n");
       printf("28/29 days\n");
break;

case 3:printf("March\n");
       printf("31 days\n");
break;

case 4:printf("April\n");
       printf("30 days\n");
break;

case 5:printf("May\n");
       printf("31 days\n");
break;

case 6:printf("June\n");
       printf("30 days\n");
break;

case 7:printf("July\n");
       printf("31 days\n");
break;

case 8:printf("August\n");
       printf("31 days\n");
break;

case 9:printf("September\n");
       printf("30 days\n");
break;

case 10:printf("October\n");
        printf("31 days\n");
break;

case 11:printf("November\n");
        printf("30 days\n");
break;

case 12:printf("December\n");
        printf("31 days\n");
break;

default:printf("Invalid input\n");
break;


}



    return 0;
}
