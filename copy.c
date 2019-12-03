/* program to copy elements of array 1 to array 2 */

#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
   int  source[MAX_SIZE], dest[MAX_SIZE];
   int i, size;

   printf("Enter the size of array:");
   scanf("%d", &size);

   printf("\nEnter elements of source array:\n");

   for(i=0; i<size; i++)
   {
       scanf("%d\t", &source[i]);
   }

   for(i=0; i<size; i++)
   {
       dest[i]=source[i];
   }

   printf("\n Elements of source array are:     ");
   for(i=0; i<size; i++)
   {
       printf("\t%d",source[i]);
   }

   printf("\n Elements of destination array are:");
   
   for (i = 0; i < size; i++)
   {
       printf("\t%d", dest[i]);
   }

   return 0;
}