// Write a Program To Multiply Two Matrices.

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int row2, col2;

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

    printf("Please Enter Number Of Rows For Second Matrix : ");
    scanf("%d", &row2);

    printf("Please Enter Number Of Columns For Second Matrix : ");
    scanf("%d", &col2);

    if (cols != row2)
    {
        printf("Matrix Multiplication Not Possible.\n");
        return 0;
    }

    int matrix2[row2][col2];

    printf("Please Enter Elements Of The Second Matrix : \n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The Second Matrix Is As Follows : \n");

    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    int result[rows][col2];

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                result[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }

    printf("The Resultant Matrix After Multiplication Is : \n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}