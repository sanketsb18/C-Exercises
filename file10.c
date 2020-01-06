/* Program to append a data of file to write name and marks of students. */

#include <stdio.h>
#include<stdlib.h>

int main()
{
   char name[50];
   int marks, i, num;
   
   printf("Enter number of students: ");
   scanf("%d", &num);
   
   FILE *fptr;

   fptr = (fopen("student.txt", "a"));      //open file to add data to file/ append data to a file.
   
   if(fptr == NULL){
       printf("Error!");        //exit if file nnot opened successfully
       exit(1);
    }

   for(i = 0; i < num; ++i){
        printf("For student%d\nEnter name: ", i+1);
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        fprintf(fptr,"\nName: %s \nMarks=%d \n", name, marks);
    }
    fclose(fptr);       //close file
    return 0;
}