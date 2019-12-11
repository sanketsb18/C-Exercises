/* Write a C program to create new array from a given array 
of integers shifting all even numbers before all odd numbers. */

#include<stdio.h>
#define size 100

int main (){

    int arr[size];
    int n, i, j=0, temp;

    printf("Input the size of array : ");       //Take the size of array input
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);

    for(i=0;i<n;i++){

        printf("element - %d : ",i);        //store elements in the array given by user
	    scanf("%d",&arr[i]);

    }

    /* print the elements of array. */

    printf("\nElements of array are :  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    
    for (i = 0; i < n; i++){

        if(arr[i] % 2 == 0){

            temp = arr[j];
            arr[j] = arr[i];        //shift all even numbers to left using loop.
            arr[i] = temp;
            
            j++;

        }

    }    

         
    printf("\nElements of new array :  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    return 0;
}