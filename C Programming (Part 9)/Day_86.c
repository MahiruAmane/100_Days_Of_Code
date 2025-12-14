// Write a Program To Use Enum To Represent Menu Choices (ADD, SUBTRACT, MULTIPLY) & Perform Operations Using Switch.

#include <stdio.h>

enum MenuChoices 
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() 
{
    int choice, num1, num2, result;

    printf("The Given Arithmetic Operations Are As Follows : \n");
    printf("(1) Addition\n");
    printf("(2) Subtraction\n");
    printf("(3) Multiplication\n");

    printf("Please Enter Your Choice (1 To 3) : ");
    scanf("%d", &choice);

    printf("Please Enter The Two Numbers : ");
    scanf("%d %d", &num1, &num2);

    switch (choice) 
    {
        case ADD:
        {
            result = num1 + num2;
            printf("The Given Result Is : %d + %d = %d\n", num1, num2, result);
            break;
        }
        case SUBTRACT:
        {
            result = num1 - num2;
            printf("The Given Result Is : %d - %d = %d\n", num1, num2, result);
            break;
        }
        case MULTIPLY:
        {
            result = num1 * num2;
            printf("The Given Result Is : %d * %d = %d\n", num1, num2, result);
            break;
        }
        default:
        {
            printf("Invalid Choice");
            break;
        }
    }

    return 0;
}