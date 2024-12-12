#include <stdio.h>
#include <stdlib.h>

int *GetMatrix(int *row, int *col, int *sum);

int main()
{
    int *data, m, n, sum;
    printf("-----------------------------------------------------\n");
    printf("Main Function - Before GetMatrix\n");
    printf("Address of m: %p\n", (void *)&m);
    printf("Address of n: %p\n", (void *)&n);
    printf("Address of sum: %p\n", (void *)&sum);
    printf("Address of data: %p\n", (void *)&data);
    printf("-----------------------------------------------------\n");

    data = GetMatrix(&m, &n, &sum);

    printf("-----------------------------------------------------\n");
    printf("\nMain Function - After GetMatrix\n");
    printf("Address of m: %p\n", (void *)&m);
    printf("Address of n: %p\n", (void *)&n);
    printf("Address of sum: %p\n", (void *)&sum);
    printf("Address of data: %p\n", (void *)&data);
    printf("Value of data (memory address): %p\n", (void *)data);
    printf("-----------------------------------------------------\n");

    // อย่าลืม free หน่วยความจำ
    free(data);

    return 0;
}

int *GetMatrix(int *row, int *col, int *sum)
{
    printf("-----------------------------------------------------\n");
    printf("\nGetMatrix Function\n");
    printf("Address of row: %p\n", (void *)row);
    printf("Address pointed by row: %p\n", (void *)&(*row));
    printf("Address of col: %p\n", (void *)col);
    printf("Address pointed by col: %p\n", (void *)&(*col));
    printf("Address of sum: %p\n", (void *)sum);
    printf("Address pointed by sum: %p\n", (void *)&(*sum));
    printf("-----------------------------------------------------\n");

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

    int *data = (int *)malloc(*sum * sizeof(int));
    if (data == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("-----------------------------------------------------\n");
    printf("\nGetMatrix Function - After allocation\n");
    printf("Address of data: %p\n", (void *)&data);
    printf("Memory address of allocated data: %p\n", (void *)data);
    printf("-----------------------------------------------------\n");

    printf("Enter the elements: ");
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

    return data;
}

/*
example
int x = 10;
int *ptr = &x;

printf("&ptr: %p\n", (void*)&ptr);  // ที่อยู่ของ pointer
printf("ptr: %p\n", (void*)ptr);     // ที่อยู่ที่ pointer ชี้
printf("*ptr: %d\n", *ptr);          // ค่าที่ pointer ชี้ถึง
*/