#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
   int  source[MAX_SIZE], dest[MAX_SIZE];
   int i, size;

   printf("Enter the size of array:");
   scanf("%d", &size);

   printf("\nEnter elements of source array\t");

   for(i=0; i<size; i++)
   {
       scanf("%d", &source[i]);
   }

   for(i=0; i<size; i++)
   {
       dest[i]=source[i];
   }

   printf("\n Elements of source array are:");
   for(i=0; i<size; i++)
   {
       printf("%d\t",source[i]);
   }

   printf("\n Elements of destination array are:");
   
   for (i = 0; i < size; i++)
   {
       printf("%d\t", dest[i]);
   }

   return 0;
}