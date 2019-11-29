/* Program to check whether triangle is Equilateral triangle, Isocscele Triangle or Scalene Triangle.*/

#include<stdio.h>

int main(){
    int s1,s2,s3;

    /* 
     Take the input of sides of Triangles
    */

    printf("Enter three sides of Triangle:");
    scanf("%d%d%d", &s1, &s2, &s3);


    /*
    Compare sides of triangle using using comparison operators.
    */

    if (s1==s2 && s1==s3){

        printf("It is Equilateral Triangle.\n");

    }

    else if(s1==s2 || s1==s3 || s2==s3){

        printf("It is Isosceles Triangle.\n");
    }

    else {

        printf("It is Scalene Triangle.\n");
    }

    return 0;
}