/*
Write a Program That Reads Text From Input File.
The Task Is To Convert All Lowercase Letters To Uppercase, And Writes The Result To Output File.
*/

#include <stdio.h>

int main() 
{
    FILE *inputFile, *outputFile;
    char ch, filename[100];

    printf("Please Enter The Input File Name : ");
    scanf("%s", filename);

    inputFile = fopen(filename, "r");

    if (inputFile == NULL) 
    {
        printf("There Was An Error Opening The Input File");
        return 1;
    }

    outputFile = fopen("output.txt", "w");

    if (outputFile == NULL) 
    {
        printf("There Was An Error Opening The Output File");
        fclose(inputFile);
        return 1;
    }

    while ((ch = fgetc(inputFile)) != EOF) 
    {
        if (ch >= 'a' && ch <= 'z') 
        {
            ch = ch - ('a' - 'A'); 
        }

        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("The Conversion Has Been Completed Successfully");
    return 0;
}