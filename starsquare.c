#include<stdio.h>

int main()

{
    int i, j, n;

    //Take input for number of rows.

    printf("Enter the number of rows:");
    scanf("%d", &n);


    //iteration loop for n rows
    
    for(i=1; i<=n; i++)
    {

        //iterate loop over n columns
        for(j=1; j<=n; j++)
        {
            printf("*\t");
        }
        printf("\n\n");
    }

    return 0;
}