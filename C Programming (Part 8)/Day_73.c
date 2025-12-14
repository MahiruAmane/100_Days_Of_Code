/*
Write a Program To Read a Text File & Count The Total Number Of Characters, Words & Lines. 
A Word Is Defined As a Sequence Of Non Space Characters Separated By Spaces Or Newlines.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Please Enter The Name Of The File : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf(" There Was An Error Opening The File %s", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        characters++;

        if (ch == '\n') 
        {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') 
        {
            inWord = 0;
        } 
        else if (inWord == 0) 
        {
            inWord = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n') 
    {
        lines++;
    }

    fclose(file);

    printf("Total Characters In The File : %d\n", characters);
    printf("Total Words In The File : %d\n", words);
    printf("Total Lines In The File : %d\n", lines);

    return 0;
}