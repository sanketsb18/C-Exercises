/* program to find total number of alphabets, digits or special characters in a string. */

#include<stdio.h>
#include<string.h>
#define size 100

int main(){
    char str[size];
    int alphabets, digits, others, i;
    alphabets = digits = others = 0;

    printf("Enter any string : ");
    scanf("%s", str);

    // check and count the character is alphabet or digit or special characters.

    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", others);

    return 0;
}
