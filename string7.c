/* program to convert string to lowercase */

#include<stdio.h>
#define size 100

int main(){
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
    }

    printf("Lower case string: %s\n", str);


    return 0;
}