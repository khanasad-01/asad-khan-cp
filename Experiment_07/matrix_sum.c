/* Experiment 7 - Task 2
   Calculate the sum of two matrices. */
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }

    /* add corresponding elements */
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nSum of the two matrices:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%5d", sum[i][j]);
        printf("\n");
    }
    return 0;
}
