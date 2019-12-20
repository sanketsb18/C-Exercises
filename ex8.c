/* Left shift bit operator. */

#include<stdio.h>

int main(){
    int a = 30;
    printf("number is shifted by 1 bit : %d\n", a >> 1);
    
    printf("number is shifted by 2 bit : %d\n", a >> 2);

    printf("number is shifted by 3 bit : %d\n", a >> 3);
    return 0;
}