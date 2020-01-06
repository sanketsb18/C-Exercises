/**
 * C Program to count number of occurrences of a given word in File
 * 	
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* function declaration and definition. */

int wc(char* file_path, char* word){
    FILE *fp;
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
    char key[20];
    int wordcount = 0;
    printf("Enter the word to be searched : ");
    scanf("%s",key); 	//the string to search for
    wordcount = wc("function19.c", key);
    printf("\nThe word occurs %d times in the file\n",wordcount);
    return 0;
}