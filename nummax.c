/* maximum number between 3 numbers using nested if-else*/

#include<stdio.h>

int main(){
    int a,b,c;

    printf("Enter the first number a: ");
    scanf("%d", &a);

    printf("Enter the first number b: ");
    scanf("%d", &b);

    printf("Enter the first number c: ");
    scanf("%d", &c);

    if (a > b) {

        if (a > c) {

            printf("Maximum number is a: %d\n", a);
        }
        else {
            printf("Maximum number is c: %d\n", c);
        }
    }
    else {
        if (b > c) {
            printf("Maximum number is b: %d\n", b);
        }
        else {
            printf("Maximum number is c: %d\n", c);
        }
    }

    return 0;
}