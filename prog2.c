#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    if(n == 1) {
        printf("one\n");
    }
    else if(n == 2) {
        printf("two\n");
    }
    else if(n == 3) {
        printf("three\n");
    }
    else if(n == 4) {
        printf("four\n");
    }
    else if(n == 5) {
        printf("five\n");
    }
    else if(n == 6) {
        printf("six\n");
    }
    else if(n == 7) {
        printf("seven\n");
    }
    else if(n == 8) {
        printf("eight\n");
    }
    else if(n == 9) {
        printf("nine\n");
    }
    else {
        printf("Greater than 9\n");
    }
    
    

    char* represent[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    scanf("%d", &n);

    if(n > 9) {
        printf("%s\n", represent[0]);
    }
    else {
        printf("%s/n", represent[n]);
    }

    return 0;
}