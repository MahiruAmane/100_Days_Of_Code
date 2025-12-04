// Write a Program To Count Characters In a String Without Using Built In Length Functions.

#include <stdio.h>

int main()
{
    char str[100];

    printf("Please Enter a String : ");
    fgets(str, sizeof(str), stdin);

    int count = 0;

    while (str[count] != '\0' && str[count] != '\n')
    {
        count++;
    }

    printf("The Length Of The Given String Is : %d\n", count);

    return 0;
}