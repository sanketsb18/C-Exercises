/* Fibonacci series till 100 */

#include<stdio.h>

int main() {

    // 0 1 1 2 3 5 8 ...

    int a = -1, b = 1, c = 0;

    while (c < 100) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}
    
/*Fibonacci series using function.

#include<stdio.h>

unsigned long long fibo(int num);

int main()

{
int num;
unsigned long long fibonacci;
printf("Enter any number to find nth fibonacci term:");
scanf("%d", &num);
fibonacci = fibo(num);

printf("%d Fibonacci term is %llu\n", num, fibonacci);


   return 0; 
}


unsigned long long fibo(int num)
{
    if(num == 0)
    return 0;
    else if(num == 1)
    return 1;
    else
    return fibo(num-1) + fibo(num-2);
}*/