/* C program to input and print array elements using pointers */

#include <stdio.h>

#define size 100 

int main()
{
    int arr[size];
    int n, i;
    int * ptr = arr;    // Pointer to arr[0] 

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements in array :\n");
    for (i = 0; i < n; i++)
    {
        printf("Element - %d :", i);
        scanf("%d", ptr);
        ptr++;                       // Move pointer to next array element
                                           
    }

    // Make sure that pointer again points back to first array element
    ptr = arr;

    printf("Array elements : ");
    for (i = 0; i < n; i++)
    {
        // Print value pointed by the pointer
        printf("%d ", *ptr);

        // Move pointer to next array element
        ptr++;
    }

    return 0;
}