#include <stdio.h>
int main(void)
{
    float matrix1 [2][2];
    float matrix2 [2][2];
    float Total_matrix[2][2];

    printf("Enter the elements of 1st matrix\n");
    printf("Enter a11: ");
    scanf("%f", &matrix1[0][0]);
    printf("Enter a12: ");
    scanf("%f", &matrix1[0][1]);
    printf("Enter a21: ");
    scanf("%f", &matrix1[1][0]);
    printf("Enter a22: ");
    scanf("%f", &matrix1[1][1]);

    printf("Enter the elements of 2nd matrix\n");
    printf("Enter b11: ");
    scanf("%f", &matrix2[0][0]);
    printf("Enter b12: ");
    scanf("%f", &matrix2[0][1]);
    printf("Enter b21: ");
    scanf("%f", &matrix2[1][0]);
    printf("Enter b22: ");
    scanf("%f", &matrix2[1][1]);


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            Total_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
        
    }
    printf("Sum of Matrix:\n");
    printf("%.1f   %.1f\n%.1f   %.1f\n", Total_matrix[0][0], Total_matrix[0][1], Total_matrix[1][0], Total_matrix[1][1]);
}
