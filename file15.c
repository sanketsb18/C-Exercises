/* Program to remove the specific word/character/ specific line from the file. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void removeAll(char * str, const char * toRemove);

FILE *fp;
FILE *Temp;

int main(){
    char path[100];    
    char toRemove[100];
    char buffer[1000];


    /* Input source file path path */
    printf("Enter path of source file: ");
    scanf("%s", path);

    printf("Enter word to remove: ");
    scanf("%s", toRemove);


    /*  Open files */
    fp  = fopen(path, "r");
    Temp = fopen("delete.tmp", "w"); 

    /* fopen() return NULL if unable to open file in given mode. */
    if (fp == NULL || Temp == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /*
     * Read line from source file and write to destination 
     * file after removing given word.
     */
    while ((fgets(buffer, BUFFER_SIZE, fp)) != NULL)
    {
        // Remove all occurrence of word from current line
        removeAll(buffer, toRemove);

        // Write to temp file
        fputs(buffer, Temp);
    }


    /* Close all files to release resource */
    fclose(fp);
    fclose(Temp);


    /* Delete original source file */
    remove(path);

    /* Rename temp file as original file */
    rename("delete.tmp", path);


    printf("\nAll occurrence of '%s' removed successfully.", toRemove);

    return 0;
}



/**
 * Remove all occurrences of a given word in string.
 */
void removeAll(char * str, const char * toRemove){

    int i, j, stringLen, toRemoveLen;
    int found;

    stringLen   = strlen(str);      // Length of string
    toRemoveLen = strlen(toRemove); // Length of word to remove


    for(i=0; i <= stringLen - toRemoveLen; i++)
    {
        /* Match word with string */
        found = 1;
        for(j=0; j < toRemoveLen; j++)
        {
            if(str[i + j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }

        /* If it is not a word */
        if(str[i + j] != ' ' && str[i + j] != '\t' && str[i + j] != '\n' && str[i + j] != '\0') 
        {
            found = 0;
        }

        /*
         * If word is found then shift all characters to left
         * and decrement the string length
         */
        if(found == 1)
        {
            for(j=i; j <= stringLen - toRemoveLen; j++)
            {
                str[j] = str[j + toRemoveLen];
            }

            stringLen = stringLen - toRemoveLen;

            // We will match next occurrence of word from current index.
            i--;
        }
    }
}