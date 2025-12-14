// Write a Program TO Return a Structure Containing Top Student's Details From a Function.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int rollNumber;
    float marks;
};

struct Student getTopStudent(struct Student students[], int count) 
{
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) 
    {
        if (students[i].marks > topStudent.marks) 
        {
            topStudent = students[i];
        }
    }
    return topStudent;
}

int main() 
{
    int n;

    printf("Please Enter The Number Of Students : ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Please Enter Details For Student %d :\n", i + 1);

        getchar();
        printf("Please Enter Your Name : ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Please Enter Your Roll Number : ");
        scanf("%d", &students[i].rollNumber);

        printf("Please Enter Your Marks : ");
        scanf("%f", &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, n);

    printf("\n");
    printf("Top Student Details :\n");
    printf("------------------------------------------------\n");
    printf("Name : %s\n", topStudent.name);
    printf("Roll Number : %d\n", topStudent.rollNumber);
    printf("Marks : %.2f\n", topStudent.marks);
    printf("------------------------------------------------\n");

    return 0;
}