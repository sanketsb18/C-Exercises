/* program to find difference of two matrices of size n. */

#include<stdio.h>

#define size 100

int main(){
    int a[size][size];
    int b[size][size];
    int diff[size][size];

    int r,c,i,j;
    /* take number of rows and columns from user */
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    /* take elements of matrices from user. */
    printf("\nEnter elements of 1st matrix :\n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix :\n");
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

    // substract two matrices
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
    // printing the result
    printf("\nDifference of two matrices: \n");
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            printf("%d   ", diff[i][j]);
            if (j == c - 1){
                printf("\n\n");
            }
        }

    }
        
    return 0;
}