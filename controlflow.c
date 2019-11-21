#include<stdio.h>

int main() {

    int a = 20;
    int b = 20;

    int i = 0;

    // if else
    /*
        if (condition) {
            true statements;
        }
        else {
            false statements;
        }
    */

    if (a < b) {
        printf("a is less than b\n");
    }
    else if (a == b) {
        printf("a and b are equal\n");
    }
    else {
        printf("a is greater than b\n");
    }

    if (a < b) {
        printf("a is less than b\n");
    }
    else {
        if (a == b) {
            printf("a and b are equal\n");
        }
        else {
            printf("a is greater than b\n");
        }
    }

    // Loops
    /*
        while(condition) {
            statements;
            incr/decr;
        }
    */
    
    while(i < 10) {
        if(i % 2 == 0) 
            printf("Codekul - ");
        else 
            printf("The Gurukul for Coders!\n");
        i++;
    }

    /*
        do {
            statements;
            incr/decr;
        }while(condition);
    */
    i = 30;
    do {
        printf("Codekul\n");
        i++;
    } while(i < 10);


    /*
        for(initialisation; condition; incr/decr) {
            statements;
        }
    */

    for (i = 0; i < 10; i++) {
        printf("Codekul\n");
    }

    return 0;
}
