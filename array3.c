/* program to print all negative elements in the array. */

#include<stdio.h>
#define size 100

int main(){

    int arr[size], i, n;

    printf("Enter the array size:");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
        for(i=0; i<n; i++){
        
        scanf("%d", &arr[i]);

        }

        printf("All Negative elements of array are :");

            for (i=0; i<n; i++){

                if(arr[i]<0){

                    printf("\n%d", arr[i]);
                }
                
            }

    return 0;
}