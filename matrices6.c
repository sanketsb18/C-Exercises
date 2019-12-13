/* program to multiply two matrices. */

#include <stdio.h>
#define size 100
 
int main(){
    /*declare variables and arrays */
    int m, n, p, q, c, d, k, sum = 0;
    int a[size][size], b[size][size], mult[size][size];
    
    /*take number of rows and columns for matraix 1 from user */
    printf("Enter the number of rows of first matrix : ");
    scanf("%d", &m);
    printf("Enter the number of columns of first matrix : ");
    scanf("%d", &n);

    /*take elements for array 1 from user */
    printf("Enter the elements of first matrix : \n");
    for (c = 0; c < m; c++){
        for (d = 0; d < n; d++){
            printf("Enter element a%d%d: ", c + 1, d + 1);
            scanf("%d", &a[c][d]);
        }
    }

    /*take number of rows and columns for matrix 1 from user */

    printf("Enter the number of rows of second matrix : ");
    scanf("%d", &p);
    printf("Enter the number of columns of second matrix : ");
    scanf("%d", &q);

    /* if rows and columns are not equal print multiplication is not possible */ 
    if (n != p){
        printf("The multiplication isn't possible.\n");
    }    
    else{

        /*else if equal continue to take elements of matrix 2 from user*/
        printf("Enter elements of second matrix :\n");
    
        for (c = 0; c < p; c++){
            for (d = 0; d < q; d++){
                printf("Enter element b%d%d : ", c + 1, d + 1);
                scanf("%d", &b[c][d]);
            }
        }   

        /*multiply the elements of both matrices by multiplication rules.*/
        for (c = 0; c < m; c++){
            for (d = 0; d < q; d++){
                for (k = 0; k < p; k++){
                    sum = sum + a[c][k]*b[k][d];
                }
                mult[c][d] = sum;
                sum = 0;
            }

        }

        /* Display matrix both matrices. */
        printf("\nFirst Matrix : \n");
        for (c = 0; c < m; c++){
            for (d = 0; d < n; d++){
                printf("%d   ", a[c][d]);
                if (d == n - 1){
                    printf("\n\n");
                }
            }
        }

        printf("\nSecond Matrix : \n");
        for (c = 0; c < p; c++){
            for (d = 0; d < q; d++){
                printf("%d   ", b[c][d]);
                if (d == q - 1){
                    printf("\n\n");
                }
            }
        }     

        /* Display the product of matrices elements by mult matrix */
        printf("Product of the matrices :\n");
    
        for (c = 0; c < m; c++){
            for (d = 0; d < q; d++){
                printf("%d   ", mult[c][d]);
                if (d == q - 1){
                    printf("\n\n");
                }
            }
        }
    }    
 
  return 0;
}