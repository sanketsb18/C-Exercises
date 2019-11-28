#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int main(){
    char a[MAX_SIZE] , b[MAX_SIZE];

    printf("Enter any string:");
    scanf("%s",a);

    strcpy(b, a);

    printf("First string = %s\n", a);
    printf("Second string = %s\n", b);

    return 0;
}