/* program to merge array elements of two arrays in ascending and descending order. */

#include<stdio.h>
#define size 100

int main (){
    int arr1[size], arr2[size], merge[size];
    int n, i, j, k, temp, size1, size2;

    printf("Enter the Array 1 size : ");            //Take the input from user for array size
    scanf("%d", &size1);

    printf("\nEnter %d elements of an array : \n\n", size1);

    for(i=0; i<size1; i++){

        printf("Element - %d : ", i);               //Take the elements input from user.
        scanf("%d", &arr1[i]);

        merge[i] = arr1[i];
    }

    k = i;
    
    printf("\nEnter the Array 2 size : ");            //Take the input from user for array size
    scanf("%d", &size2);

    printf("\nEnter %d elements of an array : \n\n", size2);

    for(i=0; i<size2; i++){

        printf("Element - %d : ", i);                 //Take the elements input from user.
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    
    printf("\nThe new array after merging in ascending order is:\n");

    for(i=0; i<k; i++){

        /* sort elements in ascending order */

        for(j=i+1; j<k; j++){

            if(merge[j] < merge[i]){

                temp = merge[i];          
                merge[i] = merge[j];      //swap the position of array elements to right position
                merge[j] = temp;

            }             
        
        }             
                  
        printf("Element - %d : %d \n", i, merge[i]);
    }


    printf("\nThe new array after merging in descending order is:\n");

    for(i=0; i<k; i++){

        /* sort elements in descending order */
        
        for(j=i+1; j<k; j++){

            if(merge[j] > merge[i]){

                temp = merge[i];          
                merge[i] = merge[j];      //swap the position of array elements to left position
                merge[j] = temp;

            }             
        
        }            

        printf("Element - %d : %d \n", i, merge[i]);
    }
    

    return 0;
}