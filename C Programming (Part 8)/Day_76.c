/*
Write a Program To Ask The User For a Filename. 
Check If It Exists By Trying To Open It In Read Mode. 
If The File Pointer Is NULL, Print An Error Message; Otherwise, Read And Display Its Content.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char line[256], filename[100];

    printf("Please Enter The File Name To Open : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    printf("Contents Of The File Are As Follows : \n");

    while (fgets(line, sizeof(line), file) != NULL) 
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}