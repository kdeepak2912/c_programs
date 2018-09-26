#include<stdio.h>
#include<conio.h>
int num;
void main(){
    register int a;
    auto int b;
    static int c;
    extern int num;
    printf("%d\n%d\n%d\n%d",a,b,c,num);
    getch();
}
