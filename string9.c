/* program to toggle case of each characters of a string using loop. */

#include<stdio.h>
#define size 100

int main (){

    int i;
    char str[size];

    printf("Enter any string : ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')      
        {
            str[i] = str[i] + 32;           //By adding 32 to the ascii value the alphabets lower case character 
        }

        else if(str[i]>='a' && str[i]<='z')      
        {
            str[i] = str[i] - 32;           //By substracting 32 to the ascii value the alphabets lower case character 
        }
    }

    printf("String after toggling case : %s\n", str);


    return 0;
}