/*
Write a Program To Take a String As Input. 
The Task Is To Find The Length Of The Longest Substring Without Repeating Characters. 
Print The Length As Output.
*/

#include <stdio.h>

int lengthOfLongestSubstring(char * s)
{
    int index[128] = {0};
    int maxLength = 0;
    int start = 0;

    for (int i = 0; s[i] != '\0'; i++) 
    {
        char currentChar = s[i];

        if (index[(int)currentChar] > start) 
        {
            start = index[(int)currentChar];
        }

        index[(int)currentChar] = i + 1; 
        int currentLength = i - start + 1;

        if (currentLength > maxLength) 
        {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() 
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
    }

    int length = lengthOfLongestSubstring(str);

    printf("Length Of The Longest Substring Without Repeating Characters : %d", length);

    return 0;
}