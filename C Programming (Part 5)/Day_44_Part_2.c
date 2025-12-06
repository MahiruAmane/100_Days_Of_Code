// Write a Program To Replace Spaces With Hyphens In a String.

#include <stdio.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }
    }

    printf("The Modified String Is : %s", str);

    return 0;
}