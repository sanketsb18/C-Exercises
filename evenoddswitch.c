#include<stdio.h>

int main()

{
    int num;

    // Take a Input number from user 
    printf("Enter any number to check wheter it is even or odd: ");
    scanf("%d", &num);

    switch (num % 2)
    {
    // If n%2 == 0 is true number is even.
    case 0:
        printf("Number is Even\n");
        break;

    // Else if n%2 == 1 then number is odd.
    case 1:
        printf("Number is Odd\n");
        break;
    }
    return 0;
}