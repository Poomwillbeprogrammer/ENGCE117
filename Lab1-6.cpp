#include <stdio.h>
#include <stdlib.h>
int GetMatrix(int *row, int *col, int *sum, int *data);
int main()
{
    int *data, m, n, sum;
    *data = GetMatrix(&m, &n, &sum, data);
    
    
    return 0;
} // end function
int GetMatrix(int *row, int *col, int *sum, int *data)
{
    printf("Enter the number of rows: ");
    scanf("%d", row);
    if (*row <= 0)
    {
        printf("Invalid input.\n");
        exit(1);
    }
    printf("Enter the number of columns: ");
    scanf("%d", col);
    if (*col <= 0)
    {
        printf("Invalid input.\n");
        exit(1);
    }
    *sum = *row * *col;
    printf("Enter the elements: ");
    data = (int *)malloc(*sum * sizeof(int));
    if (data == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < *sum; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("------------------------------------------\n");

    printf("The entered matrix is: \n");
    for (int i = 0; i < *row; i++)
    {
        for (int j = 0; j < *col; j++)
        {
            printf("%d ", data[i * *col + j]);
        }
        printf("\n");
    }
    printf("------------------------------------------\n");

    free(data);
}