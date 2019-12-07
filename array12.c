/* program to insert a new element in the given array. */

#include<stdio.h>
#define size 100

int main(){
    int n, i, p, arr[size], new;

    printf("Enter the size of an array : ");            //Take the input from user for array size
    scanf("%d", &n);

    printf("\nEnter %d elements of an array : \n\n", n);

    for(i=0; i<n; i++){

        printf("Element - %d : ", i);               //Take the elements input from user.
        scanf("%d", &arr[i]);
    }

    /* Ask for position of new element to add. */

    printf("\nEnter the location where you want to insert a new element : ");
    scanf("%d", &p);
    
    /* Take the new element from user */

    printf("\nPlease enter the new value : ");
    scanf("%d", &new);
    
    for (i = n - 1; i >= p - 1; i--)    
    arr[i+1] = arr[i];
                                            //assign new element value to old array.
    arr[p-1] = new;
    
    printf("\nResultant array is : ");
    
    for (i = 0; i <= n; i++)    
    printf("\t%d\t", arr[i]);
    
    return 0;
}