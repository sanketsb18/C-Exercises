/* Write a C program to check whether a given array of integers contains 5's and 7's. */

#include<stdio.h>
#define size 100

int main (){
    int n,i, j=0, five=0, seven=0; 
    int arr[size];

    printf("Enter the size of array : ");       //Take the input from user for size of array
    scanf("%d", &n);

    printf("Enter %d elements of an array : \n", n);
    for(i=0; i<n; i++){
        printf("Element - %d : ", i);
        scanf("%d",&arr[i]);                    //store elements in the array given by user
    }

    /* print the elements of array. */

    printf("\nThe Elements in array are :  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    /* count appeance of number 5 and number 7 in whole array using for loop.*/

    for(i=0; i<n; i++){

        if(arr[i] == 5){
            five++;
        }

        if(arr[i] == 7){
            seven++;
        }
        
    }    

    printf("The given array contains number 5 : %d times and number 7 : %d times\n\n", five, seven);
    return 0;
}