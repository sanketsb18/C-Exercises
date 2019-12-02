/* print the alphabets from a to z */

#include <stdio.h>

int main()
{
    char ch, a;

    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        printf("%c\n", ch);
    }

    printf("Alphabets from A to Z are :");
    for(a='A'; a<='Z'; a++)
    {
        printf("%c\n", a);
    }


    
    return 0;
}