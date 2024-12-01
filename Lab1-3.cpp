#include <stdio.h>
#include <stdlib.h>
int *GetSet(int *num);

int main()
{
    int *data, num;
    data = GetSet(&num);
    for (int i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    free(data);
    return 0;
} // end function

int *GetSet(int *num) {
    printf("Enter the number of elements: ");
    scanf("%d", num);
    int *data = (int *)malloc(*num * sizeof(int));
    if (data == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Enter the elements: ");
    for (int i = 0; i < *num; i++) {
        scanf("%d", &data[i]);
    }
    return data;
}