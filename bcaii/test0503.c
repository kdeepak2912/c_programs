#include<stdio.h>
#include<conio.h>
#define char int
#define clrsc clrscr();
#define hello printf("\n***Hello****");
void main(){
    char i;//macro will replace char with int
    clrsc
    i=10;
    printf("%d",i);
    hello
    return 0;
}
/*storage class
static
ext
reg
*/
