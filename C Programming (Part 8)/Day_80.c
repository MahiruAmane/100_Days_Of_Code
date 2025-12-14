/*
Write a Program To Store Multiple Student Records (Name, Age, Gender, Roll Number, Marks) Into a File Using fprintf(). 
Then Read Them Using fscanf() And Display Each Record.
*/

#include <stdio.h>
#include <string.h>

struct Student 
{
    char name[50];
    int age;
    char gender[10];
    int rollNumber;
    float marks;
};

int main() 
{
    FILE *file;
    struct Student student;
    int n, i;

    printf("Please Enter The Number Of Students : ");
    scanf("%d", &n);

    file = fopen("students.txt", "w");
    
    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        printf("----------------------------------------------------------\n");
        printf("Please Enter The Details For Student %d :\n", i + 1);

        getchar();
        printf("Please Enter The User Name : ");
        fgets(student.name, sizeof(student.name), stdin);
        student.name[strcspn(student.name, "\n")] = 0;

        printf("Please Enter The User Age : ");
        scanf("%d", &student.age);

        printf("Please Enter The User Gender (Male/Female) : ");
        scanf("%s", student.gender);

        printf("Please Enter The User Roll Number : ");
        scanf("%d", &student.rollNumber);

        printf("Please Enter The User Marks : ");
        scanf("%f", &student.marks);

        printf("----------------------------------------------------------\n");

        fprintf(file, "%s, %d, %s, %d, %.2f\n", student.name, student.age, student.gender, student.rollNumber, student.marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    printf("Student Records Are As Follows : \n");

    while (fscanf(file, "%[^,], %d, %[^,], %d, %f\n", student.name, &student.age, student.gender, &student.rollNumber, &student.marks) != EOF)
    {
        printf("----------------------------------------------------------\n");
        printf("Name : %s\n", student.name);
        printf("Age : %d\n", student.age);
        printf("Gender : %s\n", student.gender);
        printf("Roll Number : %d\n", student.rollNumber);
        printf("Marks : %.2f\n", student.marks);
        printf("----------------------------------------------------------\n");
    }

    fclose(file);

    return 0;
}