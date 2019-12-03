/* program to calculate the average of given araay elements. */

#include<stdio.h>
#define size 100

int main (){
    int n,i, num[size], sum = 0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avg = sum / n;
    printf("Average = %d\n", avg);

    return 0;
}