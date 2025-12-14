// Write a Program To Show That Enums Store Integers By Printing Assigned Values.

#include <stdio.h>

enum Colors 
{
    Red,
    Green,
    Blue
};

int main() 
{
    printf("Value Of Red : %d\n", Red);
    printf("Value of Green : %d\n", Green);
    printf("Value of Blue : %d\n", Blue);
    
    return 0;
}