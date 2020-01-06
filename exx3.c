/**
 * C Program to count number of occurrences of a given word in File 	
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

FILE *fp;

/* function declaration and definition. */

int wc(char* file_path, char* word){
    
    int count = 0;
    int ch, len;

    if(NULL==(fp=fopen(file_path, "r")))
		return -1;
    len = strlen(word);
    for(;;){
		int i;
		if(EOF==(ch=fgetc(fp))) break;
		if((char)ch != *word) continue;
		
		for(i=1;i < len;++i){
			if(EOF==(ch = fgetc(fp))) 
				goto end;
			if((char)ch != word[i]){
				fseek(fp, 1-i, SEEK_CUR);
				goto next;
			}
		}
		++count;
		next: ;
    }
	end:
		fclose(fp);
		return count;
}

int main()
{
    char key[20], path[100];
    int wordcount = 0;

	printf("Enter the FILE path and name : ");
    scanf("%s",path); 	//the string to search for
	
	fp= fopen(path, "r");

	/* Exit if file not opened successfully */
    if (fp == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");

        exit(EXIT_FAILURE);
    }

    printf("Enter the word to be searched : ");
    scanf("%s",key); 	//the string to search for

    wordcount = wc(path, key);		//Function call

    printf("\nThe word occurs %d times in the file\n",wordcount);
    return 0;
}