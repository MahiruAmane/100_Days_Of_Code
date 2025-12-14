// Write a Program To Store Details Of 5 Students In An Array Of Structures And Print All.

#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 5

struct Student 
{
    char name[50];
    int age;
    float marks;
};

int main() 
{
    struct Student students[MAX_STUDENTS];
    
    for (int i = 0; i < MAX_STUDENTS; i++) 
    {
        printf("Please Enter Details For Student %d : \n", i + 1);

        printf("Please Enter Your Name : ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Please Enter Your Age : ");
        scanf("%d", &students[i].age);

        printf("Please Enter Your Marks : ");
        scanf("%f", &students[i].marks);

        getchar();

        printf("\n");
    }


    for (int i = 0; i < MAX_STUDENTS; i++) 
    {
        printf("The Details Of Student %d Are As Follows : \n", i + 1);
        printf("------------------------------------------------\n");
        printf("Name : %s\n", students[i].name);
        printf("Age : %d\n", students[i].age);
        printf("Marks : %.2f\n", students[i].marks);
        printf("------------------------------------------------\n");
    }

    return 0;
}