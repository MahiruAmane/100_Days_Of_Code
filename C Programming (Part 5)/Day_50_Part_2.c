// Write a Program To Print All The Sub Strings Of a String.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("The Sub Strings of the Given String Are As Follows : \n");

    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            for (int k = i; k <= j; k++)
            {
                putchar(str[k]);
            }
            putchar('\n');
        }

        if (i < len - 1)
        {
            putchar('\n');
        }
    }

    return 0;
}