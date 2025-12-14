// Write a Program TO Define a Struct With Enum Gender And Print Person's Gender.

#include <stdio.h>
#include <string.h>

enum Gender 
{
    Male,
    Female
};

struct Person 
{
    enum Gender gender;
};

void printGender(struct Person p) 
{
    if (p.gender == Male) 
    {
        printf("User Gender Is : Male");   
    }
    else if (p.gender == Female) 
    {
        printf("User Gender Is : Female");
    }
    else 
    {
        printf("Invalid Gender");
    }
}

int main() 
{
    struct Person person1, person2;
    int genderInput;

    printf("Please Enter The User Gender (0 For Male, 1 For Female) : ");
    scanf("%d", &genderInput);

    if (genderInput == 0) 
    {
        person1.gender = Male;
    }
    else if (genderInput == 1)
    {
        person1.gender = Female;
    }
    else 
    {
        printf("Invalid User Input");
        return 1;
    }
    
    printGender(person1);

    return 0;
}