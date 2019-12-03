/* program to find sum of array elements */

#include<stdio.h>
#define size 100

int main(){
    int n, i, arr[size], sum=0;

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i=0; i<n; i++){
        
        scanf("%d", &arr[i]);

        sum += arr[i];
    }


    printf("sum of all array elements : %d\n", sum);

    return 0;
}