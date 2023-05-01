#include <stdio.h>
int main(void)
{
    int Rows;
    int Columns;
    printf("Enter rows and columns of matrix: ");
    fflush(stdout);
    scanf("%d\n%d", &Rows, &Columns);

    int matrix[Rows][Columns];
    printf("Enter elements of matrix: \n");
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("Enter element a%d%d: ", i+1, j+1);
            fflush(stdout);
            scanf("%d", &matrix[i][j]);
        }

    }

    printf("Entered matrix:\n");
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j < Columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose_matrix[Columns][Rows];
    for (int i = 0; i < Columns; i++)
    {
        for (int j = 0; j < Rows; j++)
        {
            transpose_matrix[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < Columns; i++)
    {
        for (int j = 0; j < Rows; j++)
        {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }

}