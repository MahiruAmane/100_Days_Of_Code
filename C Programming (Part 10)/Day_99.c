// Write a Program To Use malloc() To Allocate Structure Memory Dynamically And Print Details.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    int id;
    char name[50];
    float marks;
};

int main() 
{
    struct Student *studentPtr;

    studentPtr = (struct Student *)malloc(sizeof(struct Student));

    if (studentPtr == NULL) 
    {
        printf("Memory Allocation Failed");
        return 1;
    }

    printf("Please Enter The Student Name : ");
    fgets(studentPtr->name, sizeof(studentPtr->name), stdin);
    studentPtr->name[strcspn(studentPtr->name, "\n")] = 0;

    printf("Please Enter The Student ID : ");
    scanf("%d", &studentPtr->id);

    printf("Please Enter The Student Marks : ");
    scanf("%f", &studentPtr->marks);

    printf("\n");

    printf("Student Details Are As Follows : \n");
    printf("------------------------------------------------\n");
    printf("ID : %d\n", studentPtr->id);
    printf("Name : %s\n", studentPtr->name);
    printf("Marks : %.2f\n", studentPtr->marks);
    printf("------------------------------------------------\n");

    free(studentPtr);

    return 0;
}