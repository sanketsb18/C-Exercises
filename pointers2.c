/* Example to access pointer to pointer*/

#include<stdio.h>

int main (){

    int num = 10;        // Declare an integer variable
    int *ptr   = &num;   // Pointer to integer
    int **dPtr = &ptr;   // Pointer to integer pointer

    printf("Value of dPtr = %p \n", dPtr);   // Print value of dPtr, i.e address of ptr
    printf("Value of ptr = %p \n", *dPtr);   // Print value of ptr, i.e. address of num
    printf("Value of num = %d \n", **dPtr);  // Print value of num
    
    return 0;
}