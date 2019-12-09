/* C program to cyclically permute the elements of an array A.
 * i.e. the content of A1 become that of A2. And A2 contains
 * that of A3 & so on as An contains A1 */


#include<stdio.h>
#define size 100

int main(){
    int i, n, number[size];
    printf("Enter the array size = ");
    scanf("%d", &n);
 
    printf("\nEnter the numbers : \n");
    for (i = 0; i < n; ++i) {
        scanf("%d", &number[i]);
    }

    number[n] = number[0];
    for (i = 0; i < n; ++i){
        number[i] = number[i + 1];
    } 
 
    printf("Cyclically permuted numbers are given below : \n");
    for (i = 0; i < n; ++i){
        printf("%d\n", number[i]);
    }

    return 0;
}