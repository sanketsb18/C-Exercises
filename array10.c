/* program to find largest and second largest value element in the array. */

#include<stdio.h>
#define size 100

int main (){
    int i, n, max1, max2, arr[size];

    printf("Enter the array size : ");          //take array size input from user
    scanf("%d", &n);

    printf("\nEnter the %d array elements : \n\n", n);

    for(i=0; i<n; i++){
        printf("Element - %d : ", i);       //store array elements given by user in the array
        scanf("%d", &arr[i]);
    

        if(max1<arr[i]){

            max2=max1;                  //find largest value element.
            max1=arr[i];

        }    

        else if (max2<arr[i]){

            max2=arr[i];                //find second largest element
        }

    }

    printf("\n%d is the largest number\n",max1);
    printf("%d is the second largest number\n",max2);
        
    return 0;
}