// Write a Program To Check If One String Is a Rotation Of Another.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int len1, len2, i, flag = 0;

    printf("Please Enter The First String : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Please Enter The Second String : ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("The Second String Is Not A Rotation Of The First String");
        return 0;
    }

    for (i = 0; i < len1; i++)
    {
        if (strncmp(str1, str2 + i, len1 - i) == 0 && strncmp(str1 + len1 - i, str2, i) == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("The Second String Is A Rotation Of The First String");
    }
    else
    {
        printf("The Second String Is Not A Rotation Of The First String");
    }

    return 0;
}