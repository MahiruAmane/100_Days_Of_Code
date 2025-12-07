// Write a Program To Find The First Repeating Lowercase Alphabet In a String.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[26] = {0};

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2)
            {
                printf("The First Repeating Lowercase Alphabet Is : %c", str[i]);
                return 0;
            }
        }
    }

    return 0;
}