#include<stdio.h>
int main(){
     int a, b, c;
     printf("Enter the number a:");
     scanf("%d", &a);

     printf("Enter the number b:");
     scanf("%d", &b);

     printf("Enter the number c:");
     scanf("%d", &c);



    if(a>b && a>c){

        printf("a is greater.\n");
    }
    else if (b>a && b>c){

        printf("b is greater.\n");
    
    }
    else {
        printf("c is greater\n");
    }

    return 0;
    
}