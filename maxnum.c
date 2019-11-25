/*#include<stdio.h>
int main (){

    int a, b, c, num;
    printf("Enter the numbers A, B and C");
    scanf("%d%d%d", &a, &b, &c);

    if(a>=b && a>=c)
{
    printf("A is the maximum number.", a);
 
}
    else if (b>=a && b>=c);
 {
    printf("B is the maximum number.", b);
  
   }
   
     else printf("C is the maximum number.",c);

    return 0;
}
*/




#include <stdio.h> 
int main() 
{ 
    int A, B, C, largest, max; 
  
    printf("Enter three numbers: "); 
    scanf("%d %d %d", &A, &B, &C); 
  
    max = (A > B && A > C) ? A :(B > C) ? B : C;
  
    printf("largest number is %d\n", max);
  
    return 0; 
}