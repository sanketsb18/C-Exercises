/* Arrays */

#include<stdio.h>
#define MAX_SIZE 1000
int arr[MAX_SIZE];
int size;

int main()
{
    int arr1[5]= {1,2,3,4,5};
    char arr2[5]={'a', 'b', 'c', 'd', 'e'};
    printf("Enter the size of an array:");
    scanf("%d", &size);

    int i;

    for (i = 0; i < size; i++)

        {
        printf("Enter %d element of array:", i);
        scanf("%d", &arr[i]);
        }

        for (i = 0; i < size; i++)
             {
            printf("\n The %d element of arr is: %d\n", i, arr[i]);
             }

            for (i = 0; i < 5; i++)
            {
                printf("%d\t", arr1[i]);
                printf("%c\n", arr2[i]);
            }
            return 0;

}