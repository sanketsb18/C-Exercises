/* program to calculate the diameter, circumference and area of circle using functions. */

#include<stdio.h>
#include<math.h>

/* declaration of functions */

double findDiameter(double radius);         //function to find diameter
double findCircumference(double radius);    //function to find circumference
double findArea(double radius);             //function to find radius

int main(){

    float radius, D,C,A;
    printf("Enter the radius:");
    scanf("%f", &radius);

    D = findDiameter(radius);                  //call findDiameter function          
    C = findCircumference(radius);             //call findCircumference function
    A = findArea(radius);                      //call findArea function

    printf("Diameter of the circle: %.2f units\n", D);
    printf("Circumference of the circle: %.2f units\n", C);
    printf("Area of the circle: %.2f sq. units\n", A);
    
    return 0;
}

/* function definitions */

double findDiameter(double radius){
    return(2*radius);
}

double findCircumference(double radius){
    return(2*M_PI*radius);
}

double findArea(double radius){
    return(M_PI*radius*radius);
}