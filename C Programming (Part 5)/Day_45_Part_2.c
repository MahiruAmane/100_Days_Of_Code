// Write a Program To Toggle Case Of Each Character In a String.

#include <stdio.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
    }

    printf("Toggled Case String : %s", str);

    return 0;
}