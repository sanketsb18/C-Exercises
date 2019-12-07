/* program in C to delete an element at desired position from an array. */


#include<stdio.h>
#define size 100

int main(){
    int n, i, p, arr[size], del;

    printf("Enter the size of an array : ");            //Take the input from user for array size
    scanf("%d", &n);

    printf("\nEnter %d elements of an array : \n\n", n);

    for(i=0; i<n; i++){

        printf("Element - %d : ", i);               //Take the elements input from user.
        scanf("%d", &arr[i]);
    }

    /* Ask for position of an element to delete. */

    printf("\nEnter the location from where you want to Delete an element : ");
    scanf("%d", &p);
    
    i=0;

    while(i!=p-1)
    
    i++;

    /* the position of i in the array will be replaced by the value of its right */

      while(i<n){
        arr[i]=arr[i+1];
        i++;
    }
        n--;
    printf("\nThe new list is : "); 
    for(i=0;i<n;i++)
        {
		   printf("  %d",arr[i]);
		}  
            printf("\n\n");

    
    printf("\nResultant array is : ");
    
    for (i = 0; i <= n; i++)    
    printf("\t%d\t", arr[i]);
    
    return 0;
}