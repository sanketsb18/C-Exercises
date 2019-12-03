/* program to count even and odd elements in the array. */

#include<stdio.h>
#define maxsize 100

int main(){

    int i,n, even, odd;
    int arr[maxsize];

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }

    even = 0;
    odd = 0;

    for(i=0; i<n; i++){

        if (arr[i]%2 == 0){

            even ++;
        }
        else {
            odd ++;
        }
    }
    
        printf("Total even elements: %d\n", even);
        printf("Total odd elements: %d\n", odd);

    return 0;
}