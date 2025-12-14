// Write a Program To Take a String Input. Change It So Every First Letter Of Each Word Is Capitalized.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char *str) 
{
    int capitalizeNext = 1; 

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (isspace((unsigned char)str[i])) 
        {
            capitalizeNext = 1;
        } 
        else if (capitalizeNext) 
        {
            str[i] = toupper((unsigned char)str[i]); 
            capitalizeNext = 0; 
        } 
        else 
        {
            str[i] = tolower((unsigned char)str[i]); 
        }
    }
}

int main() 
{
    char str[1000];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);

    printf("The Modified Given String Is : %s", str);

    return 0;
}