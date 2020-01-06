/** program to write all the members of an array of structures to 
 * a file using fwrite(). Read the array from the file and display on the screen. */


#include <stdio.h>
#include<stdlib.h>

/* structure variable declaration */
struct student
{
   char name[50];
   int height;
};

int main(){
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i, num;

    printf("Enter number of students: ");
    scanf("%d", &num);

    fptr = fopen("dive.txt","w");
    
    for(i = 0; i < num; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        scanf("%s", stud1[i].name);
        printf("Enter height: "); 
        scanf("%d", &stud1[i].height); 
    }
    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);
    fptr = fopen("dive.txt", "r");
    fread(stud2, sizeof(stud2), 1, fptr);
    for(i = 0; i < num; ++i)
    {
        printf("\nName: %s\nHeight: %d\n", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}