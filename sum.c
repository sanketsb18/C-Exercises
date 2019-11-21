
#include <stdio.h>
int main()
{

    //using for loop

    int i;
    int sum = 0;
    for (i = 50; i <= 70; i++)
    {
        sum = sum + i;
    }

    printf("The sum is %d\n", sum);

   //using do while loop
    i = 50;

    do
    {

        sum = sum + i;

        printf("The sum is %d\n", sum);

        i++;

    }

    while (i <= 70);

    //using while loop

    i = 50;

    while (i <= 70)
    {
        sum = sum + i;
        printf("The sum is %d\n", sum);
        i++; 
    } */

    return 0;
}