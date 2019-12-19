/* program to check whether the string is anagram or not not. */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 100

int anagram(char *str1, char *str2);
int main(){
    char str1[size], str2[size];

    printf("Enter the string 1 : ");
    scanf("%s", str1);

    printf("Enter the string 2 : ");
    scanf("%s", str2);


    if(anagram(str1, str2) == 1){
       printf(" %s and %s are Anagram.\n\n",str1,str2);
    } 
    else{
       printf(" %s and %s are not Anagram.\n\n",str1,str2);
    }

    return 0;
}

//Function to check whether two passed strings are anagram or not
int anagram(char str1[], char str2[]){
    
    int first[26] = {0}, second[26] = {0}, c=0;

    // Calculating frequency of characters of the first string

    while (str1[c] != '\0'){
    first[str1[c]-'a']++;
    c++;
    }

    c = 0;

    while (str2[c] != '\0'){
        second[str2[c]-'a']++;
        c++;
    }

    // Comparing the frequency of characters

    for (c = 0; c < 26; c++)
        if (first[c] != second[c])
        return 0;

    return 1;
}
