#include <stdio.h>
#include <stdlib.h>
  
int main(){

    char str[1000];
    FILE *fptr;
    char fname[20]="test.txt";
    char name[20];
    int age;
    float salary;

    printf("\n\n Create a file (test.txt) and input text :\n");
	printf("----------------------------------------------\n"); 
    fptr=fopen(fname,"w");	
    if(fptr==NULL){
        printf(" Error in opening file!");
        exit(1);
    }
    printf(" Input a sentence for the file : ");
    
    fgets(str, sizeof str, stdin);
    fprintf(fptr,"%s",str);
    printf(" Enter the name : ");
    scanf("%s", name);
    fprintf(fptr, "Name    = %s\n", name);
    printf(" Enter the age : ");
    scanf("%d", &age);
    fprintf(fptr, "Age     = %d\n", age);
    printf(" Enter the salary : ");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  = %.2f\n", salary);
    fclose(fptr);
    printf("\n The file %s created and saved successfully...!!\n\n",fname);
    return 0;
}