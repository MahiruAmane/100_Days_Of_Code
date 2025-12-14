// Write a Program To Print All Enum Names And Integer Values Using a Loop.

#include <stdio.h>

enum UserRole 
{
    Admin,
    User,
    Guest
};

int main() 
{
    enum UserRole role;
    const char* roleNames[] = {"Admin", "User", "Guest"};
    const int roleCount = sizeof(roleNames) / sizeof(roleNames[0]);

    printf("User Role's & Their Corresponding Integer Values :\n");

    for (role = Admin; role < roleCount; role++) 
    {
        printf("%s : %d\n", roleNames[role], role);
    }

    return 0;
}