// Write a Program To Find The Digit That Occurs The Most Times In An Integer Number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Please Enter An Integer (Cannot Start With Zero) : ");
    scanf("%d", &number);

    number = abs(number);

    int digitCount[10] = {0};

    if (number == 0) {
        digitCount[0] = 1;
    }

    while (number > 0)
    {
        int digit = number % 10;
        digitCount[digit]++;
        number = number / 10;
    }

    int maxCount = 0;
    
    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] > maxCount)
        {
            maxCount = digitCount[i];
        }
    }

    printf("The Digit(s) That Occured The Most Times Are As Follows : ");

    for (int i = 0; i < 10; i++)
    {
        if (digitCount[i] == maxCount)
        {
            printf("%d ", i);
        }
    }
    
    printf("(Occurred %d Times)", maxCount);
    printf("\n");

    return 0;
}