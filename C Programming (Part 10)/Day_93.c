// Write a Program To Find And Print The Student With The Highest Marks.

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int marks;
};

int main() 
{
    int n, i;
    struct Student students[100];
    
    printf("Please Enter The Number Of Students : ");
    scanf("%d", &n);

    printf("\n");
    
    for(i = 0; i < n; i++) 
    {
        getchar();
        printf("Please Enter The Name Of Student %d : ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Please Enter The Marks Of Student %d : ", i + 1);
        scanf("%d", &students[i].marks);

        printf("\n");
    }

    int highest_marks_index = 0;

    for(i = 1; i < n; i++) 
    {
        if(students[i].marks > students[highest_marks_index].marks) 
        {
            highest_marks_index = i;
        }
    }

    printf("Student With The Highest Marks :\n");
    printf("Name Of The Student : %s\n", students[highest_marks_index].name);
    printf("Marks Of The Student : %d\n", students[highest_marks_index].marks);

    return 0;
}