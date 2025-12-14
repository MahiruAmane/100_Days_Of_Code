// Write a Program To Create An Enum For Months And Print How Many Days Each Month Has.

#include <stdio.h>

enum Months 
{
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int getDaysInMonth(enum Months month, int isLeapYear) 
{
    switch (month) 
    {
        case JANUARY:
        {
            return 31;
        }
        case FEBRUARY: 
        {
            return isLeapYear ? 29 : 28;
        }
        case MARCH: 
        {
            return 31;
        }
        case APRIL: 
        {
            return 30;
        }
        case MAY: 
        {
            return 31;
        }
        case JUNE: 
        {
            return 30;
        }
        case JULY: 
        {
            return 31;
        }
        case AUGUST: 
        {
            return 31;
        }
        case SEPTEMBER: 
        {
            return 30;
        }
        case OCTOBER: 
        {
            return 31;
        }
        case NOVEMBER: 
        {
            return 30;
        }
        case DECEMBER: 
        {
            return 31;
        }
        default: 
        {
            return 0;
        }
    }
}

int main() 
{
    int month, isLeapYear;

    printf("Please Enter The Month Number (1 To 12) : ");
    scanf("%d", &month);

    printf("Is It A Leap Year? (1 For Yes, 0 For No) : ");
    scanf("%d", &isLeapYear);
    
    enum Months monthEnum = (enum Months)month;
    int days = getDaysInMonth(monthEnum, isLeapYear);

    if (days == 0) 
    {
        printf("Invalid Month Number");
    } 
    else 
    {
        printf("Total Number Of Days : %d", days);
    }

    return 0;
}