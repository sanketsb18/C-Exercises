#include<stdio.h>

int main (){
    
    int i, n;       // declaration of variables

    /* Take input number from user */

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    /* iteration loop */

    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }




    /* print natural numbers in given range */

    int start, end;

    printf("\nEnter the start value :");
    scanf("%d", &start);

    printf("\nEnter the end value :");
    scanf("%d", &end);

    printf("\nThe natural numbers from %d to %d are :\n", start, end);

    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}




