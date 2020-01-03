/* conversion of binary number to decimal using function. */

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
 
int Binary_To_Decimal(int x);       //declaration of Binary_To_Decimal function. 

int main(){
    int binary_number, result;

    printf("\nEnter A Binary Value: \t");
    scanf("%d", &binary_number);

    result = Binary_To_Decimal(binary_number);          //function call
    
    printf("\nDecimal Equivalent of Binary Number: \t %d\n", result);
    return 0;
}

/* function definition */

int Binary_To_Decimal(int x){

    int decimal_number = 0, count = 0;
    while(x > 0){
        decimal_number = decimal_number + pow(2, count) * (x % 10);
        x = x / 10;
        count++;
    }
    return decimal_number;
}
