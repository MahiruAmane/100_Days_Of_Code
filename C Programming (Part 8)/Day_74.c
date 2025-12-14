/*
Write a Program To Take Two Files From The User – Source File & Destination File. 
Copy All The Contents From The Source File To The Destination File Using fgetc() & fputc().
*/

#include <stdio.h>

int main() 
{
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    int ch;

    printf("Please Enter The Source File Name : ");
    scanf("%s", sourcePath);

    printf("Please Enter The Destination File Name : ");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");

    if (sourceFile == NULL) 
    {
        printf("There Was An Error Opening The Source File");
        return 1;
    }

    destFile = fopen(destPath, "w");

    if (destFile == NULL) 
    {
        printf("There Was An Error Opening The Destination File");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) 
    {
        fputc(ch, destFile);
    }

    printf("Contents Copied Successfully From %s To %s", sourcePath, destPath);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}