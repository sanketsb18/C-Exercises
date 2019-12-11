/* Write a C program to create a new array from a given 
array of integers shifting all zeros to left direction. */

#include<stdio.h>
#define size 100

int main (){
    int arr[size];
    int i, n, j=0, temp;

    printf("Enter the size of array : ");       //Take the input from user for size of array
    scanf("%d", &n);

    printf("Enter %d elements of an array : \n", n);
    for(i=0;i<n;i++){

        printf("element - %d : ",i);        //store elements in the array given by user
	    scanf("%d",&arr[i]);

    }

    /* print the elements of array. */

    printf("\nElements in original array are :  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    
    for (i = 0; i < n; i++){

        if(arr[i] == 0){

            temp = arr[j];
            arr[j] = arr[i];        //shift all 0's to left using loop.
            arr[i] = temp;
        
            j++;

        }

    }    

         
    printf("\nElements in new array are :  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    return 0;
}