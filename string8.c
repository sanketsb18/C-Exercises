/* program to convert the string to uppercase */

#include<stdio.h>
#define size 100

int main (){
    
    int i;
    char str[size];

    printf("Enter any string : ");
    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')      
        {
            str[i] = str[i] - 32;           //By substracting 32 to the ascii value the alphabets upper case case character 
        }
    }

    printf("Upper case string: %s\n", str);

    return 0;
}