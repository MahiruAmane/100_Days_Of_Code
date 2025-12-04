// Write a Program To Find The Sum Of Each Row Of A Matrix And Store It In An Array.

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

    int row_sums[rows];

    for (i = 0; i < rows; i++)
    {
        row_sums[i] = 0;
        for (j = 0; j < cols; j++)
        {
            row_sums[i] += matrix[i][j];
        }
    }

    printf("Sum Of Each Row Is As Follows : \n");
    for (i = 0; i < rows; i++)
    {
        printf("The Sum Of Row %d Is : %d\n", i + 1, row_sums[i]);
    }

    return 0;
}