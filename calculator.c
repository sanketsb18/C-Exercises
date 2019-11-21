#include<stdio.h>

int main()

{
    char op;
    int num1, num2, result;
    printf("Welcome to simple calculator\n");
    printf("Enter the number1 [+-/*] Enter the number2:\n");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
        case '+':
         result = num1+num2;
        break;
        case '-':
         result = num1-num2;
        break;
        case '*':
         result = num1*num2;
         break;
        case '/':
        result = num1/num2;
        break;
        default:
        printf("Invalid operator\n");
        break;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}