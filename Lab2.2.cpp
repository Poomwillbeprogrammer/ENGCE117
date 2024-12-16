#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *reverse(char str1[]) ;
int main()
{
    char text [50] = "I Love You" ;
    char *out;
    out = reverse(text) ;
    printf( "%s" , out) ;
    free (out) ;
    return 0 ;

} // end function
char *reverse(char str1[]) {
    int len = strlen (str1) ;
    char *str2 = (char *)malloc((len + 1) * sizeof(char)) ;
    for (int i = 0; i < len ; i++)
    {
        str2[i] = str1[len - i - 1];
    }//end for
    str2[len] = '\0';

    return str2;
}//end function