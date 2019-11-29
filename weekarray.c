#include<stdio.h>

int main(){

    int week;
    const char * WEEKS [] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};

    printf("Enter the week number(1-7):");
    scanf("%d", &week);


    if(week > 0 && week < 8)
    {
    
        printf("%s\n", WEEKS[week-1]);
    }
    else
    {
        printf("Invalid input! Please enter week number between 1-7.\n");
    }

    return 0;
}