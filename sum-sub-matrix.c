#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the first matrix value of row and column number:");
    scanf("%d%d", &row, &col);

    printf("Enter the second matrix value of row and column number:");
    scanf("%d%d", &row, &col);

    int matrix1[row][col];
    int matrix2[row][col];
    printf("Enter the element matrix1 is :\n ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("The final matrix1 is :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {

            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element matrix2 is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("The final matrix2 is :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {

            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    printf("The Sumation of two matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix2[i][j] + matrix1[i][j]);
        }
        printf("\n");
    }

    printf("The Subtreaction  of two matrix is :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix2[i][j] - matrix1[i][j]);
        }
        printf("\n");
    }

    return 0;
}