/* concatenate strings using strcat function. */

#include<stdio.h>
#include<string.h>
#define maxsize 100

int main(){

    char a[maxsize], b[maxsize];

    printf("Enter the sring1:");
    scanf("%s", a);

    printf("Enter the sring2:");
    scanf("%s", b);

    strcat(a,b);

    printf("Concatenated string is: %s\n", a);

    return 0;
}