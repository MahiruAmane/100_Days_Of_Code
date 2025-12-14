// Write a Program To Define a Function That Accepts a Structure As Parameter And Prints It's Members.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int marks;
};

void printStudent(struct Student s) 
{
    printf("Name Of The Student : %s\n", s.name);
    printf("Marks Of The Student : %d\n", s.marks);
}

int main() 
{
    struct Student student;

    printf("Please Enter The Name Of The Student : ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;

    printf("Please Enter The Marks Of The Student : ");
    scanf("%d", &student.marks);

    printf("Student Details : \n");
    printStudent(student);

    return 0;
}