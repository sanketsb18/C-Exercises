/* strcpy */

#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main(){
    char a[MAX_SIZE] , b[MAX_SIZE];

    // Take the input of any strings

    printf("Enter any string:");
    scanf("%s",a);

    strcpy(b, a);       //Use strcpy function to copy array elements of a to b

    printf("First string = %s\n", a);
    printf("Second string = %s\n", b);

    return 0;
}