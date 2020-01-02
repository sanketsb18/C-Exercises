/*Write a program in C to find the square of any number using the function.

Test Data :
Input any number for square: 20
Expected Output :
The square of 20 is: 400.00

#include<stdio.h>

double square(double x);        //function declaration prototype

int main(){

    double num;
    double sq;
    printf("Input any number for square : ");       //Take input from user
    scanf("%lf", &num);

    sq = square(num);           //function call

    printf("The square of %.2f is %.2f\n",num, sq);

    return 0;
}

// function definition. 

double square(double num){
    
    return(num*num);

}

*/


#include<stdio.h>

double square(double a);        //function declaration prototype

int main(){

    double num;         
    double sq;
    printf("Input any number for square : ");       //Take input from user
    scanf("%lf", &num);

    sq = square(num);       //function call

    printf("The square of %.2f is %.2f\n",num, sq);
    return 0;
}

/* function definition. */

double square(double a){

    double sq;
    sq = a * a;
    return(sq);

}