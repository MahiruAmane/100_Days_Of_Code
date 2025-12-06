// Write a Program To Count Frequency Of a Given Character In a String.

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, count = 0;

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    printf("Please Enter a Character to Find It's Frequency : ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("The Frequency of '%c' In The String Is : %d", ch, count);
    
    return 0;
}