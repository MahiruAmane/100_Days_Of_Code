// Write a Program To Count Spaces, Digits And Special Characters In a String.

#include <stdio.h>

int main()
{
    char str[100];
    int i, spaces = 0, digits = 0, specialChars = 0;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if((str[i] >= '!' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@') || (str[i] >= '[' && str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
        {
            specialChars++;
        }
    }

    printf("The Number Of Spaces In The String Are : %d\n", spaces);
    printf("The Number Of Digits In The String Are : %d\n", digits);
    printf("The Number Of Special Characters In The String Are : %d\n", specialChars);

    return 0;
}