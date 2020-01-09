/* C program to compare two files character by character. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *fp1, *fp2;

int main() {
   int ch1, ch2;
   char fname1[40], fname2[40];

   printf("Enter name of first file :");
   scanf("%s",fname1);

   printf("Enter name of second file:");
   scanf("%s", fname2);

   /* open files with read mode */
   fp1 = fopen(fname1, "r");
   fp2 = fopen(fname2, "r");

   /* return NULL and exit if unable to open file in given mode. */
   if (fp1 == NULL) {
      printf("\nCannot open %s for reading \n", fname1);
      exit(1);
   } 
   else if (fp2 == NULL) {
      printf("\nCannot open %s for reading \n", fname2);
      exit(1);
   }
   else {
      ch1 = getc(fp1);     //get data of file 1 and file 2.
      ch2 = getc(fp2);

      /* compare the characters and strings of file 1 and file 2. */
      while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2)) {
         ch1 = getc(fp1);
         ch2 = getc(fp2);
      }

      if (ch1 == ch2)
         printf("\nFiles are identical n\n");
      else if (ch1 != ch2)
         printf("\nFiles are Not identical n\n");

      fclose(fp1);
      fclose(fp2);
   }
   return (0);
}