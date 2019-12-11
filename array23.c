/* Write a C program to rotate the elements of a given array
 of integers (length 4 ) in left direction and return the new array. */

 #include<stdio.h>
 #define size 4

 int main (){
    int arr[size];
    int i, j, temp;


    printf("Enter 4 elements in the array :\n");

    for(i=0;i<size;i++){

        printf("element - %d : ",i);        //store elements in the array given by user
	    scanf("%d",&arr[i]);

    }

    /* print the elements of array. */

    printf("\nElements of array are :  ");

    for(i=0; i < size; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

    temp = arr[0];              //assign temp first element of array

    for (i = 0; i < size-1; i++){
        arr[i] = arr[i+1];        //rotate the array in left direction using for loop.
    } 

    arr[size-1] = temp;         
    
        
    printf("\nArray after rotating elements :  ");

    for(i=0; i < size; i++){

        printf("%d  ", arr[i]);

    }      
    
	printf("\n\n");

     return 0;
 }
