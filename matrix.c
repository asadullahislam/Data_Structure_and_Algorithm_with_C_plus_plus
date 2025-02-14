#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the value of row and column number:");
    scanf("%d%d", &row, &col);
    int matrix1[row][col];
    printf("Enter the element matrix: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("The final matrix is :\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)

        {

            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    return 0;
}