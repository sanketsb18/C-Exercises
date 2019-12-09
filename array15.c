/* program to sort elements of array in descending order */

#include<stdio.h>
#define size 100        //define array size

int main (){
    int n, i, j, temp;
    int arr[size];

    printf("Enter the size of array : ");           //take the input for size of an array from user
    scanf("%d", &n);

    printf("\nEnter %d elements in the array  \n", n);
    
    for(i=0; i<n; i++){

        printf("Element - %d : ",i);            //take the array elements from the user
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){

        for(j=i+1; j<n; j++){

            if(arr[j]>arr[i]){

                temp=arr[i];
                arr[i]=arr[j];          //swap the position of array elements to the left position
                arr[j]=temp;
            }
        }
    }

    printf("\nThe elements of an array in sorted descending order : ");

    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\n\n");

    return 0;
}