/*
Write a program in C to print all perfect numbers in given range using the function.

Test Data :
Input lowest search limit of perfect numbers : 1
Input highest search limit of perfect numbers : 100
Expected Output :

The perfect numbers between 1 to 100 are :
6 28
*/

#include<stdio.h>

/* Function declarations */
int isPerfect(int num);
void printPerfect(int start, int end);


int main()
{
    int start, end;
    
    /* Take lower and upper limit to print perfect numbers from user */

    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &start);

    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &end);
    
    printf("The perfect numbers between %d to %d are : ", start, end);
    printPerfect(start, end);
    
    return 0;
}


/*
 * Check whether the given number is perfect or not.
 */
int isPerfect(int num)
{
    int i, sum;
    
    /* Finds sum of all divisors */
    sum = 0;
    for(i=1; i<num; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }

    /* 
     * If the sum of proper positive divisors equals to given number 
     * then the number is perfect number
     */
    if(sum == num)
        return 1;
    else
        return 0;
}



/*
 * Print all perfect numbers between given range start and end.
 */
void printPerfect(int start, int end)
{

    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d ", start);
        }
        
        start++;
    }   

    printf("\n");
}