/* Write a C program to check if a triple is presents in an array of integers
 or not. If a value appears three times in a row in an array it is called a triple. */


#include<stdio.h>
#define size 100

int main (){

    int n, i, triple=0; 
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

    /* find if there any triples in array.*/

    for(i=0; i<n; i++){

        if(arr[i] == arr[i+1] == arr[i+2]){
            triple++;
        }
                
    }    

    printf("There are %d triples in array. \n\n", triple);
    


    return 0;
}