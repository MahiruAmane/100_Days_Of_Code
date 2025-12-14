/*
Write a Program To Open An Existing File In Append Mode & Allow The User To Enter a New Line Of Text. 
Append The Text At The End Without Overwriting Existing Content.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char text[256], filename[100];

    printf("Please Enter The File Name : ");
    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    getchar();
    printf("Please Enter The User Gender (Male/Female) : ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "Gender : %s", text);
    fclose(file);

    printf("Text Appended Successfully");

    return 0;
}