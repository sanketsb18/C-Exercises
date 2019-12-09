/* program to sort elements of array in ascending order */

#include <stdio.h>
#define size 100    //define array size

int main(){

    int arr[size];
    int n, i, j, tmp;

    printf("Input the size of array : ");       //Take the size of array input
    scanf("%d", &n);

    printf("Input %d elements in the array :\n",n);

    for(i=0;i<n;i++){

        printf("element - %d : ",i);        //store elements in the array given by user
	    scanf("%d",&arr[i]);

    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){

            if(arr[j] <arr[i]){

                tmp = arr[i];
                arr[i] = arr[j];      //swap the position of array elements to right position
                arr[j] = tmp;

            }             
        
        }            

    }

         
    printf("\nElements of an array in sorted ascending order:  ");

    for(i=0; i<n; i++){

        printf("%d  ", arr[i]);

    }      
    
	    printf("\n\n");

    return 0;
    
}
