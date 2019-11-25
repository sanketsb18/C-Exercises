#include <stdio.h>

int main()
{    
    int year;    

    //Take the input year from user  
    printf("Enter a year to check if it is a leap year\n");
    scanf("%d", &year);
          

    //conditions to check year is leap year or not There are 3 conditions     
    if ( year % 400 == 0)      
    printf("%d is a leap year.\n", year);  
        
    else if ( year % 100 == 0)      
    printf("%d is not a leap year.\n", year); 
         
    else if ( year % 4 == 0 )      
    printf("%d is a leap year.\n", year);
    
    else      
    printf("%d is not a leap year.\n", year);      
    
    return 0;    
}