/* program to find the largest element in the array. */

#include<stdio.h>
#define size 100            //define array size

int main (){
    int n, i, max, arr[size];

    printf("Enter the array size:");            //take the array size input
    scanf("%d", &n);

    printf("Enter %d elements in the array: \n", n);

    for(i=0; i<n; i++){

        printf("Element - %d : ", i);       //store array elements given by user in array
        scanf("%d", &arr[i]);

    }

    max = arr[0];                //assume first element as smallest value

    for(i=0; i<n; i++){         //loop to find maximum value

        if(max<arr[i]){

            max = arr[i];           //assign largest value to max
        }

    }


    printf("Largest element is %d \n", max);

    return 0;
}