/* dynamic memory allocation - malloc */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(){
   char *mem_allocation;
   /* memory is allocated dynamically */
   mem_allocation = malloc( 20 * sizeof(char) );
   if( mem_allocation== NULL ){
      printf("Couldn't able to allocate requested memory\n");
   }
   else{
      strcpy( mem_allocation,"Hello");
   }
   printf("Dynamically allocated memory content : %s\n", mem_allocation );
   free(mem_allocation);
}