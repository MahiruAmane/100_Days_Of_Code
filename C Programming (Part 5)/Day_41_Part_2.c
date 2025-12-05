// Write a Program To Print Each Character Of a String On a New Line.

#include <stdio.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    printf("The Characters In The Given String Are As Follows :\n");

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}