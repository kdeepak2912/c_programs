#include<stdio.h>
#include<conio.h>
void main(){
    int a=-10,b=120,c,d,e,f;
    c=a&b;
    d=a|b;
    e=a^b;
    f=~a;
    printf("a&b=%d\na|b=%d\na^b=%d\n~a=%d",c,d,e,f);
    printf("\n\n\n %d",-121>>3);
    getch();
}
