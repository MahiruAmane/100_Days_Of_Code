// Write a Program To Create Employee Structure With Nested Date Structure For Joining Date And Print Details.

#include <stdio.h>
#include <string.h>

struct Date 
{
    int day;
    int month;
    int year;
};

struct Employee 
{
    char name[50];
    int id;
    struct Date joiningDate;
};

void printEmployeeDetails(struct Employee emp) 
{
    printf("------------------------------------------------\n");
    printf("Employee Name : %s\n", emp.name);
    printf("Employee ID : %d\n", emp.id);
    printf("Joining Date : %d/%d/%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    printf("------------------------------------------------\n");

}

int main() 
{
    struct Employee emp;

    printf("Please Enter The Employee Name : ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = 0;

    printf("Please Enter The Employee ID : ");
    scanf("%d", &emp.id);

    printf("Please Enter The Joining Date (DD MM YYYY) : ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    printEmployeeDetails(emp);

    return 0;
}