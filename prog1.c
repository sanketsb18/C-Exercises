#include<stdio.h>
#define MAX_SIZE 10000

int main()
{
int arr[MAX_SIZE];
int i,n;

printf("Enter the size of array:\n");
scanf("%d", &n);

printf("Enter %d elements in the array:\n", n);
for(i=0; i<n; i++)
{
    scanf("%d", &arr[i]);
}

printf("Elements in the array are:\n");
for(i=0; i<n; i++)
{
    printf("%d \n", arr[i]);
}
    return 0;
}