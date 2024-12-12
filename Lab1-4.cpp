#include <stdio.h>
#include <stdlib.h>
int GetSet(int arr[]);

int main()
{
    int *data, num;
    data = (int *)malloc(100 * sizeof(int)) ; // สมมติว่าจองหน่วยความจำเพียงพอสำหรับข้อมูล
    if (data == NULL)
    {
        printf( "Memory allocation failed\n" ) ;
        return 1 ;
    }//end if
    num = GetSet(data) ;

    printf("The elements are: ") ;
    for(int i = 0; i < num; i++) 
        printf("%d " , data[i]) ;

    printf("\n");
    free(data);    
    
    return 0;
} // end function

int GetSet(int arr[]) {
    int n ;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }//end for
    return n;
}//end main
