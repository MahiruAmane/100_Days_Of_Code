// Write a Program To Check If a Matrix Is Symmetric.

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
        printf("Matrix Is Not Symmetric Because It Is Not A Square Matrix\n");
        return 0;
    }

    int is_symmetric = 1;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric)
        {
            break;
        }
    }

    if (is_symmetric)
    {
        printf("The Matrix Is Symmetric\n");
    }
    else
    {
        printf("The Matrix Is Not Symmetric\n");
    }

    return 0;
}