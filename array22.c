/* Write a C program to check if the sum of all 5'
 in the array exactly 15 in a given array of integers. */

#include<stdio.h>
#define size 100

int main (){
    int n, i, sum=0; 
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

    /* calculate the sum of 5's in whole array using for loop.*/

    for(i=0; i<n; i++){

        if(arr[i] == 5){
            sum+=5;
        }
    }    

    if(sum == 15){
        printf("The sum of all 5's in the array is exactly 15 \n\n");
    }
    else{
        printf("The sum of all 5's in the array is not 15 \n\n");
    }
    
    return 0;
}