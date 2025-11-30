//Add two matrices.

#include <stdio.h>
int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows in the matrices: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrices: ");
    scanf("%d", &cols);

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sumMatrix[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}