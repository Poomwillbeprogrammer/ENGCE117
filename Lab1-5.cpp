#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int value[], int *row, int *col, int *sum) ;

int main()
{
    int *data, m, n, sum ;
    GetMatrix(data, &m, &n, &sum) ;
    return 0 ;
} // end function

void GetMatrix(int value[], int *row, int *col, int *sum)
{
    printf("Enter the number of rows: ") ;
    scanf("%d", row) ;
    if (*row <= 0)
    {
        printf( "Invalid input.\n" ) ;
        exit(1) ;
    }//end if
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col) ;
    if (*col <= 0)
    {
        printf( "Invalid input.\n") ;
        exit(1) ;
    }//end if
    *sum = *row * *col ;
    printf("Enter the elements: ") ;
    value = (int *)malloc(*sum * sizeof(int)) ;
    if ( value == NULL )
    {
        printf( "Memory allocation failed.\n" ) ;
        exit(1) ;
    }//end if

    for (int i = 0; i < *sum; i++)
    {
        scanf( "%d" , &value[i] ) ; 
    }// end for

    printf("------------------------------------------\n") ;

    printf("The entered matrix is: \n") ;
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf( "%d " , value [i * *col + j] ) ;
        }//end for
        printf("\n") ;
    }//end for
    printf( "------------------------------------------\n" ) ;
    
    free ( value ) ;
}//end function