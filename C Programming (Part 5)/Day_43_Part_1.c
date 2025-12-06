// Write a Program Reverse a String.

#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, j, len = 0;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n') 
    {
        len++;
    }

    for (i = len - 1, j = 0; i >= 0; i--, j++) 
    {
        rev[j] = str[i];
    }

    rev[j] = '\0';

    printf("Reversed String Is : %s\n", rev);

    return 0;
}