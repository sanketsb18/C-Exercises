/* Program to count number of vowels and consonants using if */

#include<stdio.h>
#include<string.h>
#define size 100

int main (){
    char str[size]; 
    int i, len, vowel, consonant;

    /* Input strings from user */
    printf("Enter any string: ");
    scanf("%s", str);


    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            switch(str[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowel++;            //count the vowels
                    break;
                default:
                    consonant++;        //count the consonant
            }
        }
    }

    printf("Total number of vowels = %d\n", vowel);
    printf("Total number of consonants = %d\n", consonant);

    return 0;
}