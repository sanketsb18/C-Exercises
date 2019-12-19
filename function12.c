/* Write a program in C to input any two string from user at run-time
 and check whether the given two strings are Anagram or Not */

#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
    char str1[size], str2[size];
    int len, len1, len2, i, j, found=0, not_found=0;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    len1 = strlen(str1);
    len2 = strlen(str2);

    if(len1 == len2)
    {
        len = len1;
        for(i=0; i<len; i++)
        {
            found = 0;
            for(j=0; j<len; j++)
            {
                if(str1[i] == str2[j])
                {
                    found = 1;
                    break;
                }
            }
            if(found == 0)
            {
                not_found = 1;
                break;
            }
        }
        if(not_found == 1)
            printf("\nStrings are not Anagram\n");
        else
            printf("\nStrings are Anagram\n");
    }
    else
        printf("\nBoth string must contain same number of character to be an Anagram Strings\n");

    return 0;
}