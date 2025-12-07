// Write a Program To Reverse Each Word In a Sentence Without Changing The Word Order.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, j, start, end, len;

    printf("Please Enter a Sentence : ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    
    if (str[len - 1] == '\n') 
    {
        str[len - 1] = '\0'; 
        len--;
    }

    start = 0;

    for (i = 0; i <= len; i++) 
    {
        if (str[i] == ' ' || str[i] == '\0') 
        {
            end = i - 1;

            while (start < end) 
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("The Sentence After Reversing Each Word : %s", str);

    return 0;
}