/*program to print all ascii values.*/

#include<stdio.h>

int main(){

    int c;
    for(c=0; c<=255; c++)
    {
    printf("Ascii value of %c is %d\n",c,c);
    }

    return 0;
}