// Write a Program To Check If a String Is a Palindrome.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len, i, flag = 1;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;
    len = strlen(str);

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        printf("The Given String Is a Palindrome\n");
    }
    else
    {
        printf("The Given String Is Not a Palindrome\n");
    }

    return 0;
}