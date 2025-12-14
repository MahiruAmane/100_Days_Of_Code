// Write a Program To Store Employee Data In a Binary File Using fwrite() & Read Using fread().

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

void writeEmployeeData(const char *filename) 
{
    FILE *file = fopen(filename, "wb");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File For Writing");
        return;
    }

    struct Employee emp;
    int n;

    printf("Please Enter Number Of Employees To Store : ");
    scanf("%d", &n);

    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        printf("Entering Data For Employee %d : \n", i + 1);

        getchar();
        printf("Please Enter The Employee Name : ");
        fgets(emp.name, sizeof(emp.name), stdin);
        emp.name[strcspn(emp.name, "\n")] = 0;

        printf("Please Enter The Employee ID : ");
        scanf("%d", &emp.id);

        printf("Please Enter The Employee Salary : ");
        scanf("%f", &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, file);

        printf("\n");
    }

    fclose(file);
}

void readEmployeeData(const char *filename) 
{
    FILE *file = fopen(filename, "rb");

    if (file == NULL) 
    {
        printf("There was An Error Opening The File For Reading");
        return;
    }

    struct Employee emp;

    while (fread(&emp, sizeof(struct Employee), 1, file)) 
    {
        printf("------------------------------------------------\n");
        printf("Employee ID : %d\n", emp.id);
        printf("Employee Name : %s\n", emp.name);
        printf("Employee Salary : %.2f\n", emp.salary);
        printf("------------------------------------------------\n");
    }

    fclose(file);
}

int main() 
{
    const char *filename = "employees.dat";

    writeEmployeeData(filename);
    readEmployeeData(filename);

    return 0;
}