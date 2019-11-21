#include<stdio.h>

int main() {/*
    int x;
    printf("%p\n", &x);

    int x=10;
    int *ptr;
    ptr=&x;*/


    int num=10;
    int *ptr = &num;
    printf("value of num         = %d\n", num);
    printf("Address of num       = %p\n", &num);

    printf("Value of ptr         = %p \n", ptr);
    printf("Address of ptr       = %p \n", &ptr);
    printf("Value pointed by ptr = %d \n\n", *ptr);

    num=20;
    printf("after changing the value of num directly\n");
    printf("value of num         = %d\n", num);
    printf("value pointed by ptr = %d\n\n", *ptr);

    *ptr = 100;
    printf("After changing value pointed by ptr. \n");
    printf("Value of num         = %d \n", num);
    printf("Value pointed by ptr = %d \n", *ptr);
    return 0;

}
