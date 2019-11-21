#include<stdio.h>

int main()

{

float cm, m, km;

printf("Enter the length in centimeter:");
scanf("%f", &cm);

/* conversion of centimeter to meter and kilometer */
m=cm/100.0; 
km=cm/100000.0;

printf("Length in meter:%.2f m \n", m);     /* %.2f is used to print fractional value upto two decimal places */
printf("Length in kilometer:%.2f km \n", km);

    return 0;
}