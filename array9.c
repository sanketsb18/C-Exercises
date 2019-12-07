/* program to find the smallest element in the array.*/

#include<stdio.h>
#define size 100                        //define array size

int main (){

    int n, i, small, arr[size];

    printf("Enter the array size : ");          //tske array size input from user
    scanf("%d", &n);

    printf("\nEnter the %d array elements : \n\n", n);

    for(i=0; i<n; i++){

        printf("Element - %d : ", i);       //store array elements given by user in the array
        scanf("%d", &arr[i]);
    }

    small = arr[0];             //assume the first element as smallest value

    for(i=0; i<n; i++){         //loop to find smallest value

        if(small>arr[i]){

            small = arr[i];           //assign smallest value to small
        }

    }

    printf("\nThe smallest element in the array is : %d\n", small);

    return 0;
}