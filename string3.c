/* strlen */

#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    printf("Enter the name:");
    scanf("%s", name);
    float len;
    len = strlen(name);
    printf("The Length of a Given String '%s' = %.f \n", name, len);

    return 0;
}