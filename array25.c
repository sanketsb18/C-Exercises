/* Write a C program to check whether the sequence of numbers 1, 2, 3 
appears in a given array of integers somewhere. */

#include<stdio.h>
#define size 100

int main (){

    int n, i, temp=0; 
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

    /* find if there is somewhere the sequence of 1 2 3.*/

    for(i=0; i<n; i++){

        if(arr[i] == 1 && arr[i+1] == 2 && arr[i+2] == 3){
            temp++;
        }
                
    }    

    printf("The 1 2 3 sequence appears in array %d times \n\n", temp);
    
    return 0;
}