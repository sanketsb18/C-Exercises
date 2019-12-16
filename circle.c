/* program to calculate the diameter, circumference and area of circle using functions. */

#include<stdio.h>
#include<math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()
{
float radius, D,C,A;
printf("Enter the radius:");
scanf("%f", &radius);

D=getDiameter(radius);
C=getCircumference(radius);
A=getArea(radius);

printf("Diameter of the circle: %.2f units\n", D);
printf("Circumference of the circle: %.2f units\n", C);
printf("Area of the circle: %.2f sq. units\n", A);
    return 0;
}


double getDiameter(double radius)
{
return(2*radius);
}

double getCircumference(double radius)
{
    return(2*M_PI*radius);
}

double getArea(double radius)
{
    return(M_PI*radius*radius);
}