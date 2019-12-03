/* program to merge array elements */

#include<stdio.h>
#define maxsize 1000


int main()
{
    int arr1[maxsize], arr2[maxsize], mergearray[maxsize * 2];
    int size1, size2, mergesize;
    int index1, index2, mergeindex;
    int i;


    printf("\nEnter the size of first arrray:");
    scanf("%d", &size1);


    printf("\nEnter the elements in first array:\t");
    for(i=0; i<size1; i++)
   {
    scanf("%d\t", &arr1[i]);
    }


    printf("\nEnter the size of second array:");
    scanf("%d", &size2);

    printf("\nEnter the elements of second array:\t");

    for(i=0; i<size2; i++)
    {
    scanf("%d\t", &arr2[i]);
    }

    mergesize = size1 + size2;

    index1=0;
    index2=0;
    for(mergeindex=0; mergeindex<mergesize; mergeindex++)
        {


            if(index1>=size1 || index2>=size2)
            {
                break;
            }

            if(arr1[index1]=arr2[index2])
            {

                mergearray[mergeindex]=arr1[index1];
                index1++;

            }

            else
            {
                
                mergearray[mergeindex]=arr2[index2];
                index2++;
            }


            while(index1<size1)

            {

                mergearray[mergeindex]=arr1[index1];
                mergeindex++;
                index1++;
            }

            while(index2<size2)
            {
                mergearray[mergeindex]=arr2[index2];
                mergeindex++;
                index2++;

            }
            
                printf("Array merged in ascendong order:");
                for(i=0; i<mergesize; i++)
                {
                    printf("%d\t", mergearray[i]);

                }

        }





    return 0;


}