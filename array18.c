/* Program to delete duplicate elements from array. */

#include<stdio.h>
#define size 100

int main (){

    int arr[size]; 
    int n;          
    int i, j, k;       

    printf("Enter the size of an array : ");             //take input from user array size
    scanf("%d", &n);

    printf("\nEnter %d elements of an array 1 :\n\n", n);

    for(i=0; i<n; i++){
       printf("Element - %d : ", i);                    //take the elements of array 1 from user
       scanf("%d", &arr[i]);
    }


    /* Find duplicate elements in array */
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        
            if(arr[i] == arr[j])
            {
               
                for(k=j; k<n; k++)
                {
                    arr[k] = arr[k + 1];        //delete duplicate element
                }

                n--;        //Decrement size after removing duplicate element

                j--;        //If shifting of elements occur then don't increment

            }
        }
    }


    // Print array after deleting duplicate elements

    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n\n");


    return 0;
}