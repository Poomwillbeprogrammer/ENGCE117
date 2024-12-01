#include <stdio.h>
int main() {
    int input ;
    printf( "Input : " ) ;
    scanf( "%d", &input ) ;
    for ( int i = 1 ; i <= input ; i++ ) {
        printf( "\n[%d] Hello World ", i ) ;
    }
    return 0 ;
}