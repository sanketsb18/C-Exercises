/* Compare strings using "strcmp" function.*/

#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    printf("Enter the first string:");          //Take the input of first string and store in a
    scanf("%s",a);


    printf("Enter the second string:");         //Take the input of first string and store in b
    scanf("%s",b);

    if(strcmp(a,b) == 0)                        //Use "strcmp" function to compare two strings.
    printf("Entered strings are equal.\n");
    else 
    printf("Entered strings are not equal.\n");
    
        return 0;
}