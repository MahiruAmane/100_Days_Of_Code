// Write a Program To Define a Structure With Name, Roll Number & Marks, Then Read And Print One Student's Data.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

int main() 
{
    struct Student student;

    printf("Please Enter The Student Name : ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;
    
    printf("Please Enter The Roll Number : ");
    scanf("%d", &student.rollNumber);
    
    printf("Please Enter The Marks : ");
    scanf("%f", &student.marks);

    printf("Student Details Are As Follows : \n");
    printf("------------------------------------------------\n");
    printf("Name : %s\n", student.name);
    printf("Roll Number : %d\n", student.rollNumber);
    printf("Marks : %.2f\n", student.marks);
    printf("------------------------------------------------\n");

    return 0;
}