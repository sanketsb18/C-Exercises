/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<stdio.h>

int main ()

{

    int p,c,b,m,comp,total;
    float per;

    printf("Enter the marks for physics out of 100:");
    scanf("%d",&p);

    printf("Enter the marks for chemistry out of 100:");
    scanf("%d",&c);

    printf("Enter the marks for biology out of 100:");
    scanf("%d",&b);

    printf("Enter the marks for mathematics out of 100:");
    scanf("%d",&m);

    printf("Enter the marks for computer out of 100:");
    scanf("%d",&comp);

    per = (p + c + b + m + comp) / 5.0;

    printf("Percentage = %.2f\n", per);


    //grade according to the percentage 
    if(per >= 90)
    {
        printf("Grade A\n");
    }
    else if(per >= 80)
    {
        printf("Grade B\n");
    }
    else if(per >= 70)
    {
        printf("Grade C\n");
    }
    else if(per >= 60)
    {
        printf("Grade D\n");
    }
    else if(per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }

    return 0;
}