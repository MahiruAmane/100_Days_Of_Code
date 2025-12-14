// Write a Program To Create An Enum For User Roles (ADMIN, USER, GUEST) & Display Messages Based On Role.

#include <stdio.h>

enum UserRole 
{
    ADMIN,
    USER,
    GUEST
};

void displayMessage(enum UserRole role) 
{
    switch (role) 
    {
        case ADMIN:
        {
            printf("Welcome Admin, You Have Full Access\n");
            break;
        }
        case USER:
        {
            printf("Welcome User, You Have Limited Access\n");
            break;
        }
        case GUEST:
        {
            printf("Welcome Guest, You Have Minimal Access\n");
            break;
        }
        default:
        {
            printf("Invalid Role");
        }
    }
}

int main() 
{
    enum UserRole role;
    int choice;

    printf("Please Select Your Role : \n");
    printf("(1) Admin\n");
    printf("(2) User\n");
    printf("(3) Guest\n");
    printf("Please Enter Your Choice (1 To 3) : ");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
        {
            role = ADMIN;
            break;
        }
        case 2:
        {
            role = USER;
            break;
        }  
        case 3:
        {
            role = GUEST;
            break;
        }
        default:
        {
            printf("Invalid Choice");
            return 1;
        }
    }

    displayMessage(role);

    return 0;
}