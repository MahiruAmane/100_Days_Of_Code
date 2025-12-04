// Write a Program To Check If The Elements On The Diagonal Of a Matrix Are Distinct.

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Please Enter Number Of Rows : ");
    scanf("%d", &rows);

    printf("Please Enter Number Of Columns : ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    printf("Please Enter Elements Of The Matrix : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The Given Matrix Is As Follows : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if (rows != cols) 
    {
        printf("Matrix Is Not Square Hence Diagonal Elements Cannot Be Distinct\n");
        return 0;
    }

    int distinct = 1;

    for (i = 0; i < rows; i++)
    {
        for (j = i + 1; j < cols; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
        {
            break;
        }
    }

    if (distinct)
    {
        printf("Diagonal Elements Are Distinct\n");
    }
    else
    {
        printf("Diagonal Elements Are Not Distinct\n");
    }

    return 0;
}