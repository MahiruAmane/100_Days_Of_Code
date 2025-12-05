// Write a Program To Convert a Lowercase String To Uppercase Without Using Built In Functions.

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase String Is As Follows : %s", str);

    return 0;
}