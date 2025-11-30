//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>
int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSums[rows];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++)
    {
        rowSums[i] = 0; 
        for (j = 0; j < cols; j++)
        {
            rowSums[i] += matrix[i][j];
        }
    }

    printf("The sum of each row is:\n");
    for (i = 0; i < rows; i++)
    {
        printf("Sum of row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}