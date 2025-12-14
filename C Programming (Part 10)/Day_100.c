// Write a Program To Use Pointer To Struct To Modify & Display Data Using -> Operator.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int age;
    float marks;
};

int main() 
{
    struct Student student1;
    struct Student *ptr;

    ptr = &student1;

    printf("Please Enter Your Name : ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    ptr->name[strcspn(ptr->name, "\n")] = 0;

    printf("Please Enter Your Age : ");
    scanf("%d", &ptr->age);

    printf("Please Enter Your Marks : ");
    scanf("%f", &ptr->marks);

    printf("\n");
    printf("Student Details Are As Follows : \n");
    printf("------------------------------------------------\n");
    printf("Name : %s\n", ptr->name);
    printf("Age : %d\n", ptr->age);
    printf("Marks : %.2f\n", ptr->marks);    
    printf("------------------------------------------------\n");

    return 0;
}