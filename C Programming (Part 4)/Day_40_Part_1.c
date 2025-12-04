// Write a Program To Perform Diagonal Traversal Of a Matrix.

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
        printf("Matrix Is Not Square Hence Diagonal Traversal Cannot Be Performed\n");
        return 0;
    }

    printf("Diagonal Traversal Of The Matrix Is As Follows : \n");
    
    for (i = 0; i < rows; i++)
    {
        printf("%d ", matrix[i][i]);
    }

    return 0;
}