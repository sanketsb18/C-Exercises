/* strcpy */

#include<stdio.h>
#include<string.h>
#define maxsize 100

int main(){
    char a[maxsize] , b[maxsize];

    // Take the input of any strings

    printf("Enter any string:");
    scanf("%s",a);

    strcpy(b, a);       //Use strcpy function to copy array elements of a to b

    printf("First string = %s\n", a);
    printf("Second string = %s\n", b);

    return 0;
}