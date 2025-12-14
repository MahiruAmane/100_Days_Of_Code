/*
Write a Program To Take Two Strings & As Inputs.
The Task Is To Determine If The Two Strings Are Valid Anagrams.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

bool areAnagrams(char str1[], char str2[]) 
{
    int count[256] = {0};

    if (strlen(str1) != strlen(str2)) 
    {
        return false;
    }

    for (int i = 0; str1[i] && str2[i]; i++) 
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (count[i] != 0) 
        {
            return false;
        }
    }

    return true;
}

int main() 
{
    char str1[MAX], str2[MAX];

    printf("Please Enter The First String : ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Please Enter The Second String : ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0; 

    if (areAnagrams(str1, str2)) 
    {
        printf("The Two Strings Are Anagrams");
    } 
    else 
    {
        printf("The Two Strings Are Not Anagrams");
    }

    return 0;
}