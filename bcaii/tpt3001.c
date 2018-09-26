#include<conio.h>
#include<stdio.h>
void main()
{
    int i;
    for(i=-127;i<126;i++)
        printf("%d\t%c\n",i,i);
    getch();
}
