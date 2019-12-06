/* C program to sort elements of array in ascending order */

#include <stdio.h>
#define size 100    //define array size

int main(){

    int arr1[size];
    int n, i, j, tmp;

    printf("Input the size of array : ");       //Take the size of array input
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);

    for(i=0;i<n;i++){

        printf("element - %d : ",i);        //store elements in the array given by user
	    scanf("%d",&arr1[i]);

    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

            if(arr1[j] <arr1[i]){

                tmp = arr1[i];
                arr1[i] = arr1[j];      //swap the position of array elements to right position
                arr1[j] = tmp;

            }             
        
        }            

    }

         
    printf("\nElements of array in sorted ascending order:\n");

    for(i=0; i<n; i++){

        printf("%d  ", arr1[i]);

    }      
    
	    printf("\n\n");

    return 0;
    
}
