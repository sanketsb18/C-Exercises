/* program to check if two matrices of are equal or not. */

#include<stdio.h>

#define size 100

int main(){
    int a[size][size];
    int b[size][size];

    int r,c,i,j,e=1;
    /*take number of rows and columns from user. */
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    /*take elements for matrices 1 and 2 from user. */
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter element b%d%d : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    //Display matrix a and b.
    printf("\nMatrix a : \n");
    for(i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d   ", a[i][j]);
            if (j == c - 1){
                printf("\n\n");
            }
        }
    }

    printf("\nMatrix b : \n");
    for(i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d   ", b[i][j]);
            if (j == c - 1){
                printf("\n\n");
            }
        }
    }

    //Assume matrices are equal.
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if(a[i][j] != b[i][j]){
                e = 0;
                break;
            }
        }
    }
    
    /*
     * Check the value of e if e = 1 means both are equal 
     * If it contains 0 means both are not equal
     */

    if(e == 1){
        printf("\nMatrix A is equal to Matrix B\n\n");
    }
    else{
        printf("\nMatrix A is not equal to Matrix B\n\n");
    }
        
    return 0;
}