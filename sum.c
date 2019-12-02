#include<stdio.h>

int main() {

    int lower = 50, upper = 70, sum = 0;

    while (lower <= upper) {
        sum += lower;
        lower++;
    }

    sum = 0;
    do {
        sum += lower;
        lower++;
    } while(lower <= upper);

    sum = 0;
    for ( lower = 50, upper = 70; lower <= upper; lower++) {
        sum += lower;
    }
    
    printf("Sum: %d\n", sum);

    return 0;
}