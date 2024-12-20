#include <stdio.h>
#include <stdlib.h>

void go(int ***p, int **z);

int main()
{
    int *b = (int *)malloc(sizeof(int));
    *b = 10;
    int *c = (int *)malloc(sizeof(int));
    *c = 20;
    int **a = NULL; // Initialize a to NULL
    go(&a, &b);
    
    printf("-----------------a <- b-----------------\n\n") ;
    printf("%d %p %p %p \n", **a, (void **)*a, (void *)a, &a);
    printf("\n");
    go(&a, &c);
    
    printf("-----------------a <- c-----------------\n") ;
    printf("%d %p %p %p \n", **a, *a, a, &a);
    printf("\n");
    free(b);
    free(c);
} // end function

void go(int ***p, int **z) {
    *p = z; // Corrected assignment
    printf("---------------infunction-----------------\n") ;
    printf("%p %p %p \n", (void ***)**p, (void **)*p, &p) ;
    printf("\n") ;
}