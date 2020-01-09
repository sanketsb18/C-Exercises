/*
 * C Program Delete a specific Line from a Text File
 */
#include <stdio.h>
 
int main(){
    FILE *fptr1, *fptr2;
    char filename[40];
    char ch;
    int delete_line, temp = 1;
 
    printf("Enter file name: ");
    scanf("%s", filename);
    
    //open file in read mode
    fptr1 = fopen(filename, "r");
    ch = getc(fptr1);
    while (ch != EOF){
        printf("%c", ch);
        ch = getc(fptr1);
    }
    
    //rewind
    rewind(fptr1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    
    //open new file in write mode
    fptr2 = fopen("replica.c", "w");
    ch = getc(fptr1);
    while (ch != EOF){
        ch = getc(fptr1);
        if (ch == '\n')
            temp++;
    
            //except the line to be deleted
            if (temp != delete_line){
    
                //copy all lines in file replica.c
                putc(ch, fptr2);
            }
    }
    fclose(fptr1);
    fclose(fptr2);
    remove(filename);

    //rename the file replica.c to original name
    rename("replica.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fptr1 = fopen(filename, "r");
    ch = getc(fptr1);
    while (ch != EOF){
        printf("%c", ch);
        ch = getc(fptr1);
    }
    fclose(fptr1);
    return 0;
}