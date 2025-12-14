// Write a Program To Define An Enum With SUCCESS, FAILURE & TIMEOUT Also Print Messages Accordingly.

#include <stdio.h>

enum Status 
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

void printStatusMessage(enum Status status) 
{
    switch (status) 
    {
        case SUCCESS:
        {
            printf("Operation Completed Successfully\n");
            break;
        }
        case FAILURE:
        {
            printf("Operation Failed\n");
            break;
        }
        case TIMEOUT:
        {
            printf("Operation Timed Out\n");
            break;
        }
        default:
        {
            printf("Unknown Status Code\n");
            break;
        }
    }
}

int main()
{
    enum Status currentStatus;
    int choice;

    printf("Enter Status Code (0 For SUCCESS, 1 For FAILURE, 2 For TIMEOUT) : ");
    scanf("%d", &choice);

    if (choice >= 0 && choice <= 2) 
    {
        currentStatus = (enum Status)choice;
        printStatusMessage(currentStatus);
    } 
    else 
    {
        printf("Invalid Status Code Entered");
    }

    return 0;
}