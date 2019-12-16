/* Program to Check Prime and Armstrong Number using function */

#include<math.h>
#include<stdio.h>


int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
int main() {
    int n, flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // check prime number
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    // check Armstrong number
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}
int checkPrimeNumber(int n) {
    int i, flag = 1;
    for (i = 2; i <= n / 2; ++i) {
        // condition for non-prime number
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
int checkArmstrongNumber(int num) {
    int original, rem, result = 0, n = 0, flag;
    original = num;
    while (original != 0) {
        original /= 10;
        ++n;
    }
    original = num;
    while (original != 0) {
        rem = original % 10;
        result += pow(rem, n);
        original /= 10;
    }
    // condition for Armstrong number
    if (result == num)
        flag = 1;
    else
        flag = 0;
    return flag;
}
