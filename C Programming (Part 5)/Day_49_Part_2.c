// Write a Program To Print Initials Of a Name With The Surname Displayed In Full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];

    printf("Please Enter Your Full Name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    printf("The Initials Of Your Name Is : ");

    int len = strlen(name);
    int i;

    for (i = 0; i < len; i++)
    {
        if (i == 0 && isalpha(name[i]))
        {
            printf("%c. ", toupper(name[i]));
        }
        else if (name[i] == ' ' && i + 1 < len && isalpha(name[i + 1]))
        {
            if (strchr(name + i + 1, ' ') != NULL)
            {
                printf("%c. ", toupper(name[i + 1]));
            }
            else
            {
                printf("%s", name + i + 1);
                break;
            }
        }
    }

    return 0;
}