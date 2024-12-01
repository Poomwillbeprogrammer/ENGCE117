#include <stdio.h>
#include <stdlib.h>

void GetSet( int data[], int *pNum ) ;

int main() {
    int *data,num ;
    data = (int *)malloc(num * sizeof(int));
    GetSet( data, &num ) ;
    return 0 ;
}//end function

 void GetSet ( int data[], int *pNum ) {
   printf( "Enter the number of data :" ) ;
   scanf( "%d", pNum ) ;
   for ( int i = 0 ; i < *pNum ; i++ ) {
       scanf( "%d", &data[i] ) ;
   }
   for ( int i = 0 ; i < *pNum ; i++ ) {
       printf( "%d ", data[i] ) ;
   }
   printf( "\n" ) ;
}