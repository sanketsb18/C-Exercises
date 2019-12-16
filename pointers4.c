/* C Program to Swap Two Numbers / Variables using Pointer */

#include<stdio.h>
 
void swap(int *num1, int *num2) {
   int temp;
   temp = *num1;                    
   *num1 = *num2;
   *num2 = temp;
}
 
int main() {
   int num1, num2;
 
   printf("\nEnter the first number : ");
   scanf("%d", &num1);
   printf("\nEnter the Second number : ");
   scanf("%d", &num2);
 
   swap(&num1, &num2);
 
   printf("\nFirst number  : %d\n", num1);
   printf("\nSecond number : %d\n", num2);
 
   return (0);
}