/* Conversion of decimal number to binary, octal and hexadecimal using functions. */

#include<stdio.h>
#include<stdlib.h>
 
void conversion(int num, int base);         //conversion function declaration
 
int main(){
    int num, choice;
    printf("\nEnter a Positive Decimal Number : ");
    scanf("%d", &num);
    while(1){

        printf("\n1. Decimal To Binary Conversion");
        printf("\n2. Decimal To Octal Conversion");
        printf("\n3. Decimal To Hexadecimal Conversion");
        printf("\n4. Quit");
        printf("\nEnter Your Option : ");
        scanf("%d", &choice);

        switch(choice){
            case 1: printf("\nBinary Value:\t");
                    conversion(num, 2);         //function call
                    printf("\n");
                    break;
            case 2: printf("\nOctal Value:\t");
                    conversion(num, 8);         //function call
                    printf("\n");
                    break;
            case 3: printf("\nHexadecimal Value:\t");
                    conversion(num, 16);         //function call
                    printf("\n");
                    break;
            case 4: exit(0);
            default: printf("Enter a correct input\n");
        }
    }
    printf("\n");
    return 0;
}

/* conversion function definition. */
void conversion(int num, int base){
    int remainder = num % base; 
    
    if(num == 0){           //base condition
        return;
    }

    conversion(num / base, base);       //recursive call
    
    if(remainder < 10){
        printf("%d", remainder); 
    }
    else{
        printf("%c", remainder + 55 );
    }
}
