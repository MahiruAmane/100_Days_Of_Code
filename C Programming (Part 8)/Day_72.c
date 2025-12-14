/*
Write a Program That Opens An Existing File & Reads Its Contents using fgets(). 
The Program Should Print All The Lines To The Console Until (End Of File) Is Reached.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char line[256];

    file = fopen("user_data.txt", "r");

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