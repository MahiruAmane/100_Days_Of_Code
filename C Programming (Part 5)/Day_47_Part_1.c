// Write a Program To Check If Two Strings Are Anagrams Of Each Other.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    printf("Please Enter The First String : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Please Enter The Second String : ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    
    if (strlen(str1) != strlen(str2)) 
    {
        printf("The Strings Are Not Anagrams");
        return 0;
    }

    for (i = 0; str1[i] && str2[i]; i++) 
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) 
    {
        if (count[i] != 0) 
        {
            printf("The Strings Are Not Anagrams");
            return 0;
        }
    }

    printf("The Strings Are Anagrams");

    return 0;
}