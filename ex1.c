/* Write a C program to check two given integers whether
 either of them is in the range 100..200 inclusive. */

 #include<stdio.h>

 int main (){
     int n1,n2;

     printf("Enter number 1:");
     scanf("%d", &n1);

     printf("Enter number 2:");
     scanf("%d", &n2);

     
        if (n1>=100 && n1<=200){

        printf("The number n1 is in the range of 100-200\n");

        }

        else{ 

        printf("The number n1 is not in the 100-200 range.\n");
        
        }


        if (n2>=100 && n2<=200){

        printf("The number n2 is in the range of 100-200\n");
        }

        else{ 

            printf("The number n2 is not in the 100-200 range.\n");
        }

  return 0;
 }