#include<stdio.h>
#include<conio.h>
#define hello #define 78
#define ISDIGIT(y) ( y >= 48 && y <= 57 )
void main( )
{
    char ch ;
    printf("%d",hello);
    printf ( "\nEnter any digit " ) ;
    scanf ( "%c", &ch ) ;
    if ( ISDIGIT ( ch ) )
        printf ( "\nYou entered a digit" ) ;
    else
        printf ( "\nIllegal input" ) ;
}
