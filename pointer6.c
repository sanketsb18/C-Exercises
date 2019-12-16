/* program to copy one array to another array using pointers */

#include<stdio.h>
#define size 100

void printArray(int arr[], int n);

int main (){

    int arr_src[size], arr_dest[size];
    int i, n;

    int *src_ptr = arr_src;
    int *dest_ptr = arr_dest;
    int *end_ptr;

    /*
     * Input size and elements in source array
     */
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: \n");
    for (i = 0; i < n; i++){
        printf("Element - %d :", i);
        scanf("%d", (src_ptr + i));
    }


    // Pointer to last element of source_arr
    end_ptr = &arr_src[n - 1];


    /* Print source and destination array before copying */
    printf("\nSource array before copying: ");
    printArray(arr_src, n);

    printf("\nDestination array before copying: ");
    printArray(arr_dest, n);



    /*
     * Run loop till source_ptr exists in source_arr
     * memory range.
     */
    while(src_ptr <= end_ptr)
    {
        *dest_ptr = *src_ptr;

        // Increment source_ptr and dest_ptr
        src_ptr++;
        dest_ptr++;
    }


    /* Print source and destination array after copying */
    printf("\n\nSource array after copying: ");
    printArray(arr_src, n);

    printf("\nDestination array after copying: ");
    printArray(arr_dest, n);


    return 0;

}

/**
 * Function to print array elements.
 * 
 * @arr     Integer array to print.
 * @size    Size of array.
 */
void printArray(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
}