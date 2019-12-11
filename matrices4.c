/* C program to store temperature of two cities of a week and display it. */

#include <stdio.h>
#define size 100

int main(){
    int DAYS, CITY;
    int i,j, m, n;
    int temperature[size][size];

    /* Take input from user for number of cities and days. */

    printf("Enter the number of cities : ");
    scanf("%d", &CITY);
    printf("Enter the number of Days : ");
    scanf("%d", &DAYS);

    /* enter the temperature for respective city and day using nested for loop. */

    printf("Enter the temperature of the cities for respective days : \n");
    for (i = 0; i < CITY; ++i){
        for (j = 0; j < DAYS; ++j){
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
        }
    }
    
    /* take input to check temperature of respective day and city. */
    
    printf("Enter the city and day to check temparature :");
    scanf("%d%d", &m, &n);

    printf("The temperature of city %d on day %d is : %d\n", m, n, temperature[m][n]);
    
  return 0;
}