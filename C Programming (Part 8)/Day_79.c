/*
Write a Program To Read a List Of Integers Separated By Spaces. 
Read All Integers, Compute Their Sum & Average, And Print Both.
*/

#include <stdio.h>

int main() 
{
    FILE *file;
    char filename[100];

    printf("Please Enter The File Name : ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) 
    {
        printf("There Was An Error Opening The File");
        return 1;
    }

    int number;
    int sum = 0;
    int count = 0;
    float average;

    while (fscanf(file, "%d", &number) == 1) 
    {
        sum += number;
        count++;
    }

    fclose(file);

    if (count == 0) 
    {
        printf("No Integers Were Found In The File");
        return 1;
    }

    average = (float)sum / count;

    printf("The Sum : %d\n", sum);
    printf("The Average : %.2f\n", average);
    
    return 0;

}