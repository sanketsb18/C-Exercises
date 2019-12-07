/* program to copy elements of array 1 to array 2 */

#include<stdio.h>
#define size 100

int main()
{
   int  arr1[size], arr2[size];
   int i, n;

   printf("Enter the size of an array : ");             //take input from user array size
   scanf("%d", &n);

   printf("\nEnter %d elements of an array 1 :\n\n", n);

   for(i=0; i<n; i++){
       printf("Element - %d : ", i);                    //take the elements of array 1 from user
       scanf("%d", &arr1[i]);
   }

   for(i=0; i<n; i++){
       arr2[i]=arr1[i];                             //copy/assign elements of array 1 to array 2
   }

   printf("\n Elements of an array 1 are:");
   for(i=0; i<n; i++){
       printf("\t%d",arr1[i]);
   }

   printf("\n Elements of an array 2 are:");
   
   for (i = 0; i < n; i++){
       printf("\t%d", arr2[i]);
   }

   return 0;
}