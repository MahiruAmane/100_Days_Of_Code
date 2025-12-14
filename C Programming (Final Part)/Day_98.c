// Write a Program To Take Two Structs As Input & Check If They Are Identical.

#include <stdio.h>
#include <string.h>

struct Employee 
{
    int id;
    char name[50];
    float salary;
};

int areEmployeesIdentical(struct Employee emp1, struct Employee emp2) 
{
    if (emp1.id == emp2.id && strcmp(emp1.name, emp2.name) == 0 && emp1.salary == emp2.salary) 
    {
        return 1;
    } 
    else 
    {
        return 0; 
    }
}

int main() 
{
    struct Employee emp1, emp2;

    printf("Please Enter Details For Employee 1 : \n");

    printf("Please Enter Your Name : ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    emp1.name[strcspn(emp1.name, "\n")] = '\0';

    printf("Please Enter Your ID : ");
    scanf("%d", &emp1.id);

    printf("Please Enter Your Salary : ");
    scanf("%f", &emp1.salary);

    printf("\n");
    getchar();

    printf("Please Enter Details For Employee 2 : \n");

    printf("Please Enter Your Name : ");
    fgets(emp2.name, sizeof(emp2.name), stdin);
    emp2.name[strcspn(emp2.name, "\n")] = '\0';

    printf("Please Enter Your ID : ");
    scanf("%d", &emp2.id);

    printf("Please Enter Your Salary : ");
    scanf("%f", &emp2.salary);

    printf("\n");

    if (areEmployeesIdentical(emp1, emp2)) 
    {
        printf("The Two Employees Are Identical");
    } 
    else 
    {
        printf("The Two Employees Are Not Identical");
    }

    return 0;
}