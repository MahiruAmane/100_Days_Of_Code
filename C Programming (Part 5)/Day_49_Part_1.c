// Write a Program To Print The Initials Of a Name.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Please Enter Your Full Name : ");
    fgets(name, sizeof(name), stdin);

    printf("The Initials Of Your Name Is : ");

    if (name[0] != '\n') 
    {
        printf("%c.", name[0]);
    }

    for (int i = 0; i < strlen(name); i++) 
    {
        if (name[i] == ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') 
        {
            printf("%c.", name[i + 1]);
        }
    }
    printf("\n");

    return 0;
}