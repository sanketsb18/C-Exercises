#include<stdio.h>

int main() {

    // Assignment
    /*
        =
    */

    int a = 10;
    int b = 20;

    int res = 0;

    // Arithmetic
    /*
        +
        -
        *
        /
        %
    */

    res = b % a;

    // Compound Assignment
    /*
        +=
        -=
        *=
        /=
        %=
    */

    a += b;     // a = a + b;


    // Comparision
    /*
        <
        >
        <=
        >=
        ==
        !=
    */

    res = a != b;

    // Logical
    /*
        &&
        ||
        !
        p   q   &&  ||  !p
        0   0   0   0   1
        0   1   0   1   1
        1   0   0   1   0
        1   1   1   1   0
    */

    res = !(!(a < b) && !(a < 50));

    // Ternarry
    /*
        var = condition ? true part : false part;
    */

    res = a < b ? 40 : 60;

    printf("Result: %d\n", res);

    return 0;
}
