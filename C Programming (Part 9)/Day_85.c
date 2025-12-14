// Write a C Program To Assign Explicit Values Starting From 10 & Print Them.

#include <stdio.h>

enum Numbers 
{
    A = 10,
    B,
    C,
    D,
    E
};

int main() 
{
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);
    printf("E = %d\n", E);

    return 0;
}