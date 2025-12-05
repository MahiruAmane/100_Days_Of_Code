// Write a Program To Count Vowels And Consonants In a String.

#include <stdio.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("The Number Of Vowels In The String Are : %d\n", vowels);
    printf("The Number Of Consonants In The String Are : %d\n", consonants);

    return 0;
}