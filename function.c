#include<stdio.h>

void max(int x, int y)

{
    if (x > y)
    {
        printf("%d is greater\n", x);
    }
    else
    {
        printf("%d is greater\n", y);
    }
}

int main()

{
    int a,b;
    printf("Enter the number a:");
    scanf("%d", &a);

    printf("Enter the number b:");
    scanf("%d", &b);

    max(a,b);

}

