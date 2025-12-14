/*
Write a Program To Read a Text File & Count How Many Vowels and Consonants Are In The File. 
Ignore Digits And Special Characters.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Please Enter The File Name : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        char lower_ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

        if ((lower_ch >= 'a' && lower_ch <= 'z')) 
        {
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Number Of Vowels : %d\n", vowels);
    printf("Number Of Consonants : %d\n", consonants);

    return 0;

}