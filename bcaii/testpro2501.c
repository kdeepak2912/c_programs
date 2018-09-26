
#include<stdio.h>
#include<conio.h>
void main()
{
    //print d and i
    int i=10,d;
    d=i++ + ++i + i++;
    printf("%d\n%d",i,d);
    getch();
}
