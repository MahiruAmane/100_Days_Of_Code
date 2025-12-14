// Write a Program To Create an Enumeration For Days & Print Each Day With It's Integer Value.

#include <stdio.h>

enum Days 
{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday    
};

int main() 
{
    enum Days day;

    for (day = Sunday; day <= Saturday; day++) 
    {
        switch (day) 
        {
            case Sunday:
            {
                printf("Sunday : %d\n", Sunday);
                break;
            }
            case Monday:
            {
                printf("Monday : %d\n", Monday);
                break;
            }
            case Tuesday:
            {
                printf("Tuesday : %d\n", Tuesday);
                break;
            }
            case Wednesday:
            {
                printf("Wednesday : %d\n", Wednesday);
                break;
            }
            case Thursday:
            {
                printf("Thursday : %d\n", Thursday);
                break;
            }
            case Friday:
            {
                printf("Friday : %d\n", Friday);
                break;
            }
            case Saturday:
            {
                printf("Saturday : %d\n", Saturday);
                break;
            }
        }
    }

    return 0;
}