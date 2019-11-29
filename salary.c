#include<stdio.h>

int main(){

    float basic, gross, DA, HRA;
    printf("Enter basic salary of the employee:");
    scanf("%f",&basic);

    if(basic<=10000){

        DA = basic*0.8;
        HRA = basic*0.2;

    }


    else if (basic<=20000){

            DA = basic*0.9;
            HRA = basic*0.25;
        }

    else {

        DA = basic*0.95;
        HRA = basic*0.3;
    }


    gross = basic + HRA + DA;

    printf("The Gross Salary Of the Employee :%0.2f\n", gross);

    return 0;
}