// Write a Program To Find The Longest Word In a Sentence.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], longest[100], word[100];
    int i = 0, j = 0, maxLength = 0, length = 0;

    printf("Please Enter a Sentence : ");
    fgets(str, sizeof(str), stdin);

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            length = j;

            if (length > maxLength)
            {
                maxLength = length;
                strcpy(longest, word);
            }
            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
        {
            break;
        }  
        i++;
    }

    printf("The Longest Word In The Given Sentence Is : %s", longest);

    return 0;
}