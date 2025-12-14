/* 
Write a Program That Creates a Text File In Write Mode. 
The Program Should Take The User’s Name & Age As Input, And Write Them To The File. 
After Writing, Display A Message Confirming That The Data Was Successfully Saved.
*/

#include <stdio.h>
#include <string.h>

int main() 
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("user_data.txt", "w");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    printf("Please Enter Your Name : ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Please Enter Your Age : ");
    scanf("%d", &age);

    fprintf(file, "Name : %s\n", name);
    fprintf(file, "Age  : %d\n", age);

    fclose(file);

    printf("Data Successfully Saved To The File");

    return 0;
}