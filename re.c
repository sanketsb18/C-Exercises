/* Example using modf by TechOnTheNet.com */

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double i, f;

    /* Assign the value we will calculate the modf of */
    value = 1.7;

    /* Calculate the modf of the value returning the fractional and integral parts */
    f = modf(value, &i);

    /* Display the result of the calculation */
    printf("The Integral and Fractional parts of %f are %f and %f\n", value, i, f);

    return 0;
}