/*To copy one string to other string using while loop*/

#include<stdio.h>
#include<string.h>
#define maxsize 100

int main(){

    char str1[maxsize];
    char str2[maxsize];
    int i;

    printf("Enter the string1:");
    scanf("%s", str1);

    // Copy text1 to text2 

    i=0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    //Makes sure that the string is NULL terminated
    str2[i] = '\0';

    printf("First string = %s\n", str1);
    printf("Second string = %s\n", str2);
    printf("Total characters copied:%d\n", i);

    return 0;

}