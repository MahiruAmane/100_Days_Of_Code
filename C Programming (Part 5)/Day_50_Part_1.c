// Write a Program To Change The Date Format From Date/Month/Year To Date-(Month Name)-Year.

#include <stdio.h>  
#include <string.h>

int main()
{
    char date[11];
    int day, month, year;

    printf("Please Enter Date In Date/Month/Year Format : ");
    scanf("%10s", date);

    sscanf(date, "%2d/%2d/%4d", &day, &month, &year);

    char *monthNames[] = 
    {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month >= 1 && month <= 12)
    {
        printf("The Formatted Date Is : ");
        printf("%02d-%s-%04d\n", day, monthNames[month - 1], year);
    } 
    else
    {
        printf("Invalid Month Number Entered");
    }

    return 0;
}